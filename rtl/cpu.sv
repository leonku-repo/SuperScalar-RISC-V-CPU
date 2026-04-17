module cpu
import rv32i_types::*;
(
    input   logic           clk,
    input   logic           rst,

    // Instruction memory port (read-only)
    output  logic   [31:0]  imem_addr,
    output  logic           imem_read,
    input   logic   [31:0]  imem_rdata,
    input   logic           imem_resp,

    // Data memory port (read-write)
    output  logic   [31:0]  dmem_addr,
    output  logic           dmem_read,
    output  logic           dmem_write,
    output  logic   [3:0]   dmem_wmask,
    input   logic   [31:0]  dmem_rdata,
    output  logic   [31:0]  dmem_wdata,
    input   logic           dmem_resp
);
// order, rvfi
    // fetch
    logic                       fetch_empty;
    logic                       fetch_branch_taken;
    logic   [31:0]              fetch_pc;
    logic   [31:0]              fetch_pc_next;
    logic   [31:0]              fetch_inst;
    // midcore
    logic                       decode_request;
    rob_t                       ROB_midcore_o;
    midcore_t                   MIDCORE_midcore_o;
    // execute/writeback
    logic                       alu_full;
    logic                       cmp_full;
    logic                       load_full;
    logic                       store_full;
    logic                       jump_full;
    logic                       mul_full;
    logic                       wb_alu;
    logic                       wb_load;
    logic                       wb_jump;
    logic                       wb_cmp;
    logic                       wb_mul;
    logic   [PRF_IDX-1:0]       wb_alu_pr;
    logic   [PRF_IDX-1:0]       wb_load_pr;
    logic   [PRF_IDX-1:0]       wb_jump_pr;
    logic   [PRF_IDX-1:0]       wb_cmp_pr;
    logic   [PRF_IDX-1:0]       wb_mul_pr;
    rob_t                       alu_ROB_exec_o;
    rob_t                       cmp_ROB_exec_o;
    rob_t                       jump_ROB_exec_o;
    rob_t                       mem_ROB_exec_o;
    rob_t                       mul_ROB_exec_o;
    // commit
    logic   [PRF_IDX-1:0]       arat_o [32];
    logic                       monitor_mispredict;
    logic   [31:0]              recover_pc;
    logic                       rob_full;
    logic                       commit;
    rob_t                       commit_rob_o;
    logic   [ROB_IDX-1:0]       rob_wr_idx;
    logic   [ROB_IDX-1:0]       rob_rd_idx;
    logic                       commit_is_branch;
    logic                       commit_is_jump;
    logic                       commit_branch_actual_taken;
    logic   [31:0]              commit_pc;
    // Execute-time recovery
    logic                       exec_mispredict;
    logic   [31:0]              exec_recover_pc;
    logic   [ROB_IDX-1:0]       exec_mispredict_rob_idx;
    logic   [CP_IDX-1:0]        exec_checkpoint_id;
    // CMP/Jump valid flags (execute → commit)
    logic                       cmp_valid;
    logic                       jump_valid;
    // Checkpoint slot release
    logic                       cmp_resolved;
    logic   [CP_IDX-1:0]        cmp_checkpoint_id_o;
    logic                       jump_resolved;
    logic   [CP_IDX-1:0]        jump_checkpoint_id_o;
    // ROB busy-table rebuild (commit → midcore)
    logic   [PRF_SIZE-1:0]      bt_rebuild;
    // Checkpoint recovery outputs → midcore
    logic                       checkpoint_full;
    logic   [CP_IDX-1:0]        cp_checkpoint_id;
    logic   [PRF_IDX-1:0]       recover_srat        [32];
    logic   [PRF_SIZE-1:0]      recover_alloc_list;
    // Midcore → checkpoint dispatch
    logic                       cp_dispatch_valid;
    logic   [ROB_IDX-1:0]       cp_dispatch_rob_idx;
    logic   [PRF_IDX-1:0]       cp_dispatch_srat    [32];
    logic                       cp_rename_update;
    logic   [PRF_IDX-1:0]       cp_rename_update_pr;
    // Commit-time TAGE/BTB training (new)
    logic                       commit_mispredict;
    logic   [31:0]              commit_target_pc;
    // Spec-load mispredict (cpu_execute → cpu_commit, cpu_midcore, cpu_frontend)
    logic                       spec_load_mispredict;
    logic   [31:0]              spec_load_recover_pc;
    logic   [ROB_IDX-1:0]       spec_load_rob_idx;
    logic   [LC_IDX-1:0]        spec_load_checkpoint_id;
    // wb_fwd (cpu_execute → cpu_midcore)
    logic                       wb_fwd;
    logic   [PRF_IDX-1:0]       wb_fwd_pr;
    // Store ROB-only wb + forwarded load wb (cpu_execute → cpu_commit)
    logic                       store_wb_valid;
    rob_t                       store_wb_rob_data;
    logic                       fwd_ROB_exec_valid;
    rob_t                       fwd_ROB_exec;
    // Load/store commit pulses (cpu_commit → cpu_execute + load_checkpoint)
    logic                       load_commit;
    logic   [ROB_IDX-1:0]       load_commit_rob_entry;
    logic   [31:0]              load_commit_pc;
    logic                       store_commit;
    logic   [ROB_IDX-1:0]       store_commit_rob_entry;
    logic   [31:0]              store_commit_pc;
    // Load checkpoint ↔ cpu_midcore
    logic                       lc_checkpoint_full;
    logic   [LC_IDX-1:0]        lc_checkpoint_id;
    logic   [PRF_IDX-1:0]       lc_recover_srat     [32];
    logic   [PRF_SIZE-1:0]      lc_recover_alloc_list;
    logic                       lc_dispatch_valid;
    logic   [ROB_IDX-1:0]       lc_dispatch_rob_idx;
    logic   [PRF_IDX-1:0]       lc_dispatch_srat    [32];

    logic   [ROB_IDX-1:0]       unused;

    cpu_frontend cpu_frontend(
        .clk(clk),
        .rst(rst),
        .imem_addr(imem_addr),
        .imem_read(imem_read),
        .imem_rdata(imem_rdata),
        .imem_resp(imem_resp),
        .exec_mispredict(exec_mispredict),
        .exec_recover_pc(exec_recover_pc),
        .exec_mispredict_rob_idx(exec_mispredict_rob_idx),
        .spec_load_mispredict(spec_load_mispredict),
        .spec_load_recover_pc(spec_load_recover_pc),
        .spec_load_rob_idx(spec_load_rob_idx),
        .rdPtr_i(rob_rd_idx),
        .commit_mispredict(commit_mispredict),
        .commit_target_pc(commit_target_pc),
        .commit_is_branch(commit_is_branch),
        .commit_is_jump(commit_is_jump),
        .commit_branch_actual_taken(commit_branch_actual_taken),
        .commit_pc(commit_pc),
        .decode_request(decode_request),
        .empty_o(fetch_empty),
        .branch_taken_o(fetch_branch_taken),
        .pc_o(fetch_pc),
        .pc_next_o(fetch_pc_next),
        .inst_o(fetch_inst)
    );

    cpu_midcore cpu_midcore(
        .clk(clk),
        .rst(rst),
        .exec_mispredict(exec_mispredict),
        .exec_mispredict_rob_idx(exec_mispredict_rob_idx),
        .rdPtr_i(rob_rd_idx),
        .recover_srat_i(recover_srat),
        .recover_alloc_list_i(recover_alloc_list),
        .spec_load_mispredict(spec_load_mispredict),
        .spec_load_rob_idx_i(spec_load_rob_idx),
        .spec_load_recover_srat_i(lc_recover_srat),
        .spec_load_recover_alloc_list_i(lc_recover_alloc_list),
        .bt_rebuild_i(bt_rebuild),
        .checkpoint_full(checkpoint_full),
        .cp_checkpoint_id_i(cp_checkpoint_id),
        .lc_checkpoint_full(lc_checkpoint_full),
        .lc_checkpoint_id_i(lc_checkpoint_id),
        .decode_request(decode_request),
        .empty_i(fetch_empty),
        .branch_taken_i(fetch_branch_taken),
        .pc_i(fetch_pc),
        .pc_next_i(fetch_pc_next),
        .inst_i(fetch_inst),
        .rob_full(rob_full),
        .alu_full(alu_full),
        .cmp_full(cmp_full),
        .load_full(load_full),
        .store_full(store_full),
        .jump_full(jump_full),
        .mul_full(mul_full),
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
        .commit_update(commit && commit_rob_o.rd_valid),
        .commit_update_old_p(commit_rob_o.old_p),
        .allocate_rob_entry(rob_wr_idx),
        .ROB_midcore_o(ROB_midcore_o),
        .MIDCORE_midcore_o(MIDCORE_midcore_o),
        .cp_dispatch_valid(cp_dispatch_valid),
        .cp_dispatch_rob_idx(cp_dispatch_rob_idx),
        .cp_dispatch_srat(cp_dispatch_srat),
        .cp_rename_update_o(cp_rename_update),
        .cp_rename_update_pr_o(cp_rename_update_pr),
        .lc_dispatch_valid_o(lc_dispatch_valid),
        .lc_dispatch_rob_idx_o(lc_dispatch_rob_idx),
        .lc_dispatch_srat_o(lc_dispatch_srat)
    );

    cpu_execute cpu_execute(
        .clk(clk),
        .rst(rst),
        .exec_mispredict(exec_mispredict),
        .exec_mispredict_rob_idx(exec_mispredict_rob_idx),
        .rdPtr_i(rob_rd_idx),
        .load_commit_i(load_commit),
        .load_commit_rob_entry_i(load_commit_rob_entry),
        .load_commit_pc_i(load_commit_pc),
        .store_commit_i(store_commit),
        .store_commit_rob_entry_i(store_commit_rob_entry),
        .store_commit_pc_i(store_commit_pc),
        .alu_full_o(alu_full),
        .cmp_full_o(cmp_full),
        .load_full_o(load_full),
        .store_full_o(store_full),
        .jump_full_o(jump_full),
        .mul_full_o(mul_full),
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
        .ROB_midcore_i(ROB_midcore_o),
        .MIDCORE_midcore_i(MIDCORE_midcore_o),
        .alu_ROB_exec_o(alu_ROB_exec_o),
        .cmp_ROB_exec_o(cmp_ROB_exec_o),
        .jump_ROB_exec_o(jump_ROB_exec_o),
        .mem_ROB_exec_o(mem_ROB_exec_o),
        .mul_ROB_exec_o(mul_ROB_exec_o),
        .cmp_valid_o(cmp_valid),
        .jump_valid_o(jump_valid),
        .store_wb_valid_o(store_wb_valid),
        .store_wb_rob_data_o(store_wb_rob_data),
        .fwd_ROB_exec_valid_o(fwd_ROB_exec_valid),
        .fwd_ROB_exec_o(fwd_ROB_exec),
        .spec_load_mispredict_o(spec_load_mispredict),
        .spec_load_recover_pc_o(spec_load_recover_pc),
        .spec_load_rob_idx_o(spec_load_rob_idx),
        .spec_load_checkpoint_id_o(spec_load_checkpoint_id),
        .dmem_addr(dmem_addr),
        .dmem_read(dmem_read),
        .dmem_write(dmem_write),
        .dmem_wmask(dmem_wmask),
        .dmem_rdata(dmem_rdata),
        .dmem_wdata(dmem_wdata),
        .dmem_resp(dmem_resp)
    );

    cpu_commit cpu_commit(
        .clk(clk),
        .rst(rst),
        .rob_data_i(ROB_midcore_o),
        .alu_ROB_exec_i(alu_ROB_exec_o),
        .cmp_ROB_exec_i(cmp_ROB_exec_o),
        .jump_ROB_exec_i(jump_ROB_exec_o),
        .mem_ROB_exec_i(mem_ROB_exec_o),
        .mul_ROB_exec_i(mul_ROB_exec_o),
        .store_wb_valid_i(store_wb_valid),
        .store_wb_rob_data_i(store_wb_rob_data),
        .fwd_ROB_exec_valid_i(fwd_ROB_exec_valid),
        .fwd_ROB_exec_i(fwd_ROB_exec),
        .cmp_valid_i(cmp_valid),
        .jump_valid_i(jump_valid),
        .spec_load_mispredict_i(spec_load_mispredict),
        .spec_load_rob_idx_i(spec_load_rob_idx),
        .rob_wr_idx(rob_wr_idx),
        .rob_rd_idx(rob_rd_idx),
        .rob_full(rob_full),
        .commit(commit),
        .commit_rob_o(commit_rob_o),
        .exec_mispredict(exec_mispredict),
        .exec_recover_pc(exec_recover_pc),
        .exec_mispredict_rob_idx(exec_mispredict_rob_idx),
        .exec_checkpoint_id(exec_checkpoint_id),
        .cmp_resolved(cmp_resolved),
        .cmp_checkpoint_id_o(cmp_checkpoint_id_o),
        .jump_resolved(jump_resolved),
        .jump_checkpoint_id_o(jump_checkpoint_id_o),
        .bt_rebuild_o(bt_rebuild),
        .load_commit_o(load_commit),
        .load_commit_rob_entry_o(load_commit_rob_entry),
        .load_commit_pc_o(load_commit_pc),
        .store_commit_o(store_commit),
        .store_commit_rob_entry_o(store_commit_rob_entry),
        .store_commit_pc_o(store_commit_pc),
        .commit_is_branch(commit_is_branch),
        .commit_is_jump(commit_is_jump),
        .commit_branch_actual_taken(commit_branch_actual_taken),
        .commit_branch_pc(commit_pc),
        .commit_mispredict(commit_mispredict),
        .commit_target_pc(commit_target_pc),
        .arat_o(arat_o)
    );

    checkpoint checkpoint(
        .clk(clk),
        .rst(rst),
        .dispatch_valid(cp_dispatch_valid),
        .dispatch_rob_idx(cp_dispatch_rob_idx),
        .dispatch_srat(cp_dispatch_srat),
        .checkpoint_id_o(cp_checkpoint_id),
        .checkpoint_full(checkpoint_full),
        .rename_update(cp_rename_update),
        .rename_update_pr(cp_rename_update_pr),
        .cmp_resolved(cmp_resolved),
        .cmp_checkpoint_id(cmp_checkpoint_id_o),
        .jump_resolved(jump_resolved),
        .jump_checkpoint_id(jump_checkpoint_id_o),
        .exec_mispredict(exec_mispredict),
        .exec_checkpoint_id(exec_checkpoint_id),
        .rdPtr(rob_rd_idx),
        .recover_srat(recover_srat),
        .recover_alloc_list(recover_alloc_list),
        .recover_rob_idx(unused)   // redundant with exec_mispredict_rob_idx from branch_recover
    );

    load_checkpoint load_checkpoint(
        .clk(clk),
        .rst(rst),
        .dispatch_valid(lc_dispatch_valid),
        .dispatch_rob_idx(lc_dispatch_rob_idx),
        .dispatch_srat(lc_dispatch_srat),
        .checkpoint_id_o(lc_checkpoint_id),
        .checkpoint_full(lc_checkpoint_full),
        .rename_update(cp_rename_update),           // shared with checkpoint.sv
        .rename_update_pr(cp_rename_update_pr),     // shared with checkpoint.sv
        .load_commit(load_commit),
        .load_commit_checkpoint_id(commit_rob_o.spec_load_cp_id),
        .exec_mispredict(exec_mispredict),
        .exec_mispredict_rob_idx(exec_mispredict_rob_idx),
        .rdPtr(rob_rd_idx),
        .spec_load_mispredict(spec_load_mispredict),
        .spec_load_checkpoint_id(spec_load_checkpoint_id),
        .recover_srat(lc_recover_srat),
        .recover_alloc_list(lc_recover_alloc_list)
    );

    logic   [63:0]  order;
    always_ff @( posedge clk ) begin
        if (rst) begin
            order <= '0;
        end else begin
            if (commit) begin
                order <= order + 'd1;
            end
        end
    end

    logic           monitor_valid;
    logic   [63:0]  monitor_order;
    logic   [31:0]  monitor_inst;
    logic   [4:0]   monitor_rs1_addr;
    logic   [4:0]   monitor_rs2_addr;
    logic   [31:0]  monitor_rs1_rdata;
    logic   [31:0]  monitor_rs2_rdata;
    logic   [4:0]   monitor_rd_addr;
    logic   [31:0]  monitor_rd_wdata;
    logic   [31:0]  monitor_pc_rdata;
    logic   [31:0]  monitor_pc_wdata;
    logic   [31:0]  monitor_mem_addr;
    logic   [3:0]   monitor_mem_rmask;
    logic   [3:0]   monitor_mem_wmask;
    logic   [31:0]  monitor_mem_rdata;
    logic   [31:0]  monitor_mem_wdata;

    // Fill this out
    assign monitor_valid     = commit;
    assign monitor_order     = order;
    assign monitor_inst      = commit_rob_o.inst;
    assign monitor_rs1_addr  = commit_rob_o.rs1_valid ? commit_rob_o.rs1_addr : 5'd0;
    assign monitor_rs2_addr  = commit_rob_o.rs2_valid ? commit_rob_o.rs2_addr : 5'd0;
    assign monitor_rs1_rdata = commit_rob_o.rs1_valid ? commit_rob_o.rs1_rdata : 32'd0;
    assign monitor_rs2_rdata = commit_rob_o.rs2_valid ? commit_rob_o.rs2_rdata : 32'd0;
    assign monitor_rd_addr   = commit_rob_o.rd_valid ? commit_rob_o.rd_arch : 5'd0;
    assign monitor_rd_wdata  = commit_rob_o.rd_wdata;
    assign monitor_pc_rdata  = commit_rob_o.pc;
    assign monitor_pc_wdata  = commit_rob_o.pc_next;
    assign monitor_mem_addr  = commit_rob_o.mem_addr;
    assign monitor_mem_rmask = commit_rob_o.mem_rmask;
    assign monitor_mem_wmask = commit_rob_o.mem_wmask;
    assign monitor_mem_rdata = commit_rob_o.mem_rdata;
    assign monitor_mem_wdata = commit_rob_o.mem_wdata;
    assign monitor_mispredict = commit_rob_o.mispredict;

endmodule : cpu
