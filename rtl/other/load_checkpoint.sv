// load_checkpoint.sv
//
// Stores up to LC_SIZE (= LQ_SIZE = 8) checkpoints for speculative load recovery.
// One checkpoint per load at dispatch; released at load commit.
// On spec_load_mispredict: only younger slots are released — the mispredicted
// load's own slot is kept because the load can mispredict again (multiple older
// stores may resolve to the same address sequentially).
//
// Per-entry:
//   srat_snap  — post-rename SRAT snapshot at load dispatch (same timing convention
//                as checkpoint.sv: srat_o is already post-rename for this load, and
//                the next instruction's rename_update has not yet clocked in).
//   alloc_list — PRs allocated by rename2 AFTER this checkpoint.
//                Does NOT include the load's own new_p (slot is cp_valid=0 when the
//                load's own rename_update fires, gating it out).
//
// Free list recovery (done in free_list.sv):
//   free_list <= free_list | recover_alloc_list
//   Same mechanism as branch checkpoints — OR frees wrong-path stolen PRs.

module load_checkpoint
import rv32i_types::*;
(
    input  logic                    clk,
    input  logic                    rst,

    // -----------------------------------------------------------------------
    // Allocation — at load dispatch
    // -----------------------------------------------------------------------
    input  logic                    dispatch_valid,
    input  logic [ROB_IDX-1:0]      dispatch_rob_idx,
    input  logic [PRF_IDX-1:0]      dispatch_srat       [32],
    output logic [LC_IDX-1:0]       checkpoint_id_o,        // slot assigned to this load
    output logic                    checkpoint_full,

    // -----------------------------------------------------------------------
    // Alloc list accumulation — every rename2 allocation
    // -----------------------------------------------------------------------
    input  logic                    rename_update,
    input  logic [PRF_IDX-1:0]      rename_update_pr,

    // -----------------------------------------------------------------------
    // Load commit — release slot (correct execution path)
    // -----------------------------------------------------------------------
    input  logic                    load_commit,
    input  logic [LC_IDX-1:0]       load_commit_checkpoint_id,

    // -----------------------------------------------------------------------
    // Exec-time branch mispredict — release slots for loads being flushed
    // (loads younger than the mispredicting branch)
    // -----------------------------------------------------------------------
    input  logic                    exec_mispredict,
    input  logic [ROB_IDX-1:0]      exec_mispredict_rob_idx,
    input  logic [ROB_IDX-1:0]      rdPtr,

    // -----------------------------------------------------------------------
    // Spec load mispredict — recover from this slot; release only younger slots.
    // The mispredicted load's own slot is kept (see module header).
    // -----------------------------------------------------------------------
    input  logic                    spec_load_mispredict,
    input  logic [LC_IDX-1:0]       spec_load_checkpoint_id,

    // -----------------------------------------------------------------------
    // Recovery outputs — combinational, valid when spec_load_mispredict = 1
    // -----------------------------------------------------------------------
    output logic [PRF_IDX-1:0]      recover_srat        [32],
    output logic [PRF_SIZE-1:0]     recover_alloc_list
);

    // -----------------------------------------------------------------------
    // Storage
    // -----------------------------------------------------------------------
    logic                   cp_valid        [LC_SIZE];
    logic [ROB_IDX-1:0]     cp_rob_idx      [LC_SIZE];
    logic [PRF_IDX-1:0]     cp_srat_snap    [LC_SIZE][32];
    logic [PRF_SIZE-1:0]    cp_alloc_list   [LC_SIZE];

    // -----------------------------------------------------------------------
    // checkpoint_full — all slots occupied
    // -----------------------------------------------------------------------
    always_comb begin
        checkpoint_full = 1'b1;
        for (int i = 0; i < LC_SIZE; i++)
            if (!cp_valid[i]) checkpoint_full = 1'b0;
    end

    // -----------------------------------------------------------------------
    // Allocation: lowest-index free slot (same priority as checkpoint.sv)
    // -----------------------------------------------------------------------
    always_comb begin
        checkpoint_id_o = '0;
        for (int i = LC_SIZE-1; i >= 0; i--)
            if (!cp_valid[i]) checkpoint_id_o = LC_IDX'(i);
    end

    // -----------------------------------------------------------------------
    // Sequential updates
    // Priority (highest first): alloc_list accumulation, load_commit release,
    //   exec_mispredict release, spec_load_mispredict release, allocation.
    // Allocation is last so it wins if a slot is freed and reallocated same cycle.
    // -----------------------------------------------------------------------
    always_ff @(posedge clk) begin
        if (rst) begin
            for (int i = 0; i < LC_SIZE; i++) begin
                cp_valid[i]      = 1'b0;
                cp_rob_idx[i]    = '0;
                cp_alloc_list[i] = '0;
                for (int j = 0; j < 32; j++)
                    cp_srat_snap[i][j] = PRF_IDX'(j);
            end
        end
        else begin
            // --- 1. Accumulate alloc_list for all valid slots ---
            // New slot being allocated this cycle has cp_valid=0, gating out
            // the load's own new_p (same exclusion as checkpoint.sv).
            if (rename_update) begin
                for (int i = 0; i < LC_SIZE; i++)
                    if (cp_valid[i])
                        cp_alloc_list[i][rename_update_pr] <= 1'b1;
            end

            // --- 2. Load commit: release slot ---
            if (load_commit && cp_valid[load_commit_checkpoint_id])
                cp_valid[load_commit_checkpoint_id] <= 1'b0;

            // --- 3. Exec mispredict: release slots for loads younger than branch ---
            if (exec_mispredict) begin
                for (int i = 0; i < LC_SIZE; i++) begin
                    if (cp_valid[i] &&
                        ROB_IDX'(cp_rob_idx[i] - rdPtr) >
                        ROB_IDX'(exec_mispredict_rob_idx - rdPtr))
                        cp_valid[i] <= 1'b0;
                end
            end

            // --- 4. Spec load mispredict: release slots for loads younger than the victim ---
            // Use > (not >=): the mispredicted load's own slot is KEPT because:
            //   (a) the load stays in LQ and can mispredict again (e.g. a second older
            //       store resolves to the same address after the first recovery), and
            //   (b) each re-mispredict must recover from this same checkpoint.
            // The slot is released at load_commit, which is guaranteed to eventually
            // fire (the mispredicting store is older → commits first → load commits).
            if (spec_load_mispredict) begin
                for (int i = 0; i < LC_SIZE; i++) begin
                    if (cp_valid[i] &&
                        ROB_IDX'(cp_rob_idx[i] - rdPtr) >
                        ROB_IDX'(cp_rob_idx[spec_load_checkpoint_id] - rdPtr))
                        cp_valid[i] <= 1'b0;
                end
            end

            // --- 5. Allocate new checkpoint ---
            // dispatch_valid is gated by !exec_mispredict && !spec_load_mispredict
            // in cpu_midcore, but !checkpoint_full is guarded here for safety.
            if (dispatch_valid && !checkpoint_full) begin
                cp_valid[checkpoint_id_o]      <= 1'b1;
                cp_rob_idx[checkpoint_id_o]    <= dispatch_rob_idx;
                cp_alloc_list[checkpoint_id_o] <= rename_update ? (PRF_SIZE'(1) << rename_update_pr) : '0;
                for (int j = 0; j < 32; j++)
                    cp_srat_snap[checkpoint_id_o][j] <= dispatch_srat[j];
            end
        end
    end

    // -----------------------------------------------------------------------
    // Recovery outputs (combinational)
    // -----------------------------------------------------------------------
    assign recover_alloc_list = cp_alloc_list[spec_load_checkpoint_id];

    always_comb begin
        for (int j = 0; j < 32; j++)
            recover_srat[j] = cp_srat_snap[spec_load_checkpoint_id][j];
    end

endmodule : load_checkpoint
