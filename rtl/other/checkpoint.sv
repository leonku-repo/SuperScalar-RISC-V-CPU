// checkpoint.sv
//
// Stores up to CP_SIZE (4) checkpoints for execute-time branch recovery.
// One checkpoint is allocated per branch/jump at dispatch, released at execute.
//
// Per-entry contents:
//   srat_snap  — post-rename SRAT snapshot (dispatch_srat must be srat_next,
//                i.e. after the branch's own rename is applied, so that
//                SRAT[rd_arch] = branch.new_p, not branch.old_p).
//   alloc_list — bitvector of every PR allocated by rename2 after this checkpoint.
//                Does NOT include the branch's own new_p (the slot's valid=0 when
//                the branch's rename_update fires, so the update is gated out).
//
// Free list recovery (done in free_list.sv):
//   free_list <= free_list | recover_alloc_list
//   The current free_list already reflects all valid commits.
//   alloc_list contains exactly the PRs stolen by wrong-path renames — OR-ing frees them.

module checkpoint
import rv32i_types::*;
(
    input  logic                    clk,
    input  logic                    rst,

    // -----------------------------------------------------------------------
    // Allocation — from cpu_midcore at branch/jump dispatch
    // dispatch_srat must be the current registered SRAT (srat_o from srat.sv).
    // At dispatch time (from rename2_reg), the branch's own rename already clocked
    // in one cycle earlier — so srat_o is already post-rename for this branch.
    // The next instruction's rename_update fires this same cycle but has not yet
    // clocked in, so srat_o is also pre-next-instruction-rename. Correct snapshot.
    // -----------------------------------------------------------------------
    input  logic                    dispatch_valid,
    input  logic [ROB_IDX-1:0]      dispatch_rob_idx,
    input  logic [PRF_IDX-1:0]      dispatch_srat       [32],
    output logic [CP_IDX-1:0]       checkpoint_id_o,        // slot assigned to this dispatch
    output logic                    checkpoint_full,

    // -----------------------------------------------------------------------
    // Allocation list update — every rename2 allocation (rename_update && !stall)
    // -----------------------------------------------------------------------
    input  logic                    rename_update,
    input  logic [PRF_IDX-1:0]      rename_update_pr,

    // -----------------------------------------------------------------------
    // Resolve — from branch_recover.sv at execute time.
    // cmp_resolved / jump_resolved fire whenever CMP / Jump produce any result.
    // exec_mispredict + exec_checkpoint_id identify the mispredicting branch.
    // -----------------------------------------------------------------------
    input  logic                    cmp_resolved,
    input  logic [CP_IDX-1:0]       cmp_checkpoint_id,
    input  logic                    jump_resolved,
    input  logic [CP_IDX-1:0]       jump_checkpoint_id,
    input  logic                    exec_mispredict,
    input  logic [CP_IDX-1:0]       exec_checkpoint_id,
    input  logic [ROB_IDX-1:0]      rdPtr,                  // for wrap-aware younger-cp comparison

    // -----------------------------------------------------------------------
    // Recovery outputs — combinational, valid when exec_mispredict = 1
    // -----------------------------------------------------------------------
    output logic [PRF_IDX-1:0]      recover_srat        [32],
    output logic [PRF_SIZE-1:0]     recover_alloc_list,     // OR'd into free_list
    output logic [ROB_IDX-1:0]      recover_rob_idx
);

    // -----------------------------------------------------------------------
    // Storage
    // -----------------------------------------------------------------------
    logic                   cp_valid        [CP_SIZE];
    logic [ROB_IDX-1:0]     cp_rob_idx      [CP_SIZE];
    logic [PRF_IDX-1:0]     cp_srat_snap    [CP_SIZE][32];
    logic [PRF_SIZE-1:0]    cp_alloc_list   [CP_SIZE];

    // -----------------------------------------------------------------------
    // checkpoint_full — all slots occupied
    // -----------------------------------------------------------------------
    always_comb begin
        checkpoint_full = 1'b1;
        for (int i = 0; i < CP_SIZE; i++) begin
            if (!cp_valid[i]) checkpoint_full = 1'b0;
        end
    end

    // -----------------------------------------------------------------------
    // Allocation: priority-encode lowest-index free slot
    // -----------------------------------------------------------------------
    always_comb begin
        checkpoint_id_o = '0;
        for (int i = CP_SIZE-1; i >= 0; i--) begin
            if (!cp_valid[i]) checkpoint_id_o = CP_IDX'(i);
        end
    end

    // -----------------------------------------------------------------------
    // Wrap-aware age: is slot a younger than slot b?
    // (larger distance from rdPtr = younger = dispatched more recently)
    // -----------------------------------------------------------------------
    function automatic logic cp_is_younger(
        input logic [ROB_IDX-1:0] a_rob,
        input logic [ROB_IDX-1:0] b_rob,
        input logic [ROB_IDX-1:0] rd
    );
        return (ROB_IDX'(a_rob - rd) > ROB_IDX'(b_rob - rd));
    endfunction

    // -----------------------------------------------------------------------
    // Sequential updates
    // -----------------------------------------------------------------------
    always_ff @(posedge clk) begin
        if (rst) begin
            for (int i = 0; i < CP_SIZE; i++) begin
                cp_valid[i]     <= 1'b0;
                cp_rob_idx[i]   <= '0;
                cp_alloc_list[i] <= '0;
                for (int j = 0; j < 32; j++)
                    cp_srat_snap[i][j] <= PRF_IDX'(j);
            end
        end
        else begin
            // --- 1. Accumulate alloc_list for all currently-valid checkpoints ---
            // The new checkpoint being allocated this cycle has cp_valid=0 right
            // now, so the condition gates it out — the branch's own new_p is
            // correctly excluded from its own alloc_list.
            if (rename_update) begin
                for (int i = 0; i < CP_SIZE; i++) begin
                    if (cp_valid[i])
                        cp_alloc_list[i][rename_update_pr] <= 1'b1;
                end
            end

            // --- 2. Release on correct resolution ---
            // Gate out if this slot is the one being recovered (handled below).
            if (cmp_resolved &&
                !(exec_mispredict && (exec_checkpoint_id == cmp_checkpoint_id)))
                cp_valid[cmp_checkpoint_id] <= 1'b0;

            if (jump_resolved &&
                !(exec_mispredict && (exec_checkpoint_id == jump_checkpoint_id)))
                cp_valid[jump_checkpoint_id] <= 1'b0;

            // --- 3. Mispredict: release mispredicting slot + all younger slots ---
            if (exec_mispredict) begin
                for (int i = 0; i < CP_SIZE; i++) begin
                    if (cp_valid[i] &&
                        (CP_IDX'(i) == exec_checkpoint_id ||
                         cp_is_younger(cp_rob_idx[i],
                                       cp_rob_idx[exec_checkpoint_id],
                                       rdPtr)))
                        cp_valid[i] <= 1'b0;
                end
            end

            // --- 4. Allocate new checkpoint ---
            // Happens last so that if a slot is freed and reallocated in the same
            // cycle (unlikely given stall logic but safe), allocation wins.
            // dispatch_valid is gated by stall_checkpoint_full in cpu_midcore,
            // but we also guard with !checkpoint_full here for safety.
            if (dispatch_valid && !checkpoint_full) begin
                cp_valid[checkpoint_id_o]     <= 1'b1;
                cp_rob_idx[checkpoint_id_o]   <= dispatch_rob_idx;
                cp_alloc_list[checkpoint_id_o] <= rename_update ? (PRF_SIZE'(1) << rename_update_pr) : '0;
                for (int j = 0; j < 32; j++)
                    cp_srat_snap[checkpoint_id_o][j] <= dispatch_srat[j];
            end
        end
    end

    // -----------------------------------------------------------------------
    // Recovery outputs (combinational)
    // -----------------------------------------------------------------------
    assign recover_rob_idx   = cp_rob_idx[exec_checkpoint_id];
    assign recover_alloc_list = cp_alloc_list[exec_checkpoint_id];

    always_comb begin
        for (int j = 0; j < 32; j++)
            recover_srat[j] = cp_srat_snap[exec_checkpoint_id][j];
    end

endmodule : checkpoint
