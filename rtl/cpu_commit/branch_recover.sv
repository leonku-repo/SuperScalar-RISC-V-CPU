// branch_recover.sv
//
// Redesigned for execute-time recovery.
// Receives CMP and Jump ROB entries directly from execute-stage writeback.
// Arbitrates: if both mispredict on the same cycle, the older one (smaller
// wrap-aware age from rdPtr) wins — it is the earliest misprediction.
//
// Also emits TAGE training signals from commit (unchanged behavior).
// Recovery itself (SRAT restore, free-list OR, ROB partial flush, etc.) is
// handled by the individual structures; this module only broadcasts signals.

module branch_recovery
import rv32i_types::*;
(
    // From execute stage
    input   rob_t                   cmp_ROB_exec_i,
    input   logic                   cmp_valid,          // cmp_ROB_exec_i.done this cycle
    input   rob_t                   jump_ROB_exec_i,
    input   logic                   jump_valid,         // jump_ROB_exec_i.done this cycle
    input   logic   [ROB_IDX-1:0]   rdPtr,              // for wrap-aware age comparison

    // From commit stage — TAGE training only, no recovery
    input   logic                   commit,
    input   rob_t                   commit_rob_i,

    // Early recovery outputs (combinational)
    output  logic                   exec_mispredict,
    output  logic   [31:0]          exec_recover_pc,
    output  logic   [ROB_IDX-1:0]  exec_mispredict_rob_idx,
    output  logic   [CP_IDX-1:0]   exec_checkpoint_id,

    // Checkpoint slot release (fired for every resolved CMP/Jump, mispredict or not)
    output  logic                   cmp_resolved,
    output  logic   [CP_IDX-1:0]   cmp_checkpoint_id_o,
    output  logic                   jump_resolved,
    output  logic   [CP_IDX-1:0]   jump_checkpoint_id_o,

    // TAGE training outputs (commit-time, unchanged)
    output  logic                   commit_is_branch,
    output  logic                   commit_is_jump,
    output  logic                   commit_branch_actual_taken,
    output  logic   [31:0]          commit_branch_pc,
    output  logic                   commit_mispredict,   // was this commit a mispredict? for TAGE pred derivation
    output  logic   [31:0]          commit_target_pc     // actual target of committing branch; for BTB update
);

    // -----------------------------------------------------------------------
    // Mispredict detection
    // -----------------------------------------------------------------------
    logic cmp_mp, jump_mp;
    assign cmp_mp  = cmp_valid  && cmp_ROB_exec_i.mispredict;
    assign jump_mp = jump_valid && jump_ROB_exec_i.mispredict;

    // -----------------------------------------------------------------------
    // Arbitration: if both mispredict, pick the older one (smaller age wins).
    // age = rob_entry - rdPtr (wrap-aware, ROB_IDX-bit modular subtraction).
    // -----------------------------------------------------------------------
    logic [ROB_IDX-1:0] cmp_age, jump_age;
    assign cmp_age  = cmp_ROB_exec_i.rob_entry  - rdPtr;
    assign jump_age = jump_ROB_exec_i.rob_entry - rdPtr;

    // pick_cmp = 1 when CMP is the older mispredicting branch
    logic pick_cmp;
    assign pick_cmp = cmp_mp && (!jump_mp || (cmp_age < jump_age));

    // -----------------------------------------------------------------------
    // Early recovery outputs
    // -----------------------------------------------------------------------
    assign exec_mispredict         = cmp_mp || jump_mp;
    assign exec_recover_pc         = pick_cmp ? cmp_ROB_exec_i.target_pc
                                              : jump_ROB_exec_i.target_pc;
    assign exec_mispredict_rob_idx = pick_cmp ? cmp_ROB_exec_i.rob_entry
                                              : jump_ROB_exec_i.rob_entry;
    assign exec_checkpoint_id      = pick_cmp ? cmp_ROB_exec_i.checkpoint_id
                                              : jump_ROB_exec_i.checkpoint_id;

    // -----------------------------------------------------------------------
    // Checkpoint slot release — fired whenever a CMP/Jump resolves (right or wrong)
    // -----------------------------------------------------------------------
    assign cmp_resolved         = cmp_valid;
    assign cmp_checkpoint_id_o  = cmp_ROB_exec_i.checkpoint_id;
    assign jump_resolved        = jump_valid;
    assign jump_checkpoint_id_o = jump_ROB_exec_i.checkpoint_id;

    // -----------------------------------------------------------------------
    // TAGE training (commit-time, behavior unchanged)
    // -----------------------------------------------------------------------
    assign commit_is_branch           = commit && commit_rob_i.is_branch;
    assign commit_is_jump             = commit && commit_rob_i.is_jump;
    assign commit_branch_actual_taken = commit && commit_rob_i.branch_actual_taken;
    assign commit_branch_pc           = commit_rob_i.pc;
    assign commit_mispredict          = commit && commit_rob_i.mispredict;
    assign commit_target_pc           = commit_rob_i.target_pc;

    logic   [31:0]  exec_msipredict_pc;
    assign exec_msipredict_pc = pick_cmp ? cmp_ROB_exec_i.pc : jump_ROB_exec_i.pc;

endmodule : branch_recovery
