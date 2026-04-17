// cpu midcore has two stages (decode and rename1 are combined):
// 1. decode+rename1 - decode instruction, look up SRAT for rs1, rs2, rd
// 2. rename 2       - looks up free list and busy table
//                     updates free list, busy table, SRAT
//                     dispatch to execute stage (MIDCORE_midcore_o + ROB_midcore_o)
//                     allocate new ROB entry (ROB_midcore_o)
// stall condition:
// - execute not jammed
// - ROB not full
// - fetch queue not empty
// - checkpoint not full (when dispatching a branch/jump)
// - exec_mispredict (stall pipeline during recovery)
module cpu_midcore
import rv32i_types::*;
(
    input   logic                   clk,
    input   logic                   rst,

    // Execute-time mispredict
    input   logic                   exec_mispredict,
    input   logic   [ROB_IDX-1:0]   exec_mispredict_rob_idx,   // → srat, free_list age comparison
    input   logic   [ROB_IDX-1:0]   rdPtr_i,                   // → srat, free_list age comparison

    // Spec-load mispredict
    input   logic                   spec_load_mispredict,
    input   logic   [ROB_IDX-1:0]   spec_load_rob_idx_i,       // → srat, free_list age comparison

    // Recovery data from checkpoint.sv (branch checkpoint, instantiated in cpu.sv)
    input   logic   [PRF_IDX-1:0]   recover_srat_i      [32],  // → srat.recover_srat
    input   logic   [PRF_SIZE-1:0]  recover_alloc_list_i,      // → free_list.recover_alloc_list
    // Recovery data from load_checkpoint.sv (instantiated in cpu.sv)
    input   logic   [PRF_IDX-1:0]   spec_load_recover_srat_i      [32],  // → srat.spec_load_recover_srat
    input   logic   [PRF_SIZE-1:0]  spec_load_recover_alloc_list_i,      // → free_list.spec_load_recover_alloc_list
    // Busy-table rebuild from rob.bt_rebuild_o
    input   logic   [PRF_SIZE-1:0]  bt_rebuild_i,              // → busy_table.bt_rebuild_i

    // Branch checkpoint allocation (from checkpoint.sv in cpu.sv)
    input   logic                   checkpoint_full,
    input   logic   [CP_IDX-1:0]    cp_checkpoint_id_i,        // slot assigned this dispatch

    // Load checkpoint allocation (from load_checkpoint.sv in cpu.sv)
    input   logic                   lc_checkpoint_full,
    input   logic   [LC_IDX-1:0]    lc_checkpoint_id_i,        // slot assigned to dispatching load

    // fetch queue
    output  logic                   decode_request,
    input   logic                   empty_i,
    input   logic                   branch_taken_i,
    input   logic   [31:0]          pc_i,
    input   logic   [31:0]          pc_next_i,
    input   logic   [31:0]          inst_i,

    // ROB, store, load, reservation station, jump, mul full?
    input   logic                   rob_full,
    input   logic                   alu_full,
    input   logic                   cmp_full,
    input   logic                   load_full,
    input   logic                   store_full,
    input   logic                   jump_full,
    input   logic                   mul_full,

    // from writeback (cpu_execute)
    input   logic                   wb_alu,
    input   logic                   wb_load,
    input   logic                   wb_jump,
    input   logic                   wb_cmp,
    input   logic                   wb_mul,
    input   logic                   wb_fwd,
    input   logic   [PRF_IDX-1:0]   wb_alu_pr,
    input   logic   [PRF_IDX-1:0]   wb_load_pr,
    input   logic   [PRF_IDX-1:0]   wb_jump_pr,
    input   logic   [PRF_IDX-1:0]   wb_cmp_pr,
    input   logic   [PRF_IDX-1:0]   wb_mul_pr,
    input   logic   [PRF_IDX-1:0]   wb_fwd_pr,

    // from commit
    input   logic                   commit_update,
    input   logic   [PRF_IDX-1:0]   commit_update_old_p,

    // from rob, what entry rename2 allocated
    input   logic   [ROB_IDX-1:0]   allocate_rob_entry,

    // TO ROB + execute (dispatch)
    output  rob_t                   ROB_midcore_o,
    output  midcore_t               MIDCORE_midcore_o,

    // Branch checkpoint dispatch outputs (to checkpoint.sv in cpu.sv)
    output  logic                   cp_dispatch_valid,
    output  logic   [ROB_IDX-1:0]   cp_dispatch_rob_idx,
    output  logic   [PRF_IDX-1:0]   cp_dispatch_srat    [32],

    // Load checkpoint dispatch outputs (to load_checkpoint.sv in cpu.sv)
    output  logic                   lc_dispatch_valid_o,
    output  logic   [ROB_IDX-1:0]   lc_dispatch_rob_idx_o,
    output  logic   [PRF_IDX-1:0]   lc_dispatch_srat_o  [32],

    // Rename update — forwarded to both checkpoint.sv and load_checkpoint.sv for alloc_list accumulation
    output  logic                   cp_rename_update_o,
    output  logic   [PRF_IDX-1:0]   cp_rename_update_pr_o
);


logic       stall;
logic       stall_rob_full        /*verilator public*/;
logic       stall_alu_full        /*verilator public*/;
logic       stall_cmp_full        /*verilator public*/;
logic       stall_load_full       /*verilator public*/;
logic       stall_store_full      /*verilator public*/;
logic       stall_jump_full       /*verilator public*/;
logic       stall_mul_full        /*verilator public*/;
logic       stall_no_free_pr      /*verilator public*/;
logic       stall_checkpoint_full /*verilator public*/;
rob_t       ROB_decode_o,    ROB_rename1_o,    ROB_rename2_o;
rob_t       ROB_rename1_reg, ROB_rename2_reg;
midcore_t   MIDCORE_decode_o,    MIDCORE_rename1_o,    MIDCORE_rename2_o;
midcore_t   MIDCORE_rename1_reg, MIDCORE_rename2_reg;
midcore_t   MIDCORE_rename2_wb_updated;

logic   [4:0]           srat_lookup_rs1, srat_lookup_rs2, srat_lookup_rd;
logic   [PRF_IDX-1:0]   srat_lookup_pr1, srat_lookup_pr2, srat_lookup_old_pr;
logic   [PRF_IDX-1:0]   srat_o [32];    // full registered SRAT for checkpoint snapshot
logic   [PRF_IDX-1:0]   bt_lookup_pr1, bt_lookup_pr2;
logic                   bt_pr1_busy, bt_pr2_busy;
logic   [PRF_IDX-1:0]   free_pr;
logic                   free_pr_valid;

logic                   rename_update;
logic   [PRF_IDX-1:0]   rename_update_pr;
logic   [4:0]           rename_update_ar;

// Whether the instruction in rename2_reg is a branch or jump
logic   is_br_or_jump;
assign is_br_or_jump = (MIDCORE_rename2_reg.dispatch_to == 3'd1 ||  // CMP (op_br)
                        MIDCORE_rename2_reg.dispatch_to == 3'd4 ||  // Jump (op_jal)
                        MIDCORE_rename2_reg.dispatch_to == 3'd5);   // Jump (op_jalr)

// Whether the instruction in rename2_reg is a load
logic   is_load;
assign is_load = (MIDCORE_rename2_reg.dispatch_to == 3'd2);

// Stall conditions
logic stall_lc_checkpoint_full /*verilator public*/;
assign stall_rob_full         = rob_full;
assign stall_alu_full         = alu_full   && (MIDCORE_rename2_reg.dispatch_to == 3'd0);
assign stall_cmp_full         = cmp_full   && (MIDCORE_rename2_reg.dispatch_to == 3'd1);
assign stall_load_full        = load_full  && (MIDCORE_rename2_reg.dispatch_to == 3'd2);
assign stall_store_full       = store_full && (MIDCORE_rename2_reg.dispatch_to == 3'd3);
assign stall_jump_full        = jump_full  && (MIDCORE_rename2_reg.dispatch_to == 3'd4 ||
                                               MIDCORE_rename2_reg.dispatch_to == 3'd5);
assign stall_mul_full         = mul_full   && (MIDCORE_rename2_reg.dispatch_to == 3'd6);
assign stall_no_free_pr       = ROB_rename2_o.rd_valid && !free_pr_valid;
assign stall_checkpoint_full  = checkpoint_full && is_br_or_jump;
assign stall_lc_checkpoint_full = lc_checkpoint_full && is_load;

assign stall = stall_rob_full   | stall_alu_full      | stall_cmp_full   |
               stall_load_full  | stall_store_full     | stall_jump_full  |
               stall_mul_full   | stall_no_free_pr     | stall_checkpoint_full |
               stall_lc_checkpoint_full | exec_mispredict | spec_load_mispredict;

assign decode_request = !stall && !empty_i;

// -----------------------------------------------------------------------
// Branch checkpoint dispatch — fires when a branch/jump in rename2_reg dispatches
// -----------------------------------------------------------------------
assign cp_dispatch_valid   = !stall && ROB_rename2_reg.valid && is_br_or_jump;
assign cp_dispatch_rob_idx = ROB_rename2_reg.rob_entry;
assign cp_dispatch_srat    = srat_o;

// Load checkpoint dispatch — fires when a load in rename2_reg dispatches
assign lc_dispatch_valid_o   = !stall && ROB_rename2_reg.valid && is_load;
assign lc_dispatch_rob_idx_o = ROB_rename2_reg.rob_entry;
assign lc_dispatch_srat_o    = srat_o;

// Forward rename activity to checkpoint.sv + load_checkpoint.sv for alloc_list accumulation.
// Gate with !stall (which includes exec_mispredict + spec_load_mispredict).
assign cp_rename_update_o    = rename_update && !stall;
assign cp_rename_update_pr_o = rename_update_pr;

// -----------------------------------------------------------------------
// Output to ROB + execute
// Gate with !stall; stamp checkpoint_id for branch/jump dispatches.
// -----------------------------------------------------------------------
always_comb begin
    ROB_midcore_o     = '0;
    MIDCORE_midcore_o = '0;
    if (!stall) begin
        ROB_midcore_o     = ROB_rename2_reg;
        MIDCORE_midcore_o = MIDCORE_rename2_reg;
        if (is_br_or_jump)
            ROB_midcore_o.checkpoint_id = cp_checkpoint_id_i;
        if (is_load)
            ROB_midcore_o.spec_load_cp_id = lc_checkpoint_id_i;
    end
end

always_ff @( posedge clk ) begin
    if (rst || exec_mispredict || spec_load_mispredict) begin
        ROB_rename1_reg <= '0;
        ROB_rename2_reg <= '0;
    end
    else if (!stall) begin
        ROB_rename1_reg <= ROB_rename1_o;
        ROB_rename2_reg <= ROB_rename2_o;
        ROB_rename2_reg.rob_entry <= allocate_rob_entry
                                     + ROB_IDX'(ROB_rename2_reg.valid && !exec_mispredict);
    end
    else begin
        ROB_rename1_reg <= ROB_rename1_reg;
        ROB_rename2_reg <= ROB_rename2_reg;
    end
end

// During a stall, writeback may fire for an operand held in rename2_reg.
// Update busy bits so dispatch sees correct state when stall clears.
always_comb begin
    MIDCORE_rename2_wb_updated = MIDCORE_rename2_reg;
    if (stall) begin
        if (MIDCORE_rename2_reg.pr1_valid && (
            (wb_alu  && (MIDCORE_rename2_reg.pr1 == wb_alu_pr )) ||
            (wb_load && (MIDCORE_rename2_reg.pr1 == wb_load_pr)) ||
            (wb_jump && (MIDCORE_rename2_reg.pr1 == wb_jump_pr)) ||
            (wb_cmp  && (MIDCORE_rename2_reg.pr1 == wb_cmp_pr )) ||
            (wb_mul  && (MIDCORE_rename2_reg.pr1 == wb_mul_pr )) ||
            (wb_fwd  && (MIDCORE_rename2_reg.pr1 == wb_fwd_pr ))
        )) MIDCORE_rename2_wb_updated.pr1_busy = 1'b0;
        if (MIDCORE_rename2_reg.pr2_valid && (
            (wb_alu  && (MIDCORE_rename2_reg.pr2 == wb_alu_pr )) ||
            (wb_load && (MIDCORE_rename2_reg.pr2 == wb_load_pr)) ||
            (wb_jump && (MIDCORE_rename2_reg.pr2 == wb_jump_pr)) ||
            (wb_cmp  && (MIDCORE_rename2_reg.pr2 == wb_cmp_pr )) ||
            (wb_mul  && (MIDCORE_rename2_reg.pr2 == wb_mul_pr )) ||
            (wb_fwd  && (MIDCORE_rename2_reg.pr2 == wb_fwd_pr ))
        )) MIDCORE_rename2_wb_updated.pr2_busy = 1'b0;
    end
end

always_ff @( posedge clk ) begin
    if (rst || exec_mispredict || spec_load_mispredict) begin
        MIDCORE_rename1_reg <= '0;
        MIDCORE_rename2_reg <= '0;
    end
    else if (!stall) begin
        MIDCORE_rename1_reg <= MIDCORE_rename1_o;
        MIDCORE_rename2_reg <= MIDCORE_rename2_o;
    end
    else begin
        MIDCORE_rename1_reg <= MIDCORE_rename1_reg;
        MIDCORE_rename2_reg <= MIDCORE_rename2_wb_updated;
    end
end

///////////////////////////////////////////////////
//////////////  stage1: decode + rename1  /////////
///////////////////////////////////////////////////
decode decode(
    .branch_taken_i(branch_taken_i),
    .pc_i(pc_i),
    .inst_i(inst_i),
    .pc_next_i(pc_next_i),
    .fq_empty_i(empty_i),
    .ROB_decode_o(ROB_decode_o),
    .MIDCORE_decode_o(MIDCORE_decode_o)
);
srat srat(
    .clk(clk),
    .rst(rst),
    .rs1_i(srat_lookup_rs1),
    .rs2_i(srat_lookup_rs2),
    .rd_i(srat_lookup_rd),
    .pr1_o(srat_lookup_pr1),
    .pr2_o(srat_lookup_pr2),
    .old_pr_o(srat_lookup_old_pr),
    .rename_update(rename_update && !stall),
    .rename_update_ar(rename_update_ar),
    .rename_update_pr(rename_update_pr),
    .exec_mispredict(exec_mispredict),
    .exec_mispredict_rob_idx(exec_mispredict_rob_idx),
    .recover_srat(recover_srat_i),
    .spec_load_mispredict(spec_load_mispredict),
    .spec_load_rob_idx(spec_load_rob_idx_i),
    .spec_load_recover_srat(spec_load_recover_srat_i),
    .rdPtr(rdPtr_i),
    .srat_o(srat_o)
);
rename1 rename1(
    .ROB_decode_i(ROB_decode_o),
    .MIDCORE_decode_i(MIDCORE_decode_o),
    .rs1_o(srat_lookup_rs1),
    .rs2_o(srat_lookup_rs2),
    .rd_o(srat_lookup_rd),
    .pr1_i(srat_lookup_pr1),
    .pr2_i(srat_lookup_pr2),
    .old_pr_i(srat_lookup_old_pr),
    .ROB_rename1_o(ROB_rename1_o),
    .MIDCORE_rename1_o(MIDCORE_rename1_o)
);
///////////////////////////////////////////////////
//////////////  stage2: rename2  //////////////////
///////////////////////////////////////////////////
busy_table busy_table(
    .clk(clk),
    .rst(rst),
    .pr1_i(bt_lookup_pr1),
    .pr2_i(bt_lookup_pr2),
    .pr1_busy(bt_pr1_busy),
    .pr2_busy(bt_pr2_busy),
    .rename_update(rename_update && !stall),
    .rename_update_pr(rename_update_pr),
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
    .exec_mispredict(exec_mispredict),
    .spec_load_mispredict(spec_load_mispredict),
    .bt_rebuild_i(bt_rebuild_i)
);
free_list free_list(
    .clk(clk),
    .rst(rst),
    .free_pr(free_pr),
    .free_pr_valid(free_pr_valid),
    .rename_update(rename_update && !stall),
    .rename_update_pr(rename_update_pr),
    .commit_update(commit_update),
    .commit_update_pr(commit_update_old_p),
    .exec_mispredict(exec_mispredict),
    .exec_mispredict_rob_idx(exec_mispredict_rob_idx),
    .recover_alloc_list(recover_alloc_list_i),
    .spec_load_mispredict(spec_load_mispredict),
    .spec_load_rob_idx(spec_load_rob_idx_i),
    .spec_load_recover_alloc_list(spec_load_recover_alloc_list_i),
    .rdPtr(rdPtr_i)
);
rename2 rename2(
    .ROB_rename1_i(ROB_rename1_reg),
    .MIDCORE_rename1_i(MIDCORE_rename1_reg),
    .pr1_o(bt_lookup_pr1),
    .pr2_o(bt_lookup_pr2),
    .pr1_busy(bt_pr1_busy),
    .pr2_busy(bt_pr2_busy),
    .free_pr(free_pr),
    .free_pr_valid(free_pr_valid),
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
    .rename_update(rename_update),
    .rename_update_pr(rename_update_pr),
    .rename_update_ar(rename_update_ar),
    .MIDCORE_rename2_o(MIDCORE_rename2_o),
    .allocate_rob_entry(allocate_rob_entry),
    .ROB_rename2_o(ROB_rename2_o)
);

endmodule
