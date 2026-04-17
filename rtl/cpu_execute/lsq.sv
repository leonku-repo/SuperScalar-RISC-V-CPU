// Combined Load/Store Queue
// LQ: flat array (random-access), LQ_SIZE slots with valid bits
// SQ: circular FIFO, SQ_SIZE slots
// All cross-scanning (load state, identify-error) is internal.
// spec_load_mispredict_o is generated and self-applied here.
//
// Combinational pipeline (no loops):
//  1. raw_state_next     — SQ scan per LQ entry (FORWARDING/SAFE/SPEC/STALL/IDLE)
//  2. fwd/issue select   — oldest FORWARDING / oldest SAFE-or-SPECULATIVE
//  3. pre_final_state    — adds LS_EXECUTED for entries completing this cycle
//  4. identify_error     — scans pre_final_state; outputs spec_load_mispredict_o
//  5. load_state_next    — pre_final_state + reset mispredicted load back to raw_state

module lsq
import rv32i_types::*;
(
    input  logic                    clk,
    input  logic                    rst,

    // ── Dispatch ──────────────────────────────────────────────────────
    // Caller gates with: !exec_mispredict && !spec_load_mispredict_o
    // dispatch_to == 3'd2 → load, 3'd3 → store
    input  logic                    wr_en,
    input  rob_t                    ROB_data_i,
    input  midcore_t                MIDCORE_data_i,
    input  logic   [LC_IDX-1:0]    load_cp_id_i,       // load checkpoint slot (valid for loads only)
    // PRF read at dispatch — repurposed from old lookup_lsq_pr1/pr2.
    // cpu_execute.sv should drive these with PRF[MIDCORE_midcore_i.pr1/pr2].
    input  logic   [31:0]          dispatch_pr1_val_i,
    input  logic   [31:0]          dispatch_pr2_val_i,

    // ── Exec-time mispredict flush ─────────────────────────────────────
    input  logic                    exec_mispredict,
    input  logic   [ROB_IDX-1:0]   exec_mispredict_rob_idx,
    input  logic   [ROB_IDX-1:0]   rob_rdPtr_i,

    // ── WB bus (wakeup + value capture) ───────────────────────────────
    input  logic                    wb_alu,  wb_load,  wb_jump,  wb_cmp,  wb_mul,
    input  logic   [PRF_IDX-1:0]   wb_alu_pr,  wb_load_pr,  wb_jump_pr,  wb_cmp_pr,  wb_mul_pr,
    input  logic   [31:0]          wb_alu_val, wb_load_val, wb_jump_val, wb_cmp_val, wb_mul_val,

    // ── Load commit ────────────────────────────────────────────────────
    input  logic                    load_commit_i,
    input  logic   [ROB_IDX-1:0]   load_commit_rob_entry_i,
    input  logic   [31:0]          load_commit_pc_i,

    // ── Store commit (triggers execution of SQ head) ───────────────────
    input  logic                    store_commit_i,
    input  logic   [ROB_IDX-1:0]   store_commit_rob_entry_i,
    input  logic   [31:0]          store_commit_pc_i,

    // ── Feedback from mem.sv ───────────────────────────────────────────
    input  logic                    load_done_i,               // dmem_resp returned for issued load
    input  logic   [ROB_IDX-1:0]   load_done_rob_entry_i,
    input  logic                    store_done_i,              // dmem_resp for committed store → pop SQ

    // ── Forwarding writeback (second load wb channel; caller writes to PRF) ─
    output logic                    wb_fwd_valid_o,
    output logic   [PRF_IDX-1:0]   wb_fwd_pr_o,
    output logic   [31:0]          wb_fwd_val_o,
    output rob_t                    wb_fwd_rob_data_o,         // for ROB done update

    // ── Load issue to mem.sv ───────────────────────────────────────────
    output logic                    load_issue_valid_o,
    output logic   [31:0]          load_issue_addr_o,
    output logic   [3:0]           load_issue_rmask_o,
    output logic   [PRF_IDX-1:0]   load_issue_new_p_o,
    output rob_t                    load_issue_rob_data_o,
    output logic   [2:0]           load_issue_funct3_o,

    // ── Store issue to mem.sv ──────────────────────────────────────────
    output logic                    store_issue_valid_o,
    output logic   [31:0]          store_issue_addr_o,
    output logic   [3:0]           store_issue_wmask_o,
    output logic   [31:0]          store_issue_wdata_o,
    output rob_t                    store_issue_rob_data_o,

    // ── Store ROB done update (ROB only — stores have no dest PR) ─────
    // Fires when SQ head has addr_valid && data_ready, before commit.
    // Tells ROB the store can commit. ROB guards with !done so idempotent.
    output logic                    store_wb_valid_o,
    output rob_t                    store_wb_rob_data_o,

    // ── Speculative load mispredict ────────────────────────────────────
    output logic                    spec_load_mispredict_o,
    output logic   [31:0]          spec_load_recover_pc_o,
    output logic   [ROB_IDX-1:0]   spec_load_rob_idx_o,
    output logic   [LC_IDX-1:0]    spec_load_checkpoint_id_o,

    // ── Capacity ───────────────────────────────────────────────────────
    output logic                    lq_full_o,
    output logic                    sq_full_o
);

// =====================================================================
// Arrays
// =====================================================================
lq_t             lq      [LQ_SIZE];
sq_t             sq      [SQ_SIZE];
logic [SQ_IDX:0] sq_wrPtr, sq_rdPtr;
logic            sq_empty;

// =====================================================================
// Module-level combinational signals
// =====================================================================

// Age (relative to rob_rdPtr) and SQ occupancy
logic [ROB_IDX-1:0]  lq_age        [LQ_SIZE];
logic [ROB_IDX-1:0]  sq_age        [SQ_SIZE];
logic                sq_slot_occ   [SQ_SIZE];  // true if SQ slot is within [rdPtr_next, wrPtr)
logic [SQ_IDX:0]     sq_rdPtr_next;

// WB match per entry
logic                lq_pr1_wb_hit [LQ_SIZE];
logic [31:0]         lq_pr1_wb_val [LQ_SIZE];
logic                sq_pr1_wb_hit [SQ_SIZE];
logic [31:0]         sq_pr1_wb_val [SQ_SIZE];
logic                sq_pr2_wb_hit [SQ_SIZE];
logic [31:0]         sq_pr2_wb_val [SQ_SIZE];

// Forwarding wb (forwarded load acts as wb for dependent instructions)
// Internal bypass: if fwd fires for a PR that another LQ/SQ entry depends on,
// handled inside lq_wb_match / sq_wb_match via wb_fwd_valid_o loopback.

// Dispatch-time wb bypass
logic        disp_pr1_wb_hit;
logic [31:0] disp_pr1_wb_val;
logic        disp_pr2_wb_hit;
logic [31:0] disp_pr2_wb_val;

// Raw load state (SQ scan, no LS_EXECUTED override)
load_state_t raw_state_next [LQ_SIZE];
logic [SQ_IDX-1:0] raw_fwd_src [LQ_SIZE];  // which SQ slot to forward from

// Selection results
logic [LQ_IDX-1:0] fwd_sel_idx;
logic              fwd_sel_valid;
logic [LQ_IDX-1:0] issue_sel_idx;
logic              issue_sel_valid;

// Pre-final state (LS_EXECUTED from completions this cycle; no spec_mispredict reset yet)
// This feeds identify-error to avoid combinational loop with spec_load_mispredict_o.
load_state_t pre_final_state [LQ_SIZE];

// Final load_state_next (pre_final + spec_load_mispredict reset for mispredicted load)
load_state_t load_state_next [LQ_SIZE];

// Identify-error: previous-cycle sq.addr_valid snapshot
logic sq_addr_valid_prev [SQ_SIZE];

// LQ free slot
logic [LQ_IDX-1:0] lq_free_idx;
logic              lq_has_free;

// SQ partial flush new wrPtr
logic [SQ_IDX:0] sq_exec_new_wrPtr;
logic [SQ_IDX:0] sq_spec_new_wrPtr;

// Temporaries for always_comb / always_ff blocks
// (Verilator does not support 'logic' declarations inside always blocks)
// raw_state_comp — per-LQ-entry scratch (arrays, one slot per for-loop iteration)
logic              raw_found_match    [LQ_SIZE];
logic [ROB_IDX-1:0] raw_best_age     [LQ_SIZE];
logic [SQ_IDX-1:0]  raw_best_j       [LQ_SIZE];
logic              raw_any_unresolved [LQ_SIZE];
// sel_fwd_issue
logic [ROB_IDX-1:0] fwd_oldest_t;
logic [ROB_IDX-1:0] issue_oldest_t;
// identify_error
logic [ROB_IDX-1:0] ie_oldest_victim;
// sq_flush_comb (shared scalars — loops execute sequentially)
logic [ROB_IDX-1:0] sq_exec_thresh;
logic [ROB_IDX-1:0] sq_spec_thresh;
logic [SQ_IDX-1:0]  sq_flush_abs;
logic               sq_flush_occ;
// lq_ff dispatch scratch
logic [LQ_IDX-1:0]  lq_disp_s;
logic [31:0]        lq_disp_pr1v;
logic [31:0]        lq_disp_addr_c;
// lq_ff wb addr scratch — avoids expression bit-slice in always_ff
logic [31:0]        lq_wb_addr_scratch [LQ_SIZE];
// sq_ff pr1 wb scratch
logic [31:0]        sq_pr1_a;
// sq_ff pr2 wb scratch
logic [31:0]        sq_pr2_av;
logic               sq_pr2_addr_ok;
// sq_ff dispatch scratch
logic [SQ_IDX-1:0]  sq_disp_s;
logic [31:0]        sq_disp_a;
// fwd_outputs scratch
logic [SQ_IDX-1:0]  fwd_src_t;
logic [31:0]        fwd_w_t;
logic [1:0]         fwd_alo_t;
// store_wb_outputs scratch
logic [SQ_IDX-1:0]  swb_h;

// =====================================================================
// LQ free slot (lowest index with valid==0)
// =====================================================================
always_comb begin : lq_alloc
    lq_free_idx = '0;
    lq_has_free = 1'b0;
    for (int i = LQ_SIZE-1; i >= 0; i--) begin
        if (!lq[i].valid) begin
            lq_free_idx = LQ_IDX'(unsigned'(i));
            lq_has_free = 1'b1;
        end
    end
end

assign lq_full_o = !lq_has_free;
assign sq_full_o = (sq_wrPtr[SQ_IDX] != sq_rdPtr[SQ_IDX]) &&
                   (sq_wrPtr[SQ_IDX-1:0] == sq_rdPtr[SQ_IDX-1:0]);
assign sq_empty  = (sq_wrPtr == sq_rdPtr);

// =====================================================================
// SQ rdPtr next (advances when store_done pops the head)
// =====================================================================
always_comb begin : sq_rdptr_comb
    sq_rdPtr_next = sq_rdPtr;
    if (store_done_i && (!sq_empty))
        sq_rdPtr_next = sq_rdPtr + 1;
end

// =====================================================================
// Age and SQ occupancy
// Uses rdPtr_next so the slot being consumed this cycle is excluded.
// =====================================================================
always_comb begin : age_occ
    for (int i = 0; i < LQ_SIZE; i++)
        lq_age[i] = ROB_IDX'(lq[i].rob_data.rob_entry - rob_rdPtr_i);

    for (int j = 0; j < SQ_SIZE; j++) begin
        sq_age[j]      = ROB_IDX'(sq[j].rob_data.rob_entry - rob_rdPtr_i);
        sq_slot_occ[j] = ({1'b0, SQ_IDX'(unsigned'(j) - sq_rdPtr_next[SQ_IDX-1:0])} <
                           (sq_wrPtr - sq_rdPtr_next));
    end
end

// =====================================================================
// WB match for LQ (pr1 only; loads have no pr2)
// =====================================================================
always_comb begin : lq_wb_match
    for (int i = 0; i < LQ_SIZE; i++) begin
        lq_pr1_wb_hit[i] = (lq[i].pr1 != '0) && (
            (wb_alu  && wb_alu_pr  == lq[i].pr1) ||
            (wb_load && wb_load_pr == lq[i].pr1) ||
            (wb_jump && wb_jump_pr == lq[i].pr1) ||
            (wb_cmp  && wb_cmp_pr  == lq[i].pr1) ||
            (wb_mul  && wb_mul_pr  == lq[i].pr1) ||
            (wb_fwd_valid_o && wb_fwd_pr_o == lq[i].pr1)); // forwarding wb bypass
        if      (wb_alu  && wb_alu_pr  == lq[i].pr1) lq_pr1_wb_val[i] = wb_alu_val;
        else if (wb_load && wb_load_pr == lq[i].pr1) lq_pr1_wb_val[i] = wb_load_val;
        else if (wb_jump && wb_jump_pr == lq[i].pr1) lq_pr1_wb_val[i] = wb_jump_val;
        else if (wb_cmp  && wb_cmp_pr  == lq[i].pr1) lq_pr1_wb_val[i] = wb_cmp_val;
        else if (wb_mul  && wb_mul_pr  == lq[i].pr1) lq_pr1_wb_val[i] = wb_mul_val;
        else if (wb_fwd_valid_o && wb_fwd_pr_o == lq[i].pr1) lq_pr1_wb_val[i] = wb_fwd_val_o;
        else                                          lq_pr1_wb_val[i] = '0;
    end
end

// =====================================================================
// WB match for SQ (pr1 and pr2)
// =====================================================================
always_comb begin : sq_wb_match
    for (int j = 0; j < SQ_SIZE; j++) begin
        sq_pr1_wb_hit[j] = (sq[j].pr1 != '0) && (
            (wb_alu  && wb_alu_pr  == sq[j].pr1) ||
            (wb_load && wb_load_pr == sq[j].pr1) ||
            (wb_jump && wb_jump_pr == sq[j].pr1) ||
            (wb_cmp  && wb_cmp_pr  == sq[j].pr1) ||
            (wb_mul  && wb_mul_pr  == sq[j].pr1) ||
            (wb_fwd_valid_o && wb_fwd_pr_o == sq[j].pr1));
        if      (wb_alu  && wb_alu_pr  == sq[j].pr1) sq_pr1_wb_val[j] = wb_alu_val;
        else if (wb_load && wb_load_pr == sq[j].pr1) sq_pr1_wb_val[j] = wb_load_val;
        else if (wb_jump && wb_jump_pr == sq[j].pr1) sq_pr1_wb_val[j] = wb_jump_val;
        else if (wb_cmp  && wb_cmp_pr  == sq[j].pr1) sq_pr1_wb_val[j] = wb_cmp_val;
        else if (wb_mul  && wb_mul_pr  == sq[j].pr1) sq_pr1_wb_val[j] = wb_mul_val;
        else if (wb_fwd_valid_o && wb_fwd_pr_o == sq[j].pr1) sq_pr1_wb_val[j] = wb_fwd_val_o;
        else                                          sq_pr1_wb_val[j] = '0;

        sq_pr2_wb_hit[j] = (sq[j].pr2 != '0) && (
            (wb_alu  && wb_alu_pr  == sq[j].pr2) ||
            (wb_load && wb_load_pr == sq[j].pr2) ||
            (wb_jump && wb_jump_pr == sq[j].pr2) ||
            (wb_cmp  && wb_cmp_pr  == sq[j].pr2) ||
            (wb_mul  && wb_mul_pr  == sq[j].pr2) ||
            (wb_fwd_valid_o && wb_fwd_pr_o == sq[j].pr2));
        if      (wb_alu  && wb_alu_pr  == sq[j].pr2) sq_pr2_wb_val[j] = wb_alu_val;
        else if (wb_load && wb_load_pr == sq[j].pr2) sq_pr2_wb_val[j] = wb_load_val;
        else if (wb_jump && wb_jump_pr == sq[j].pr2) sq_pr2_wb_val[j] = wb_jump_val;
        else if (wb_cmp  && wb_cmp_pr  == sq[j].pr2) sq_pr2_wb_val[j] = wb_cmp_val;
        else if (wb_mul  && wb_mul_pr  == sq[j].pr2) sq_pr2_wb_val[j] = wb_mul_val;
        else if (wb_fwd_valid_o && wb_fwd_pr_o == sq[j].pr2) sq_pr2_wb_val[j] = wb_fwd_val_o;
        else                                          sq_pr2_wb_val[j] = '0;
    end
end

// =====================================================================
// Dispatch-time WB bypass
// =====================================================================
always_comb begin : disp_wb
    disp_pr1_wb_hit = MIDCORE_data_i.pr1_valid && (
        (wb_alu          && wb_alu_pr      == MIDCORE_data_i.pr1) ||
        (wb_load         && wb_load_pr     == MIDCORE_data_i.pr1) ||
        (wb_jump         && wb_jump_pr     == MIDCORE_data_i.pr1) ||
        (wb_cmp          && wb_cmp_pr      == MIDCORE_data_i.pr1) ||
        (wb_mul          && wb_mul_pr      == MIDCORE_data_i.pr1) ||
        (wb_fwd_valid_o  && wb_fwd_pr_o    == MIDCORE_data_i.pr1));
    if      (wb_alu         && wb_alu_pr     == MIDCORE_data_i.pr1) disp_pr1_wb_val = wb_alu_val;
    else if (wb_load        && wb_load_pr    == MIDCORE_data_i.pr1) disp_pr1_wb_val = wb_load_val;
    else if (wb_jump        && wb_jump_pr    == MIDCORE_data_i.pr1) disp_pr1_wb_val = wb_jump_val;
    else if (wb_cmp         && wb_cmp_pr     == MIDCORE_data_i.pr1) disp_pr1_wb_val = wb_cmp_val;
    else if (wb_mul         && wb_mul_pr     == MIDCORE_data_i.pr1) disp_pr1_wb_val = wb_mul_val;
    else if (wb_fwd_valid_o && wb_fwd_pr_o   == MIDCORE_data_i.pr1) disp_pr1_wb_val = wb_fwd_val_o;
    else                                                              disp_pr1_wb_val = dispatch_pr1_val_i;

    disp_pr2_wb_hit = MIDCORE_data_i.pr2_valid && (
        (wb_alu          && wb_alu_pr      == MIDCORE_data_i.pr2) ||
        (wb_load         && wb_load_pr     == MIDCORE_data_i.pr2) ||
        (wb_jump         && wb_jump_pr     == MIDCORE_data_i.pr2) ||
        (wb_cmp          && wb_cmp_pr      == MIDCORE_data_i.pr2) ||
        (wb_mul          && wb_mul_pr      == MIDCORE_data_i.pr2) ||
        (wb_fwd_valid_o  && wb_fwd_pr_o    == MIDCORE_data_i.pr2));
    if      (wb_alu         && wb_alu_pr     == MIDCORE_data_i.pr2) disp_pr2_wb_val = wb_alu_val;
    else if (wb_load        && wb_load_pr    == MIDCORE_data_i.pr2) disp_pr2_wb_val = wb_load_val;
    else if (wb_jump        && wb_jump_pr    == MIDCORE_data_i.pr2) disp_pr2_wb_val = wb_jump_val;
    else if (wb_cmp         && wb_cmp_pr     == MIDCORE_data_i.pr2) disp_pr2_wb_val = wb_cmp_val;
    else if (wb_mul         && wb_mul_pr     == MIDCORE_data_i.pr2) disp_pr2_wb_val = wb_mul_val;
    else if (wb_fwd_valid_o && wb_fwd_pr_o   == MIDCORE_data_i.pr2) disp_pr2_wb_val = wb_fwd_val_o;
    else                                                              disp_pr2_wb_val = dispatch_pr2_val_i;
end

// =====================================================================
// Stage 1: raw_state_next (SQ scan per LQ entry)
//
// Pre-compute lq_wb_addr_scratch: used in lq_ff to avoid expression bit-slice
always_comb begin : lq_wb_addr_comp
    for (int i = 0; i < LQ_SIZE; i++)
        lq_wb_addr_scratch[i] = lq_pr1_wb_val[i] + lq[i].imm;
end

// For each valid LQ entry with addr_valid:
//   Find youngest older SQ entry with addr_valid=1 AND addr match.
//   If found:
//     wmask covers rmask AND data_ready → LS_FORWARDING (record SQ src)
//     else                              → LS_STALL
//   If not found:
//     any older SQ entry with addr_valid=0 → LS_SPECULATIVE
//     else                                  → LS_SAFE
// =====================================================================
always_comb begin : raw_state_comp
    for (int i = 0; i < LQ_SIZE; i++) begin
        raw_state_next[i] = LS_IDLE;
        raw_fwd_src[i]    = '0;

        raw_found_match[i]    = 1'b0;
        raw_best_age[i]       = '0;
        raw_best_j[i]         = '0;
        raw_any_unresolved[i] = 1'b0;

        if (lq[i].valid && lq[i].addr_valid) begin
            // Step A: find youngest older SQ entry with addr_valid=1 AND addr match

            for (int j = 0; j < SQ_SIZE; j++) begin
                if (sq_slot_occ[j] && sq_age[j] < lq_age[i]) begin
                    // SQ entry j is older than LQ entry i
                    if (!sq[j].addr_valid) begin
                        raw_any_unresolved[i] = 1'b1;
                    end else if (sq[j].addr[31:2] == lq[i].addr[31:2]) begin
                        // same word — track youngest (mask overlap checked later)
                        // Prefer uncommitted over committed (committed stores have stale ages
                        // once rdPtr advances past them). Among uncommitted, pick youngest (largest age).
                        if (!raw_found_match[i] ||
                            (!sq[j].committed && sq[raw_best_j[i]].committed) ||
                            (!sq[j].committed && sq_age[j] > raw_best_age[i])) begin
                            raw_found_match[i] = 1'b1;
                            raw_best_age[i]    = sq_age[j];
                            raw_best_j[i]      = SQ_IDX'(unsigned'(j));
                        end
                    end
                end
            end

            if (raw_found_match[i]) begin
                if (((sq[raw_best_j[i]].wmask & lq[i].rmask) == lq[i].rmask) && sq[raw_best_j[i]].data_ready) begin
                    raw_state_next[i] = LS_FORWARDING;
                    raw_fwd_src[i]    = raw_best_j[i];
                end else begin
                    raw_state_next[i] = LS_STALL;
                end
            end else begin
                raw_state_next[i] = raw_any_unresolved[i] ? LS_SPECULATIVE : LS_SAFE;
            end
        end
    end
end

// =====================================================================
// Stage 2: forwarding and issue selection
// Forwarding: oldest (smallest age) LQ entry where
//   raw_state == FORWARDING AND registered state != LS_EXECUTED
// Issue: oldest LQ entry where
//   raw_state == SAFE or SPECULATIVE AND registered state != LS_EXECUTED
// =====================================================================
always_comb begin : sel_fwd_issue
    fwd_sel_valid   = 1'b0;
    fwd_sel_idx     = '0;
    issue_sel_valid = 1'b0;
    issue_sel_idx   = '0;
    fwd_oldest_t    = '1;
    issue_oldest_t  = '1;

    for (int i = 0; i < LQ_SIZE; i++) begin
        if (lq[i].valid && lq[i].load_state != LS_EXECUTED) begin
            if (raw_state_next[i] == LS_FORWARDING) begin
                if (!fwd_sel_valid || lq_age[i] < fwd_oldest_t) begin
                    fwd_sel_valid = 1'b1;
                    fwd_sel_idx   = LQ_IDX'(unsigned'(i));
                    fwd_oldest_t  = lq_age[i];
                end
            end
            if (raw_state_next[i] == LS_SAFE || raw_state_next[i] == LS_SPECULATIVE) begin
                if (!issue_sel_valid || lq_age[i] < issue_oldest_t) begin
                    issue_sel_valid = 1'b1;
                    issue_sel_idx   = LQ_IDX'(unsigned'(i));
                    issue_oldest_t  = lq_age[i];
                end
            end
        end
    end
end

// =====================================================================
// Stage 3: pre_final_state (adds LS_EXECUTED for completions this cycle)
// Does NOT apply spec_load_mispredict reset — that would create a loop.
// =====================================================================
always_comb begin : pre_final_comp
    for (int i = 0; i < LQ_SIZE; i++) begin
        if (lq[i].load_state == LS_EXECUTED) begin
            pre_final_state[i] = LS_EXECUTED;
        end else if ((load_done_i && load_done_rob_entry_i == lq[i].rob_data.rob_entry) ||
                     (fwd_sel_valid && LQ_IDX'(unsigned'(i)) == fwd_sel_idx)) begin
            pre_final_state[i] = LS_EXECUTED;
        end else begin
            pre_final_state[i] = raw_state_next[i];
        end
    end
end

// =====================================================================
// Stage 4: identify-error → spec_load_mispredict_o
//
// Every cycle: for each SQ entry whose addr_valid just went 0→1,
// scan LQ for younger loads that are LS_EXECUTED with matching addr+mask.
// If multiple candidates: recover to oldest (smallest age = closest to ROB head).
// =====================================================================
always_ff @(posedge clk) begin : sq_prev_ff
    if (rst) begin
        for (int j = 0; j < SQ_SIZE; j++) sq_addr_valid_prev[j] <= 1'b0;
    end else begin
        for (int j = 0; j < SQ_SIZE; j++)
            sq_addr_valid_prev[j] <= sq[j].addr_valid;
    end
end

always_comb begin : identify_error
    spec_load_mispredict_o    = 1'b0;
    spec_load_recover_pc_o    = '0;
    spec_load_rob_idx_o       = '0;
    spec_load_checkpoint_id_o = '0;
    ie_oldest_victim          = '1;

    for (int j = 0; j < SQ_SIZE; j++) begin
        if (sq_slot_occ[j] && !sq_addr_valid_prev[j] && sq[j].addr_valid) begin
            // This store's address just became known — scan LQ for victims
            for (int i = 0; i < LQ_SIZE; i++) begin
                if (lq[i].valid &&
                    pre_final_state[i] == LS_EXECUTED &&
                    lq[i].addr_valid &&
                    lq_age[i] > sq_age[j] &&            // load is younger than store
                    lq[i].addr[31:2] == sq[j].addr[31:2] &&  // same word
                    (sq[j].wmask & lq[i].rmask) == lq[i].rmask) begin
                    // Victim: this load executed with potentially stale data.
                    // Pick the oldest (smallest age) victim.
                    if (!spec_load_mispredict_o || lq_age[i] < ie_oldest_victim) begin
                        spec_load_mispredict_o    = 1'b1;
                        ie_oldest_victim          = lq_age[i];
                        spec_load_recover_pc_o    = lq[i].rob_data.pc_next;
                        spec_load_rob_idx_o       = lq[i].rob_data.rob_entry;
                        spec_load_checkpoint_id_o = lq[i].rob_data.spec_load_cp_id;
                    end
                end
            end
        end
    end
end

// =====================================================================
// Stage 5: load_state_next (pre_final + spec_load_mispredict reset)
// On spec_load_mispredict: the mispredicted load's state reverts to raw_state
// so it re-evaluates and re-issues next cycle.
// =====================================================================
always_comb begin : final_state_comp
    for (int i = 0; i < LQ_SIZE; i++) begin
        if (spec_load_mispredict_o &&
            lq[i].rob_data.rob_entry == spec_load_rob_idx_o) begin
            load_state_next[i] = raw_state_next[i];
        end else begin
            load_state_next[i] = pre_final_state[i];
        end
    end
end

// =====================================================================
// SQ partial-flush: compute new wrPtr
// Position i (relative from rdPtr_next) → absolute slot (rdPtr_next + i) % SQ_SIZE.
// Survivors: committed head OR age <= threshold.
// =====================================================================
always_comb begin : sq_flush_comb
    // exec_mispredict flush
    sq_exec_thresh    = ROB_IDX'(exec_mispredict_rob_idx - rob_rdPtr_i);
    sq_exec_new_wrPtr = sq_rdPtr_next;
    for (int i = 0; i < SQ_SIZE; i++) begin
        sq_flush_abs = SQ_IDX'(sq_rdPtr_next[SQ_IDX-1:0] + SQ_IDX'(unsigned'(i)));
        sq_flush_occ = ({1'b0, SQ_IDX'(unsigned'(i))} < (sq_wrPtr - sq_rdPtr_next));
        if (sq_flush_occ &&
            ((i == 0 && sq[sq_rdPtr_next[SQ_IDX-1:0]].committed) ||
             sq_age[sq_flush_abs] <= sq_exec_thresh))
            sq_exec_new_wrPtr = sq_exec_new_wrPtr + 1;
    end

    // spec_load_mispredict flush
    sq_spec_thresh    = ROB_IDX'(spec_load_rob_idx_o - rob_rdPtr_i);
    sq_spec_new_wrPtr = sq_rdPtr_next;
    for (int i = 0; i < SQ_SIZE; i++) begin
        sq_flush_abs = SQ_IDX'(sq_rdPtr_next[SQ_IDX-1:0] + SQ_IDX'(unsigned'(i)));
        sq_flush_occ = ({1'b0, SQ_IDX'(unsigned'(i))} < (sq_wrPtr - sq_rdPtr_next));
        if (sq_flush_occ &&
            ((i == 0 && sq[sq_rdPtr_next[SQ_IDX-1:0]].committed) ||
             sq_age[sq_flush_abs] <= sq_spec_thresh))
            sq_spec_new_wrPtr = sq_spec_new_wrPtr + 1;
    end
end

// =====================================================================
// LQ sequential
// Priority (highest first): exec_mispredict flush, spec_load flush,
//   load_commit release, dispatch, wb wakeup/addr, load_state update.
// Multiple ff blocks are separate concerns but share the array.
// Implemented in a single always_ff to resolve priority clearly.
// =====================================================================
always_ff @(posedge clk) begin : lq_ff
    if (rst) begin
        for (int i = 0; i < LQ_SIZE; i++) lq[i] <= '0;
    end else begin

        // ── 1. Update load_state for all valid entries ────────────────
        for (int i = 0; i < LQ_SIZE; i++) begin
            if (lq[i].valid) begin
                lq[i].load_state <= load_state_next[i];
                // Mark forwarded loads so mispredict source can be attributed
                if (fwd_sel_valid && LQ_IDX'(unsigned'(i)) == fwd_sel_idx)
                    lq[i].was_forwarded <= 1'b1;
            end
        end

        // ── 2. WB wakeup: capture pr1_val and compute addr ────────────
        for (int i = 0; i < LQ_SIZE; i++) begin
            if (lq[i].valid && !lq[i].pr1_ready && lq_pr1_wb_hit[i]) begin
                lq[i].pr1_ready  <= 1'b1;
                lq[i].pr1_val    <= lq_pr1_wb_val[i];
                lq[i].addr       <= lq_pr1_wb_val[i] + lq[i].imm;
                lq[i].addr_valid <= 1'b1;
                case (lq[i].funct3)
                    3'b000, 3'b100: lq[i].rmask <= 4'b0001 << lq_wb_addr_scratch[i][1:0];
                    3'b001, 3'b101: lq[i].rmask <= 4'b0011 << lq_wb_addr_scratch[i][1:0];
                    3'b010:         lq[i].rmask <= 4'b1111;
                    default:        lq[i].rmask <= '0;
                endcase
            end
        end

        // ── 3. Load commit: release slot ──────────────────────────────
        if (load_commit_i) begin
            for (int i = 0; i < LQ_SIZE; i++) begin
                if (lq[i].valid &&
                    lq[i].rob_data.rob_entry == load_commit_rob_entry_i &&
                    lq[i].rob_data.pc        == load_commit_pc_i)
                    lq[i].valid <= 1'b0;
            end
        end

        // ── 4. exec_mispredict: invalidate younger entries ────────────
        if (exec_mispredict) begin
            for (int i = 0; i < LQ_SIZE; i++) begin
                if (lq[i].valid &&
                    ROB_IDX'(lq[i].rob_data.rob_entry - rob_rdPtr_i) >
                    ROB_IDX'(exec_mispredict_rob_idx  - rob_rdPtr_i))
                    lq[i] <= '0;
            end
        end

        // ── 5. spec_load_mispredict: invalidate younger; keep mispredicted ─
        if (spec_load_mispredict_o) begin
            for (int i = 0; i < LQ_SIZE; i++) begin
                if (lq[i].valid &&
                    ROB_IDX'(lq[i].rob_data.rob_entry - rob_rdPtr_i) >
                    ROB_IDX'(spec_load_rob_idx_o      - rob_rdPtr_i))
                    lq[i] <= '0;
                // The mispredicted entry stays valid; its load_state was already
                // reset to raw_state_next via load_state_next (Stage 5 above).
            end
        end

        // ── 6. Load dispatch ──────────────────────────────────────────
        if (wr_en && !lq_full_o && !exec_mispredict && !spec_load_mispredict_o &&
            MIDCORE_data_i.dispatch_to == 3'd2 && ROB_data_i.valid) begin

            lq_disp_s    = lq_free_idx;
            lq_disp_pr1v = (!MIDCORE_data_i.pr1_busy || disp_pr1_wb_hit) ? disp_pr1_wb_val : '0;

            lq[lq_disp_s]                          <= '0;
            lq[lq_disp_s].valid                    <= 1'b1;
            lq[lq_disp_s].load_state               <= LS_IDLE;
            lq[lq_disp_s].pr1                      <= MIDCORE_data_i.pr1;
            lq[lq_disp_s].funct3                   <= MIDCORE_data_i.funct3;
            lq[lq_disp_s].imm                      <= MIDCORE_data_i.imm_o;
            lq[lq_disp_s].rob_data                 <= ROB_data_i;
            lq[lq_disp_s].rob_data.spec_load_cp_id <= load_cp_id_i;

            if (!MIDCORE_data_i.pr1_busy || disp_pr1_wb_hit) begin
                lq_disp_addr_c = lq_disp_pr1v + MIDCORE_data_i.imm_o;
                lq[lq_disp_s].pr1_ready  <= 1'b1;
                lq[lq_disp_s].pr1_val    <= lq_disp_pr1v;
                lq[lq_disp_s].addr       <= lq_disp_addr_c;
                lq[lq_disp_s].addr_valid <= 1'b1;
                case (MIDCORE_data_i.funct3)
                    3'b000, 3'b100: lq[lq_disp_s].rmask <= 4'b0001 << lq_disp_addr_c[1:0];
                    3'b001, 3'b101: lq[lq_disp_s].rmask <= 4'b0011 << lq_disp_addr_c[1:0];
                    3'b010:         lq[lq_disp_s].rmask <= 4'b1111;
                    default:        lq[lq_disp_s].rmask <= '0;
                endcase
            end
        end
    end
end

// =====================================================================
// SQ sequential
// =====================================================================
always_ff @(posedge clk) begin : sq_ff
    if (rst) begin
        sq_wrPtr <= '0;
        sq_rdPtr <= '0;
        for (int j = 0; j < SQ_SIZE; j++) sq[j] <= '0;
    end else begin

        // ── rdPtr: advance when store_done pops head ──────────────────
        sq_rdPtr <= sq_rdPtr_next;
        if (store_done_i && (!sq_empty)) begin
            sq[sq_rdPtr[SQ_IDX-1:0]].committed    <= 1'b0;
            sq[sq_rdPtr[SQ_IDX-1:0]].rob_wb_sent  <= 1'b0;
        end

        // ── wrPtr: flush or advance on dispatch ───────────────────────
        // When both mispredicts fire, use the one that flushes more
        // (smaller wrPtr relative to rdPtr_next = older recovery point).
        if (exec_mispredict && spec_load_mispredict_o) begin
            sq_wrPtr <= ((sq_exec_new_wrPtr - sq_rdPtr_next) <= (sq_spec_new_wrPtr - sq_rdPtr_next))
                        ? sq_exec_new_wrPtr : sq_spec_new_wrPtr;
        end else if (exec_mispredict)
            sq_wrPtr <= sq_exec_new_wrPtr;
        else if (spec_load_mispredict_o)
            sq_wrPtr <= sq_spec_new_wrPtr;
        else if (wr_en && !sq_full_o && !exec_mispredict && !spec_load_mispredict_o &&
                 MIDCORE_data_i.dispatch_to == 3'd3 && ROB_data_i.valid)
            sq_wrPtr <= sq_wrPtr + 1;

        // ── Mark ROB wb sent (one-cycle pulse gate) ───────────────────
        if (store_wb_valid_o)
            sq[sq_rdPtr[SQ_IDX-1:0]].rob_wb_sent <= 1'b1;

        // ── Store commit: set committed on SQ head ────────────────────
        if (store_commit_i && (!sq_empty) &&
            sq[sq_rdPtr[SQ_IDX-1:0]].rob_data.rob_entry == store_commit_rob_entry_i &&
            sq[sq_rdPtr[SQ_IDX-1:0]].rob_data.pc        == store_commit_pc_i)
            sq[sq_rdPtr[SQ_IDX-1:0]].committed <= 1'b1;

        // ── WB wakeup: pr1 → addr computation ────────────────────────
        for (int j = 0; j < SQ_SIZE; j++) begin
            if (sq_slot_occ[j] && !sq[j].pr1_ready && sq_pr1_wb_hit[j]) begin
                sq_pr1_a = sq_pr1_wb_val[j] + sq[j].imm;
                sq[j].pr1_ready  <= 1'b1;
                sq[j].pr1_val    <= sq_pr1_wb_val[j];
                sq[j].addr       <= sq_pr1_a;
                sq[j].addr_valid <= 1'b1;
                case (sq[j].funct3)
                    3'b000: sq[j].wmask <= 4'b0001 << sq_pr1_a[1:0];
                    3'b001: sq[j].wmask <= 4'b0011 << sq_pr1_a[1:0];
                    3'b010: sq[j].wmask <= 4'b1111;
                    default: sq[j].wmask <= '0;
                endcase
                // If pr2 already ready, compute wdata now
                if (sq[j].pr2_ready) begin
                    case (sq[j].funct3)
                        3'b000: sq[j].wdata <= 32'(sq[j].pr2_val[7:0])  << (8*sq_pr1_a[1:0]);
                        3'b001: sq[j].wdata <= 32'(sq[j].pr2_val[15:0]) << (16*sq_pr1_a[1]);
                        3'b010: sq[j].wdata <= sq[j].pr2_val;
                        default: sq[j].wdata <= '0;
                    endcase
                    sq[j].data_ready <= 1'b1;
                end
            end
        end

        // ── WB wakeup: pr2 → data computation ────────────────────────
        for (int j = 0; j < SQ_SIZE; j++) begin
            if (sq_slot_occ[j] && !sq[j].pr2_ready && sq_pr2_wb_hit[j]) begin
                sq[j].pr2_ready <= 1'b1;
                sq[j].pr2_val   <= sq_pr2_wb_val[j];
                // Also check for same-cycle pr1 wb hit (both arrive simultaneously)
                if (!sq[j].pr1_ready && sq_pr1_wb_hit[j]) begin
                    sq_pr2_av      = sq_pr1_wb_val[j] + sq[j].imm;
                    sq_pr2_addr_ok = 1'b1;
                end else begin
                    sq_pr2_av      = sq[j].addr;
                    sq_pr2_addr_ok = sq[j].addr_valid;
                end
                if (sq_pr2_addr_ok) begin
                    case (sq[j].funct3)
                        3'b000: sq[j].wdata <= 32'(sq_pr2_wb_val[j][7:0])  << (8*sq_pr2_av[1:0]);
                        3'b001: sq[j].wdata <= 32'(sq_pr2_wb_val[j][15:0]) << (16*sq_pr2_av[1]);
                        3'b010: sq[j].wdata <= sq_pr2_wb_val[j];
                        default: sq[j].wdata <= '0;
                    endcase
                    sq[j].data_ready <= 1'b1;
                end
            end
        end

        // ── Store dispatch ─────────────────────────────────────────────
        if (wr_en && !sq_full_o && !exec_mispredict && !spec_load_mispredict_o &&
            MIDCORE_data_i.dispatch_to == 3'd3 && ROB_data_i.valid) begin

            sq_disp_s = sq_wrPtr[SQ_IDX-1:0];
            sq[sq_disp_s]          <= '0;
            sq[sq_disp_s].rob_data <= ROB_data_i;
            sq[sq_disp_s].pr1      <= MIDCORE_data_i.pr1;
            sq[sq_disp_s].pr2      <= MIDCORE_data_i.pr2;
            sq[sq_disp_s].funct3   <= MIDCORE_data_i.funct3;
            sq[sq_disp_s].imm      <= MIDCORE_data_i.imm_o;

            // pr1 at dispatch
            if (!MIDCORE_data_i.pr1_busy || disp_pr1_wb_hit) begin
                sq_disp_a = disp_pr1_wb_val + MIDCORE_data_i.imm_o;
                sq[sq_disp_s].pr1_ready  <= 1'b1;
                sq[sq_disp_s].pr1_val    <= disp_pr1_wb_val;
                sq[sq_disp_s].addr       <= sq_disp_a;
                sq[sq_disp_s].addr_valid <= 1'b1;
                case (MIDCORE_data_i.funct3)
                    3'b000: sq[sq_disp_s].wmask <= 4'b0001 << sq_disp_a[1:0];
                    3'b001: sq[sq_disp_s].wmask <= 4'b0011 << sq_disp_a[1:0];
                    3'b010: sq[sq_disp_s].wmask <= 4'b1111;
                    default: sq[sq_disp_s].wmask <= '0;
                endcase
                // If pr2 also ready at dispatch, compute wdata immediately
                if (!MIDCORE_data_i.pr2_busy || disp_pr2_wb_hit) begin
                    sq[sq_disp_s].pr2_ready  <= 1'b1;
                    sq[sq_disp_s].pr2_val    <= disp_pr2_wb_val;
                    sq[sq_disp_s].data_ready <= 1'b1;
                    case (MIDCORE_data_i.funct3)
                        3'b000: sq[sq_disp_s].wdata <= 32'(disp_pr2_wb_val[7:0])  << (8*sq_disp_a[1:0]);
                        3'b001: sq[sq_disp_s].wdata <= 32'(disp_pr2_wb_val[15:0]) << (16*sq_disp_a[1]);
                        3'b010: sq[sq_disp_s].wdata <= disp_pr2_wb_val;
                        default: sq[sq_disp_s].wdata <= '0;
                    endcase
                end
            end else if (!MIDCORE_data_i.pr2_busy || disp_pr2_wb_hit) begin
                // pr2 ready, pr1 not yet
                sq[sq_disp_s].pr2_ready <= 1'b1;
                sq[sq_disp_s].pr2_val   <= disp_pr2_wb_val;
                // wdata cannot be computed yet (need addr); deferred to pr1 wb path
            end
        end
    end
end

// =====================================================================
// Output assignments
// =====================================================================

// ── Forwarding writeback ──────────────────────────────────────────────
// Forwarded loads bypass mem.sv entirely, so we fill the same rob_t fields
// that mem.sv would have filled (rs1_rdata, mem_addr, mem_rmask, mem_rdata,
// rd_wdata, done, etc.) directly here.
always_comb begin : fwd_outputs
    fwd_src_t         = '0;
    fwd_w_t           = '0;
    fwd_alo_t         = '0;
    wb_fwd_valid_o    = fwd_sel_valid;
    wb_fwd_pr_o       = '0;
    wb_fwd_rob_data_o = '0;
    wb_fwd_val_o      = '0;
    if (fwd_sel_valid) begin
        fwd_src_t = raw_fwd_src[fwd_sel_idx];
        fwd_w_t   = sq[fwd_src_t].wdata;
        fwd_alo_t = lq[fwd_sel_idx].addr[1:0];

        // Compute sign/zero-extended rd value first; used for rd_wdata below.
        case (lq[fwd_sel_idx].funct3)
            3'b000: wb_fwd_val_o = {{24{fwd_w_t[7  + 8 *fwd_alo_t]}}, fwd_w_t[8 *fwd_alo_t +: 8 ]};  // lb
            3'b100: wb_fwd_val_o = {24'b0,                             fwd_w_t[8 *fwd_alo_t +: 8 ]};  // lbu
            3'b001: wb_fwd_val_o = {{16{fwd_w_t[15 + 16*fwd_alo_t[1]]}}, fwd_w_t[16*fwd_alo_t[1] +: 16]}; // lh
            3'b101: wb_fwd_val_o = {16'b0,                             fwd_w_t[16*fwd_alo_t[1] +: 16]}; // lhu
            3'b010: wb_fwd_val_o = fwd_w_t;                                                             // lw
            default: wb_fwd_val_o = '0;
        endcase

        // Fill ROB entry — mirrors mem.sv's ROB_data_o assignments.
        wb_fwd_pr_o                           = lq[fwd_sel_idx].rob_data.new_p;
        wb_fwd_rob_data_o                     = lq[fwd_sel_idx].rob_data;
        wb_fwd_rob_data_o.rs1_rdata           = lq[fwd_sel_idx].pr1_val;
        wb_fwd_rob_data_o.rs2_rdata           = '0;          // loads have no store-data operand
        wb_fwd_rob_data_o.mem_addr            = lq[fwd_sel_idx].addr;
        wb_fwd_rob_data_o.mem_rmask           = lq[fwd_sel_idx].rmask;
        wb_fwd_rob_data_o.mem_wmask           = '0;
        wb_fwd_rob_data_o.mem_rdata           = fwd_w_t;     // store word = what dmem would have returned
        wb_fwd_rob_data_o.mem_wdata           = '0;
        wb_fwd_rob_data_o.mispredict          = '0;          // loads are never branches
        wb_fwd_rob_data_o.target_pc           = lq[fwd_sel_idx].rob_data.pc + 32'd4;
        wb_fwd_rob_data_o.branch_actual_taken = '0;
        wb_fwd_rob_data_o.rd_wdata            = wb_fwd_val_o;
        wb_fwd_rob_data_o.done                = 1'b1;
    end
end

// ── Load issue ────────────────────────────────────────────────────────
// rs1_rdata pre-filled here; mem.sv has no access to pr1_val.
always_comb begin : load_issue_outputs
    load_issue_valid_o    = issue_sel_valid;
    load_issue_addr_o     = '0;
    load_issue_rmask_o    = '0;
    load_issue_new_p_o    = '0;
    load_issue_rob_data_o = '0;
    load_issue_funct3_o   = '0;
    if (issue_sel_valid) begin
        load_issue_addr_o               = lq[issue_sel_idx].addr;
        load_issue_rmask_o              = lq[issue_sel_idx].rmask;
        load_issue_new_p_o              = lq[issue_sel_idx].rob_data.new_p;
        load_issue_rob_data_o           = lq[issue_sel_idx].rob_data;
        load_issue_rob_data_o.rs1_rdata = lq[issue_sel_idx].pr1_val;
        load_issue_funct3_o             = lq[issue_sel_idx].funct3;
    end
end

// ── Store issue (committed SQ head) ──────────────────────────────────
always_comb begin : store_issue_outputs
    store_issue_valid_o    = (!sq_empty) &&
                              sq[sq_rdPtr[SQ_IDX-1:0]].committed;
    store_issue_addr_o     = sq[sq_rdPtr[SQ_IDX-1:0]].addr;
    store_issue_wmask_o    = sq[sq_rdPtr[SQ_IDX-1:0]].wmask;
    store_issue_wdata_o    = sq[sq_rdPtr[SQ_IDX-1:0]].wdata;
    store_issue_rob_data_o = sq[sq_rdPtr[SQ_IDX-1:0]].rob_data;
end

// ── Store ROB done update ─────────────────────────────────────────────
// Fires when SQ head has addr and data ready (regardless of committed).
// ROB uses this to mark the entry done so it can commit the store.
// ROB guards updates with !mem[entry].done so asserting every cycle is safe.
always_comb begin : store_wb_outputs
    swb_h = sq_rdPtr[SQ_IDX-1:0];
    store_wb_valid_o = (!sq_empty) && sq[swb_h].addr_valid && sq[swb_h].data_ready && !sq[swb_h].rob_wb_sent;
    store_wb_rob_data_o = '0;
    if (store_wb_valid_o) begin
        store_wb_rob_data_o                     = sq[swb_h].rob_data;
        store_wb_rob_data_o.rs1_rdata           = sq[swb_h].pr1_val;
        store_wb_rob_data_o.rs2_rdata           = sq[swb_h].pr2_val;
        store_wb_rob_data_o.mem_addr            = sq[swb_h].addr;
        store_wb_rob_data_o.mem_wmask           = sq[swb_h].wmask;
        store_wb_rob_data_o.mem_wdata           = sq[swb_h].wdata;
        store_wb_rob_data_o.mem_rmask           = '0;
        store_wb_rob_data_o.mem_rdata           = '0;
        store_wb_rob_data_o.mispredict          = '0;
        store_wb_rob_data_o.target_pc           = sq[swb_h].rob_data.pc + 32'd4;
        store_wb_rob_data_o.branch_actual_taken = '0;
        store_wb_rob_data_o.rd_wdata            = '0;   // stores have no dest register
        store_wb_rob_data_o.done                = 1'b1;
    end
end

// =====================================================================
// Performance monitor signals (verilator public)
// =====================================================================
logic mon_load_issued_safe       /*verilator public*/;
logic mon_load_issued_spec       /*verilator public*/;
logic mon_fwd_fire               /*verilator public*/;
logic mon_spec_mispredict        /*verilator public*/;
logic mon_spec_mispredict_fwd    /*verilator public*/;  // victim was forwarded
logic mon_spec_mispredict_spec   /*verilator public*/;  // victim was speculative

assign mon_load_issued_safe = issue_sel_valid && (raw_state_next[issue_sel_idx] == LS_SAFE);
assign mon_load_issued_spec = issue_sel_valid && (raw_state_next[issue_sel_idx] == LS_SPECULATIVE);
assign mon_fwd_fire         = wb_fwd_valid_o;
assign mon_spec_mispredict  = spec_load_mispredict_o;

always_comb begin : mon_mispredict_attr
    mon_spec_mispredict_fwd  = 1'b0;
    mon_spec_mispredict_spec = 1'b0;
    if (spec_load_mispredict_o) begin
        for (int i = 0; i < LQ_SIZE; i++) begin
            if (lq[i].valid &&
                lq[i].rob_data.rob_entry == spec_load_rob_idx_o) begin
                mon_spec_mispredict_fwd  = lq[i].was_forwarded;
                mon_spec_mispredict_spec = !lq[i].was_forwarded;
            end
        end
    end
end

endmodule
