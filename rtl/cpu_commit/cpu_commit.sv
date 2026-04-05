// this sends out commit signal from rob and send out mispredict signals
// also updates architectural RAT
module cpu_commit
import rv32i_types::*;
(
    input   logic                       clk,
    input   logic                       rst,

    // from rename2 — new ROB entry to allocate
    input   rob_t                       rob_data_i,
    // from writeback — update ROB entries
    input   rob_t                       alu_ROB_exec_i,
    input   rob_t                       cmp_ROB_exec_i,
    input   rob_t                       jump_ROB_exec_i,
    input   rob_t                       mem_ROB_exec_i,
    input   rob_t                       mul_ROB_exec_i,
    // valid flags for branch_recovery arbitration
    input   logic                       cmp_valid_i,
    input   logic                       jump_valid_i,

    output  logic   [ROB_IDX-1:0]       rob_wr_idx,
    output  logic   [ROB_IDX-1:0]       rob_rd_idx,
    output  logic                       rob_full,

    output  logic                       commit,
    output  rob_t                       commit_rob_o,   // for RVFI and others

    // Execute-time recovery outputs
    output  logic                       exec_mispredict,
    output  logic   [31:0]              exec_recover_pc,
    output  logic   [ROB_IDX-1:0]       exec_mispredict_rob_idx,
    output  logic   [CP_IDX-1:0]        exec_checkpoint_id,

    // Checkpoint slot release (every resolved CMP/Jump, mispredict or not)
    output  logic                       cmp_resolved,
    output  logic   [CP_IDX-1:0]        cmp_checkpoint_id_o,
    output  logic                       jump_resolved,
    output  logic   [CP_IDX-1:0]        jump_checkpoint_id_o,

    // Busy-table rebuild vector — from ROB, consumed by busy_table in cpu_midcore
    output  logic   [PRF_SIZE-1:0]      bt_rebuild_o,

    // TAGE training outputs (commit-time, unchanged)
    output  logic                       commit_is_branch,
    output  logic                       commit_is_jump,
    output  logic                       commit_branch_actual_taken,
    output  logic   [31:0]              commit_branch_pc,
    output  logic                       commit_mispredict,    // ROB-head mispredict flag at commit; for TAGE pred derivation
    output  logic   [31:0]              commit_target_pc,     // actual target of committing branch; for BTB update

    output  logic   [PRF_IDX-1:0]       arat_o [32]
);
    logic   rob_empty;

    assign commit = !rob_empty && commit_rob_o.valid && commit_rob_o.done;

    rob #(
        .fifo_size(ROB_SIZE)
    ) rob (
        .clk(clk),
        .rst(rst),
        .wr_en(rob_data_i.valid && !exec_mispredict),
        .rd_en(commit),
        .exec_mispredict(exec_mispredict),
        .exec_mispredict_rob_idx(exec_mispredict_rob_idx),
        .rob_data_i(rob_data_i),
        .alu_ROB_exec_i(alu_ROB_exec_i),
        .cmp_ROB_exec_i(cmp_ROB_exec_i),
        .jump_ROB_exec_i(jump_ROB_exec_i),
        .mem_ROB_exec_i(mem_ROB_exec_i),
        .mul_ROB_exec_i(mul_ROB_exec_i),
        .wrPtr_o(rob_wr_idx),
        .rdPtr_o(rob_rd_idx),
        .data_o(commit_rob_o),
        .empty_o(rob_empty),
        .full_o(rob_full),
        .bt_rebuild_o(bt_rebuild_o)
    );

    arat arat(
        .clk(clk),
        .rst(rst),
        .commit(commit),
        .rd_valid(commit_rob_o.rd_valid),
        .rd_arch(commit_rob_o.rd_arch),
        .rd_pr(commit_rob_o.new_p),
        .arat_o(arat_o)
    );

    branch_recovery branch_recovery(
        .cmp_ROB_exec_i(cmp_ROB_exec_i),
        .cmp_valid(cmp_valid_i),
        .jump_ROB_exec_i(jump_ROB_exec_i),
        .jump_valid(jump_valid_i),
        .rdPtr(rob_rd_idx),
        .commit(commit),
        .commit_rob_i(commit_rob_o),
        .exec_mispredict(exec_mispredict),
        .exec_recover_pc(exec_recover_pc),
        .exec_mispredict_rob_idx(exec_mispredict_rob_idx),
        .exec_checkpoint_id(exec_checkpoint_id),
        .cmp_resolved(cmp_resolved),
        .cmp_checkpoint_id_o(cmp_checkpoint_id_o),
        .jump_resolved(jump_resolved),
        .jump_checkpoint_id_o(jump_checkpoint_id_o),
        .commit_is_branch(commit_is_branch),
        .commit_is_jump(commit_is_jump),
        .commit_branch_actual_taken(commit_branch_actual_taken),
        .commit_branch_pc(commit_branch_pc),
        .commit_mispredict(commit_mispredict),
        .commit_target_pc(commit_target_pc)
    );

endmodule
