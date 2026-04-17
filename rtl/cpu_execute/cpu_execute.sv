// this module performs both execute and writeback
// structure looks like this:
// Rename2  -> alu_reservation_station  -> alu  -> writeback
//          -> cmp_reservation_station  -> cmp  -> writeback
//          -> jump_reservation_station -> jump -> writeback
//          -> load store queue         -> mem  -> writeback
// writeback does the following:
// - update midcore/busy table
// - update physical register file 
// - broadcast to all reservation station and load store q to wake up busy instuctions
// - set ROB_t.done to 1
// - set ROB_t.branch_mispredict and branch target
// - set DMEM output for load store
// CPU_EXECUTE will be aligned with CPU_COMMIT. To update ROB, etc.
module cpu_execute
import rv32i_types::*;
(
    input   logic                       clk,
    input   logic                       rst,

    // from branch_recover (execute-time mispredict)
    input   logic                       exec_mispredict,
    input   logic       [ROB_IDX-1:0]   exec_mispredict_rob_idx,
    input   logic       [ROB_IDX-1:0]   rdPtr_i,            // ROB rdPtr for age comparison

    // from cpu_commit (load/store commit pulses)
    input   logic                       load_commit_i,
    input   logic       [ROB_IDX-1:0]   load_commit_rob_entry_i,
    input   logic       [31:0]          load_commit_pc_i,
    input   logic                       store_commit_i,
    input   logic       [ROB_IDX-1:0]   store_commit_rob_entry_i,
    input   logic       [31:0]          store_commit_pc_i,

    // TO CPU_MIDCORE
    output  logic                       alu_full_o,
    output  logic                       cmp_full_o,
    output  logic                       load_full_o,
    output  logic                       store_full_o,
    output  logic                       jump_full_o,
    output  logic                       mul_full_o,
    // TO CPU_MIDCORE Update busy table
    // (the reservation station wake up mechanism is done here)
    // (Physical Register File update is also done here)
    output   logic                       wb_alu,
    output   logic                       wb_load,
    output   logic                       wb_jump,
    output   logic                       wb_cmp,
    output   logic                       wb_mul,
    output   logic                       wb_fwd,
    output   logic       [PRF_IDX-1:0]   wb_alu_pr,
    output   logic       [PRF_IDX-1:0]   wb_load_pr,
    output   logic       [PRF_IDX-1:0]   wb_jump_pr,
    output   logic       [PRF_IDX-1:0]   wb_cmp_pr,
    output   logic       [PRF_IDX-1:0]   wb_mul_pr,
    output   logic       [PRF_IDX-1:0]   wb_fwd_pr,

    // FROM CPU_MIDCORE
    input   rob_t                       ROB_midcore_i,
    input   midcore_t                   MIDCORE_midcore_i,

    // Write Back to ROB
    output  rob_t                       alu_ROB_exec_o,
    output  rob_t                       cmp_ROB_exec_o,
    output  rob_t                       jump_ROB_exec_o,
    output  rob_t                       mem_ROB_exec_o,
    output  rob_t                       mul_ROB_exec_o,
    // Valid flags for branch_recover.sv
    output  logic                       cmp_valid_o,
    output  logic                       jump_valid_o,

    // Store ROB-only update (lsq → cpu_commit)
    output  logic                       store_wb_valid_o,
    output  rob_t                       store_wb_rob_data_o,

    // Forwarded load ROB+PRF update (lsq → cpu_commit)
    output  logic                       fwd_ROB_exec_valid_o,
    output  rob_t                       fwd_ROB_exec_o,

    // Spec-load mispredict (lsq → cpu_commit, cpu_midcore, cpu_frontend, cpu.sv)
    output  logic                       spec_load_mispredict_o,
    output  logic       [31:0]          spec_load_recover_pc_o,
    output  logic       [ROB_IDX-1:0]   spec_load_rob_idx_o,
    output  logic       [LC_IDX-1:0]    spec_load_checkpoint_id_o,

    // send to DMEM
    output  logic       [31:0]          dmem_addr,
    output  logic                       dmem_read,
    output  logic                       dmem_write,
    output  logic       [3:0]           dmem_wmask,
    input   logic       [31:0]          dmem_rdata,
    output  logic       [31:0]          dmem_wdata,
    input   logic                       dmem_resp
);
    logic           lq_full, sq_full;
    logic           alu_valid, jump_valid, cmp_valid, mul_valid;
    logic   [31:0]  lookup_alu_pr1_val, lookup_cmp_pr1_val, lookup_lsq_pr1_val, lookup_jump_pr1_val, lookup_mul_pr1_val;
    logic   [31:0]  lookup_alu_pr2_val, lookup_cmp_pr2_val, lookup_lsq_pr2_val, lookup_jump_pr2_val, lookup_mul_pr2_val;

    rob_t       alu_ROB_data_i,     cmp_ROB_data_i,     jump_ROB_data_i,     mul_ROB_data_i;
    midcore_t   alu_MIDCORE_data_i, cmp_MIDCORE_data_i, jump_MIDCORE_data_i, mul_MIDCORE_data_i;
    logic       alu_empty_i,        cmp_empty_i,        jump_empty_i,        mul_empty_i;

    // lsq → mem.sv load issue
    logic                    load_issue_valid;
    logic   [31:0]           load_issue_addr;
    logic   [3:0]            load_issue_rmask;
    logic   [PRF_IDX-1:0]   load_issue_new_p;
    rob_t                    load_issue_rob_data;
    logic   [2:0]            load_issue_funct3;
    // lsq → mem.sv store issue
    logic                    store_issue_valid;
    logic   [31:0]           store_issue_addr;
    logic   [3:0]            store_issue_wmask;
    logic   [31:0]           store_issue_wdata;
    rob_t                    store_issue_rob_data;
    // mem.sv → lsq.sv feedback
    logic                    load_done;
    logic   [ROB_IDX-1:0]   load_done_rob_entry;
    logic                    store_done;
    // mem.sv load writeback
    logic                    wb_load_valid;
    logic   [31:0]           wb_load_val;
    rob_t                    wb_load_rob_data;
    // lsq.sv forwarding writeback
    logic                    wb_fwd_valid;
    logic   [31:0]           wb_fwd_val;
    rob_t                    wb_fwd_rob_data;

    assign cmp_valid_o  = cmp_valid;
    assign jump_valid_o = jump_valid;

    assign load_full_o  = lq_full;
    assign store_full_o = sq_full;

    assign wb_alu       = alu_valid  && alu_ROB_exec_o.rd_valid;
    assign wb_load      = wb_load_valid;
    assign wb_jump      = jump_valid && jump_ROB_exec_o.rd_valid;
    assign wb_cmp       = cmp_valid  && cmp_ROB_exec_o.rd_valid;
    assign wb_mul       = mul_valid  && mul_ROB_exec_o.rd_valid;
    assign wb_fwd       = wb_fwd_valid;
    assign wb_alu_pr    = alu_ROB_exec_o.new_p;
    assign wb_jump_pr   = jump_ROB_exec_o.new_p;
    assign wb_cmp_pr    = cmp_ROB_exec_o.new_p;
    assign wb_mul_pr    = mul_ROB_exec_o.new_p;

    assign mem_ROB_exec_o       = wb_load_rob_data;
    assign fwd_ROB_exec_valid_o = wb_fwd_valid;
    assign fwd_ROB_exec_o       = wb_fwd_rob_data;

    ///////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////  PRF  //////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////
    physical_regfile PRF(
        .clk(clk),
        .rst(rst),
        .alu_wb(wb_alu),
        .cmp_wb(wb_cmp),
        .load_wb(wb_load),
        .jump_wb(wb_jump),
        .mul_wb(wb_mul),
        .fwd_wb(wb_fwd),
        .alu_val(alu_ROB_exec_o.rd_wdata),
        .cmp_val(cmp_ROB_exec_o.rd_wdata),
        .load_val(wb_load_val),
        .jump_val(jump_ROB_exec_o.rd_wdata),
        .mul_val(mul_ROB_exec_o.rd_wdata),
        .fwd_val(wb_fwd_val),
        .alu_pr(wb_alu_pr),
        .cmp_pr(wb_cmp_pr),
        .load_pr(wb_load_pr),
        .jump_pr(wb_jump_pr),
        .mul_pr(wb_mul_pr),
        .fwd_pr(wb_fwd_pr),
        .lookup_alu_pr1(alu_MIDCORE_data_i.pr1),
        .lookup_cmp_pr1(cmp_MIDCORE_data_i.pr1),
        .lookup_lsq_pr1(MIDCORE_midcore_i.pr1),
        .lookup_jump_pr1(jump_MIDCORE_data_i.pr1),
        .lookup_mul_pr1(mul_MIDCORE_data_i.pr1),
        .lookup_alu_pr2(alu_MIDCORE_data_i.pr2),
        .lookup_cmp_pr2(cmp_MIDCORE_data_i.pr2),
        .lookup_lsq_pr2(MIDCORE_midcore_i.pr2),
        .lookup_jump_pr2(jump_MIDCORE_data_i.pr2),
        .lookup_mul_pr2(mul_MIDCORE_data_i.pr2),
        .lookup_alu_pr1_valid(alu_MIDCORE_data_i.pr1_valid),
        .lookup_cmp_pr1_valid(cmp_MIDCORE_data_i.pr1_valid),
        .lookup_lsq_pr1_valid(MIDCORE_midcore_i.pr1_valid),
        .lookup_jump_pr1_valid(jump_MIDCORE_data_i.pr1_valid),
        .lookup_mul_pr1_valid(mul_MIDCORE_data_i.pr1_valid),
        .lookup_alu_pr2_valid(alu_MIDCORE_data_i.pr2_valid),
        .lookup_cmp_pr2_valid(cmp_MIDCORE_data_i.pr2_valid),
        .lookup_lsq_pr2_valid(MIDCORE_midcore_i.pr2_valid),
        .lookup_jump_pr2_valid(jump_MIDCORE_data_i.pr2_valid),
        .lookup_mul_pr2_valid(mul_MIDCORE_data_i.pr2_valid),
        .lookup_alu_pr1_val(lookup_alu_pr1_val),
        .lookup_cmp_pr1_val(lookup_cmp_pr1_val),
        .lookup_lsq_pr1_val(lookup_lsq_pr1_val),
        .lookup_jump_pr1_val(lookup_jump_pr1_val),
        .lookup_mul_pr1_val(lookup_mul_pr1_val),
        .lookup_alu_pr2_val(lookup_alu_pr2_val),
        .lookup_cmp_pr2_val(lookup_cmp_pr2_val),
        .lookup_lsq_pr2_val(lookup_lsq_pr2_val),
        .lookup_jump_pr2_val(lookup_jump_pr2_val),
        .lookup_mul_pr2_val(lookup_mul_pr2_val)
    );


    ///////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////  ALU  //////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////
    reservation_station #(
        .RS_SIZE(ALU_RS_SIZE)
    ) alu_rs (
        .clk(clk),
        .rst(rst),
        .wr_en(ROB_midcore_i.valid && (MIDCORE_midcore_i.dispatch_to == 3'd0)),
        .rd_en(alu_valid),
        .exec_mispredict(exec_mispredict),
        .exec_mispredict_rob_idx(exec_mispredict_rob_idx),
        .spec_load_mispredict(spec_load_mispredict_o),
        .spec_load_rob_idx(spec_load_rob_idx_o),
        .rdPtr(rdPtr_i),
        .ROB_data_i(ROB_midcore_i),
        .MIDCORE_data_i(MIDCORE_midcore_i),
        .wb_alu(wb_alu),
        .wb_load(wb_load),
        .wb_jump(wb_jump),
        .wb_cmp(wb_cmp),
        .wb_mul(wb_mul),
        .wb_fwd(wb_fwd),
        .wb_alu_pr(wb_alu_pr),
        .wb_load_pr(wb_load_pr),
        .wb_jump_pr(wb_jump_pr),
        .wb_cmp_pr(wb_cmp_pr),
        .wb_mul_pr(wb_mul_pr),
        .wb_fwd_pr(wb_fwd_pr),
        .ROB_data_o(alu_ROB_data_i),
        .MIDCORE_data_o(alu_MIDCORE_data_i),
        .empty_o(alu_empty_i),
        .full_o(alu_full_o)
    );
    alu alu(
        .ROB_data_i(alu_ROB_data_i),
        .MIDCORE_data_i(alu_MIDCORE_data_i),
        .empty_i(alu_empty_i),
        .lookup_alu_pr1_val(lookup_alu_pr1_val),
        .lookup_alu_pr2_val(lookup_alu_pr2_val),
        .ROB_data_o(alu_ROB_exec_o),
        .alu_valid(alu_valid)
    );

    ///////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////  CMP  //////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////
    reservation_station #(
        .RS_SIZE(CMP_RS_SIZE)
    ) cmp_rs (
        .clk(clk),
        .rst(rst),
        .wr_en(ROB_midcore_i.valid && (MIDCORE_midcore_i.dispatch_to == 3'd1)),
        .rd_en(cmp_valid),
        .exec_mispredict(exec_mispredict),
        .exec_mispredict_rob_idx(exec_mispredict_rob_idx),
        .spec_load_mispredict(spec_load_mispredict_o),
        .spec_load_rob_idx(spec_load_rob_idx_o),
        .rdPtr(rdPtr_i),
        .ROB_data_i(ROB_midcore_i),
        .MIDCORE_data_i(MIDCORE_midcore_i),
        .wb_alu(wb_alu),
        .wb_load(wb_load),
        .wb_jump(wb_jump),
        .wb_cmp(wb_cmp),
        .wb_mul(wb_mul),
        .wb_fwd(wb_fwd),
        .wb_alu_pr(wb_alu_pr),
        .wb_load_pr(wb_load_pr),
        .wb_jump_pr(wb_jump_pr),
        .wb_cmp_pr(wb_cmp_pr),
        .wb_mul_pr(wb_mul_pr),
        .wb_fwd_pr(wb_fwd_pr),
        .ROB_data_o(cmp_ROB_data_i),
        .MIDCORE_data_o(cmp_MIDCORE_data_i),
        .empty_o(cmp_empty_i),
        .full_o(cmp_full_o)
    );
    cmp cmp(
        .ROB_data_i(cmp_ROB_data_i),
        .MIDCORE_data_i(cmp_MIDCORE_data_i),
        .empty_i(cmp_empty_i),
        .lookup_cmp_pr1_val(lookup_cmp_pr1_val),
        .lookup_cmp_pr2_val(lookup_cmp_pr2_val),
        .ROB_data_o(cmp_ROB_exec_o),
        .cmp_valid(cmp_valid)
    );

    ///////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////  JUMP  /////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////
    reservation_station #(
        .RS_SIZE(JUMP_RS_SIZE)
    ) jump_rs (
        .clk(clk),
        .rst(rst),
        .wr_en(ROB_midcore_i.valid && ((MIDCORE_midcore_i.dispatch_to == 3'd4) || (MIDCORE_midcore_i.dispatch_to == 3'd5))),
        .rd_en(jump_valid),
        .exec_mispredict(exec_mispredict),
        .exec_mispredict_rob_idx(exec_mispredict_rob_idx),
        .spec_load_mispredict(spec_load_mispredict_o),
        .spec_load_rob_idx(spec_load_rob_idx_o),
        .rdPtr(rdPtr_i),
        .ROB_data_i(ROB_midcore_i),
        .MIDCORE_data_i(MIDCORE_midcore_i),
        .wb_alu(wb_alu),
        .wb_load(wb_load),
        .wb_jump(wb_jump),
        .wb_cmp(wb_cmp),
        .wb_mul(wb_mul),
        .wb_fwd(wb_fwd),
        .wb_alu_pr(wb_alu_pr),
        .wb_load_pr(wb_load_pr),
        .wb_jump_pr(wb_jump_pr),
        .wb_cmp_pr(wb_cmp_pr),
        .wb_mul_pr(wb_mul_pr),
        .wb_fwd_pr(wb_fwd_pr),
        .ROB_data_o(jump_ROB_data_i),
        .MIDCORE_data_o(jump_MIDCORE_data_i),
        .empty_o(jump_empty_i),
        .full_o(jump_full_o)
    );
    jump jump(
        .ROB_data_i(jump_ROB_data_i),
        .MIDCORE_data_i(jump_MIDCORE_data_i),
        .empty_i(jump_empty_i),
        .lookup_jump_pr1_val(lookup_jump_pr1_val),
        .ROB_data_o(jump_ROB_exec_o),
        .jump_valid(jump_valid)
    );

    ///////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////  LOAD/STORE  //////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////
    lsq lsq(
        .clk(clk),
        .rst(rst),
        .wr_en(ROB_midcore_i.valid && ((MIDCORE_midcore_i.dispatch_to == 3'd2) || (MIDCORE_midcore_i.dispatch_to == 3'd3))),
        .ROB_data_i(ROB_midcore_i),
        .MIDCORE_data_i(MIDCORE_midcore_i),
        .load_cp_id_i(ROB_midcore_i.spec_load_cp_id),
        .dispatch_pr1_val_i(lookup_lsq_pr1_val),
        .dispatch_pr2_val_i(lookup_lsq_pr2_val),
        .exec_mispredict(exec_mispredict),
        .exec_mispredict_rob_idx(exec_mispredict_rob_idx),
        .rob_rdPtr_i(rdPtr_i),
        .wb_alu(wb_alu),
        .wb_load(wb_load),
        .wb_jump(wb_jump),
        .wb_cmp(wb_cmp),
        .wb_mul(wb_mul),
        .wb_alu_pr(wb_alu_pr),
        .wb_load_pr(wb_load_pr),
        .wb_jump_pr(wb_jump_pr),
        .wb_cmp_pr(wb_cmp_pr),
        .wb_mul_pr(wb_mul_pr),
        .wb_alu_val(alu_ROB_exec_o.rd_wdata),
        .wb_load_val(wb_load_val),
        .wb_jump_val(jump_ROB_exec_o.rd_wdata),
        .wb_cmp_val(cmp_ROB_exec_o.rd_wdata),
        .wb_mul_val(mul_ROB_exec_o.rd_wdata),
        .load_commit_i(load_commit_i),
        .load_commit_rob_entry_i(load_commit_rob_entry_i),
        .load_commit_pc_i(load_commit_pc_i),
        .store_commit_i(store_commit_i),
        .store_commit_rob_entry_i(store_commit_rob_entry_i),
        .store_commit_pc_i(store_commit_pc_i),
        .load_done_i(load_done),
        .load_done_rob_entry_i(load_done_rob_entry),
        .store_done_i(store_done),
        .wb_fwd_valid_o(wb_fwd_valid),
        .wb_fwd_pr_o(wb_fwd_pr),
        .wb_fwd_val_o(wb_fwd_val),
        .wb_fwd_rob_data_o(wb_fwd_rob_data),
        .load_issue_valid_o(load_issue_valid),
        .load_issue_addr_o(load_issue_addr),
        .load_issue_rmask_o(load_issue_rmask),
        .load_issue_new_p_o(load_issue_new_p),
        .load_issue_rob_data_o(load_issue_rob_data),
        .load_issue_funct3_o(load_issue_funct3),
        .store_issue_valid_o(store_issue_valid),
        .store_issue_addr_o(store_issue_addr),
        .store_issue_wmask_o(store_issue_wmask),
        .store_issue_wdata_o(store_issue_wdata),
        .store_issue_rob_data_o(store_issue_rob_data),
        .store_wb_valid_o(store_wb_valid_o),
        .store_wb_rob_data_o(store_wb_rob_data_o),
        .spec_load_mispredict_o(spec_load_mispredict_o),
        .spec_load_recover_pc_o(spec_load_recover_pc_o),
        .spec_load_rob_idx_o(spec_load_rob_idx_o),
        .spec_load_checkpoint_id_o(spec_load_checkpoint_id_o),
        .lq_full_o(lq_full),
        .sq_full_o(sq_full)
    );
    mem mem(
        .clk(clk),
        .rst(rst),
        .load_issue_valid_i(load_issue_valid),
        .load_issue_addr_i(load_issue_addr),
        .load_issue_rmask_i(load_issue_rmask),
        .load_issue_new_p_i(load_issue_new_p),
        .load_issue_rob_data_i(load_issue_rob_data),
        .load_issue_funct3_i(load_issue_funct3),
        .store_issue_valid_i(store_issue_valid),
        .store_issue_addr_i(store_issue_addr),
        .store_issue_wmask_i(store_issue_wmask),
        .store_issue_wdata_i(store_issue_wdata),
        .store_issue_rob_data_i(store_issue_rob_data),
        .exec_mispredict(exec_mispredict),
        .exec_mispredict_rob_idx(exec_mispredict_rob_idx),
        .spec_load_mispredict(spec_load_mispredict_o),
        .spec_load_rob_idx(spec_load_rob_idx_o),
        .rob_rdPtr_i(rdPtr_i),
        .load_done_o(load_done),
        .load_done_rob_entry_o(load_done_rob_entry),
        .store_done_o(store_done),
        .wb_load_valid_o(wb_load_valid),
        .wb_load_pr_o(wb_load_pr),
        .wb_load_val_o(wb_load_val),
        .wb_load_rob_data_o(wb_load_rob_data),
        .dmem_addr(dmem_addr),
        .dmem_read(dmem_read),
        .dmem_write(dmem_write),
        .dmem_wmask(dmem_wmask),
        .dmem_wdata(dmem_wdata),
        .dmem_rdata(dmem_rdata),
        .dmem_resp(dmem_resp)
    );

    ///////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////  MUL  //////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////
    reservation_station #(
        .RS_SIZE(MUL_RS_SIZE)
    ) mul_rs (
        .clk(clk),
        .rst(rst),
        .wr_en(ROB_midcore_i.valid && (MIDCORE_midcore_i.dispatch_to == 3'd6)),
        .rd_en(mul_valid),
        .exec_mispredict(exec_mispredict),
        .exec_mispredict_rob_idx(exec_mispredict_rob_idx),
        .spec_load_mispredict(spec_load_mispredict_o),
        .spec_load_rob_idx(spec_load_rob_idx_o),
        .rdPtr(rdPtr_i),
        .ROB_data_i(ROB_midcore_i),
        .MIDCORE_data_i(MIDCORE_midcore_i),
        .wb_alu(wb_alu),
        .wb_load(wb_load),
        .wb_jump(wb_jump),
        .wb_cmp(wb_cmp),
        .wb_mul(wb_mul),
        .wb_fwd(wb_fwd),
        .wb_alu_pr(wb_alu_pr),
        .wb_load_pr(wb_load_pr),
        .wb_jump_pr(wb_jump_pr),
        .wb_cmp_pr(wb_cmp_pr),
        .wb_mul_pr(wb_mul_pr),
        .wb_fwd_pr(wb_fwd_pr),
        .ROB_data_o(mul_ROB_data_i),
        .MIDCORE_data_o(mul_MIDCORE_data_i),
        .empty_o(mul_empty_i),
        .full_o(mul_full_o)
    );
    mul_unit mul_unit(
        .ROB_data_i(mul_ROB_data_i),
        .MIDCORE_data_i(mul_MIDCORE_data_i),
        .empty_i(mul_empty_i),
        .lookup_mul_pr1_val(lookup_mul_pr1_val),
        .lookup_mul_pr2_val(lookup_mul_pr2_val),
        .ROB_data_o(mul_ROB_exec_o),
        .mul_valid(mul_valid)
    );
endmodule