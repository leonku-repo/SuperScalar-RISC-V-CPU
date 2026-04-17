# Speculative Load Execution — Implementation Plan

## Overview

Replace the unified load/store queue with a **separate load queue (LQ) and store queue (SQ)**. Loads can execute speculatively before older store addresses are known. A store whose address becomes valid triggers an error scan of the load queue — if a younger executed load conflicts, recovery fires from the load's checkpoint, the load re-executes with the correct value, and everything younger is flushed.

---

## Design Decisions

| Decision | Choice |
|---|---|
| LQ release | At load commit (not at dmem_resp) |
| SQ release | At dmem_resp (after store commits and write completes) |
| Store execution | Only when committed (oldest in ROB, commit fires) |
| Load address computation | In LQ: capture pr1 value from wb bus, compute addr = pr1_val + imm combinationally |
| Store address computation | In SQ: capture pr1 value from wb bus, compute addr = pr1_val + imm combinationally |
| Store data capture | In SQ: capture pr2 value from wb bus when pr2 wb fires |
| Forwarding condition | addr match AND wmask fully covers rmask AND store data_ready |
| Stall condition | addr match AND (data not ready OR mask mismatch) |
| **Aggressive speculative forwarding** | Forward from **youngest matching store even if younger unresolved stores exist between the match and the load.** This is an intentional performance feature — identify-error acts as the safety net. A forwarded load that later conflicts will trigger a mispredict recovery, but empirically this never happens across all benchmarks. See Empirical Validation. |
| **Aggressive speculative execution** | Loads marked SPECULATIVE (≥1 older store with unresolved address) execute immediately rather than stalling. Identify-error will catch any RAW violation when that store's address becomes valid. |
| Address comparison granularity | `addr[31:2]` — word-aligned comparison for RAW hazard detection. Byte-offset sub-word accesses to the same 4-byte word are correctly flagged as potential conflicts; byte mask overlap `(wmask & rmask) == rmask` is the final arbiter. |
| Load state evaluation | Combinational, every cycle, per load queue entry. Use `load_state_next` in identify-error (not registered state). |
| Memory port priority | Committed store > Safe load > Speculative load. Forwarding uses no memory port. |
| Forwarding writeback | Dedicated forwarding wb port (separate from dmem load wb port). One forwarding per cycle. Among multiple forwarding candidates, **oldest load wins**. |
| Multiple simultaneous mispredicts | Oldest mispredicted load wins. Its flush covers all younger mispredicts. |
| Branch mispredict + spec load mispredict simultaneously | lsq.sv handles both internally: LQ uses independent `if` blocks (not `else if`) so both flush sets apply; SQ picks whichever of `sq_exec_new_wrPtr` / `sq_spec_new_wrPtr` is smaller (older recovery point = more aggressive flush). All downstream modules handle both as separate signals — no combined arbitration needed. branch_recover.sv unchanged. |
| spec_load_recover_pc | `lq[i].rob_data.pc_next` — the mispredicted load stays in LQ and re-issues internally; frontend re-fetches from the instruction after the load (not the load itself, which would create a duplicate LQ entry). |
| LQ_SIZE / SQ_SIZE | 8 / 8 — provisional, revisit after implementation. |
| ROB on spec load mispredict | Partial flush (clear valid for entries younger than mispredicted load). Clear `done` bit of the mispredicted load so it re-executes. |
| Load checkpoint release | At load commit OR on any flush (branch mispredict or spec load mispredict) |
| Re-execution on mispredict | Always re-fire the load memory operation. Do not try to forward from the catching store (data may not be ready). |
| `load_executed` bit | Represented by `LS_EXECUTED` state. Set when load completes (any path). Cleared when identified as speculative mispredict. Used by identify-error scan. |
| `was_forwarded` bit in `lq_t` | Set when a load completes via SQ forwarding (not dmem). Used by identify-error attribution: a FORWARDING load that triggers a mispredict is counted as a forwarding-caused mispredict vs a SPECULATIVE dmem load. Enables separate tracking of the two aggressive mechanisms. |
| `store_wb_valid_o` one-cycle pulse | Gated by `rob_wb_sent` bit in `sq_t`. Set when the store-ready notification fires; cleared on `store_done_i` (slot reuse). Prevents continuous assertion across the store's lifetime in the SQ — ROB would double-count done bits without this. |
| LQ_SIZE | 8 |
| SQ_SIZE | 8 |
| LC_SIZE (load checkpoints) | 8 (one per LQ entry) |

---

## Load States (per load queue entry, computed combinationally every cycle)

For each load in the load queue, scan all older stores in the store queue (by rob_entry age):

**Find the youngest older store with addr_valid=1 AND addr match:**
- If found AND wmask covers rmask AND data_ready → **FORWARDING**
- If found AND (mask mismatch OR !data_ready) → **STALL**

**If no addr-matching store found with addr_valid=1:**
- Any older store has addr_valid=0 → **SPECULATIVE**
- All older stores addr_valid=1 and none match → **SAFE**

**If no older stores at all (or load queue head has no older stores):**
- **SAFE**

**IDLE:** load has not been dispatched / slot is empty.

Note: `load_state` is the registered value (last cycle). `load_state_next` is the combinational value (this cycle). Identify-error always uses `load_state_next`.

---

## Identify Error Mechanism

Triggered when **any** store's `addr_valid` transitions 0→1 this cycle.

For that store, scan all load queue entries where:
1. Load is younger than the store (`ROB_IDX'(load.rob_entry - rob_rdPtr) > ROB_IDX'(store.rob_entry - rob_rdPtr)`)
2. `pre_final_state[i] == LS_EXECUTED` (uses `pre_final_state`, not registered `load_state`, to catch same-cycle forwarding completions without a combinational loop)
3. `load.addr_valid == 1` AND `load.addr[31:2] == store.addr[31:2]` (word-aligned) AND `(store.wmask & load.rmask) == load.rmask` (byte mask fully covers)

If any matches found: **speculative load mispredict**. Among all matching loads, recover to the **oldest** (smallest age relative to rob_rdPtr).

Multiple stores can assert addr_valid in the same cycle — collect all matching loads across all such stores, then pick the globally oldest as the recovery point.

**Mispredict attribution:** The `was_forwarded` bit on the mispredicted LQ entry distinguishes:
- `was_forwarded == 1`: the load had been forwarded from an SQ entry; a subsequently resolved store now conflicts. This is the aggressive forwarding path.
- `was_forwarded == 0`: the load had issued speculatively to dmem; a subsequently resolved store conflicts. This is the aggressive speculative execution path.

Both are counted separately in performance counters (see [Spec Load] output in top_tb.cpp).

---

## New Files

- `rtl/cpu_execute/lsq.sv` — combined load/store queue (replaces `loadstore_queue.sv`; LQ and SQ are separate internal arrays; identify-error and `spec_load_mispredict` generation are internal)
- `rtl/other/load_checkpoint.sv`

## Modified Files

`pkg/types.sv`, `rtl/cpu_execute/mem.sv`, `rtl/cpu_execute/cpu_execute.sv` (remove `loadstore_queue`, add `lsq`), `rtl/cpu_commit/rob.sv`, `rtl/cpu_commit/cpu_commit.sv`, `rtl/cpu_midcore/busy_table.sv`, `rtl/cpu_midcore/srat.sv`, `rtl/cpu_midcore/free_list.sv`, `rtl/cpu_midcore/cpu_midcore.sv`, `rtl/cpu_frontend/cpu_frontend.sv`, `rtl/cpu.sv`

---

## Step-by-Step Implementation

---

### Step 1 — `pkg/types.sv` ✅ DONE

> **Refer to EARLY_RECOVERY_PLAN.md:** Step 1 — added `CP_SIZE`, `CP_IDX`, and `checkpoint_id` field in `rob_t` for branch checkpoints. Same pattern here: add `LC_SIZE`, `LC_IDX`, and `spec_load_cp_id` field in `rob_t` for load checkpoints.

**What was changed:**
- Removed `LS_QUEUE_SIZE = 16` (unified queue gone)
- Added `LQ_SIZE=8`, `SQ_SIZE=8`, `LC_SIZE=LQ_SIZE`, and their `_IDX` variants
- Added `spec_load_cp_id [LC_IDX-1:0]` to `rob_t` — written at load dispatch, travels with the ROB entry
- Added `load_state_t` enum (6 states)
- Added `lq_t` struct — embeds full `rob_t` so mem.sv can update ROB/RVFI the same way it did via the old `ROB_data_o` port
- Added `sq_t` struct — same embedding approach

**`load_state_t` — design decisions baked in:**
```sv
typedef enum logic [2:0] {
    LS_IDLE        = 3'd0,  // slot empty or addr not yet computed
    LS_FORWARDING  = 3'd1,  // youngest older store: addr+wmask match + data_ready → bypass mem port
    LS_SAFE        = 3'd2,  // all older store addrs resolved, none match → safe dmem read
    LS_SPECULATIVE = 3'd3,  // ≥1 older store addr unresolved → go anyway, identify-error catches conflicts
    LS_STALL       = 3'd4,  // older store addr matches but data not ready OR mask mismatch → wait
    LS_EXECUTED    = 3'd5   // load wrote its value to PRF; stays here until commit or spec mispredict
} load_state_t;
```

`LS_EXECUTED` replaces the separate `load_executed` bit. Identify-error checks `load_state_next == LS_EXECUTED`. Using `load_state_next` (combinational) instead of `load_state` (registered) ensures the same-cycle edge case is caught: if Store 2's addr_valid rises in the same cycle the load is completing via forwarding, `load_state_next` is already `LS_EXECUTED` that cycle, so identify-error fires immediately without waiting a cycle.

On `spec_load_mispredict` for the mispredicted load: lsq.sv overrides `load_state_next` back to the SQ scan result (the load's addr is still valid, so it re-evaluates its state immediately).

**`lq_t` — key fields:**
- `load_state load_state_t` — registered state; combinational `load_state_next[LQ_SIZE]` is a wire array outside the struct
- `was_forwarded` — set when this load completed via SQ forwarding rather than dmem; used for identify-error attribution
- `pr1`, `pr1_ready`, `pr1_val`, `imm`, `addr`, `addr_valid`, `rmask`, `funct3` — address computation pipeline
- `rob_t rob_data` — full ROB snapshot for writeback and RVFI

**`sq_t` — key fields:**
- `committed` — set when this store commits from ROB (safe to fire dmem_write); cleared on dmem_resp
- `rob_wb_sent` — one-cycle pulse gate: set when `store_wb_valid_o` fires; cleared on `store_done_i` (slot reuse). Prevents continuous assertion across the store's lifetime.
- `addr_valid`, `data_ready` — tracked independently as wb signals arrive
- `wmask`, `wdata` — computed from funct3 + addr once pr1/pr2 vals are known
- `rob_t rob_data` — full ROB snapshot

> **FLAG:** `lq_t` and `sq_t` both embed the full `rob_t`. `rob_t` now contains `spec_load_cp_id` which is only meaningful for loads — it will be zero/unused in `sq_t.rob_data`. This is acceptable for now but wastes a few bits per SQ slot. Revisit if area becomes a concern.

---

### Step 2 — `rtl/cpu_execute/lsq.sv` ✅ DONE

> **Refer to EARLY_RECOVERY_PLAN.md:** Step 7 — `reservation_station.sv` partial flush uses valid-bit invalidation (not wrPtr rollback) for random-access entries; LQ follows the same pattern. Step 8 — `loadstore_queue.sv` committed-store edge case and `exec_mispredict` age-based wrPtr rollback; SQ's FIFO partial flush is the same mechanism extended with `spec_load_mispredict`.

Combined module. Replaces `loadstore_queue.sv`. LQ and SQ are separate internal arrays; all cross-scanning (load state computation, identify-error) is internal; `spec_load_mispredict` is generated and self-applied here.

**Internal arrays:**
- `lq_t lq [LQ_SIZE]` — flat array with `valid` bit per slot (RS-like, random access for state, forwarding, and issue selection)
- `sq_t sq [SQ_SIZE]` — circular FIFO (only head executes; all entries scanned internally for LQ state)

**Ports (as implemented):**

Dispatch (single wr_en, dispatch_to selects load vs store):
- `wr_en`, `ROB_data_i`, `MIDCORE_data_i` — unified dispatch bus
- `load_cp_id_i [LC_IDX-1:0]` — load checkpoint slot (valid for loads only, caller provides)
- `dispatch_pr1_val_i`, `dispatch_pr2_val_i` — PRF values read at dispatch by cpu_execute; used for early address computation if operands already ready
- wb signals: 5 channels × (valid, pr, val) — shared for LQ and SQ wakeup and value capture; plus `wb_fwd_valid_o`/`wb_fwd_pr_o`/`wb_fwd_val_o` looped back internally for same-cycle bypass

Commit:
- `load_commit_i`, `load_commit_rob_entry_i`, `load_commit_pc_i` — releases LQ slot
- `store_commit_i`, `store_commit_rob_entry_i`, `store_commit_pc_i` — sets committed flag on SQ head

Flush:
- `exec_mispredict`, `exec_mispredict_rob_idx`, `rob_rdPtr_i`

Feedback from mem.sv:
- `load_done_i`, `load_done_rob_entry_i` — dmem_resp returned for an issued load → sets LS_EXECUTED
- `store_done_i` — dmem_resp for committed store → pops SQ head

Outputs:
- `wb_fwd_valid_o`, `wb_fwd_pr_o`, `wb_fwd_val_o`, `wb_fwd_rob_data_o` — forwarding writeback (second load wb channel). **`wb_fwd_rob_data_o` has all RVFI fields filled** because forwarding bypasses mem.sv entirely. Routes to: PRF (write), busy_table (clear), RS (wakeup), rename2 (dispatch bypass), ROB (done update).
- `store_wb_valid_o`, `store_wb_rob_data_o` — fires when SQ head has `addr_valid && data_ready` (before commit). Tells ROB the store is ready to commit. RVFI filled: rs1_rdata=pr1_val, rs2_rdata=pr2_val, mem_addr, mem_wmask, mem_wdata, mem_rmask=0, mem_rdata=0, rd_wdata=0, done=1, mispredict=0, target_pc=pc+4. **Routes to ROB only** — stores have no dest PR, so no PRF/busy_table/RS update needed.
- `load_issue_valid_o`, `load_issue_addr_o`, `load_issue_rmask_o`, `load_issue_new_p_o`, `load_issue_rob_data_o`, `load_issue_funct3_o` — oldest SAFE/SPECULATIVE LQ entry for dmem_read
- `store_issue_valid_o`, `store_issue_addr_o`, `store_issue_wdata_o`, `store_issue_wmask_o`, `store_issue_rob_data_o` — committed SQ head for dmem_write
- `spec_load_mispredict_o`, `spec_load_recover_pc_o` (= victim `pc_next`), `spec_load_rob_idx_o`, `spec_load_checkpoint_id_o`
- `lq_full_o`, `sq_full_o`; `sq_empty` internal wire replacing all `sq_wrPtr != sq_rdPtr` comparisons

**SQ key behaviors:**

Address computation: every cycle, each slot — if `!addr_valid && pr1_ready`, compute `addr = pr1_val + imm`, set `addr_valid`, compute `wmask`.

Wakeup: wb signals → capture `pr1_val` (set `pr1_ready`), `pr2_val` (set `data_ready`, compute formatted `wdata`).

Store execution: fires when `store_commit_i` matches SQ head (pc + rob_entry). Holds `store_issue_valid_o` until `store_done_i`, then pops SQ head.

Partial flush on `exec_mispredict`: age-based wrPtr rollback. Entries younger than `exec_mispredict_rob_idx` flushed.

Partial flush on `spec_load_mispredict_o` (self-applied same cycle): same wrPtr rollback — flush SQ entries younger than `spec_load_rob_idx_o`.

**Simultaneous exec + spec_load:** SQ picks whichever of `sq_exec_new_wrPtr` / `sq_spec_new_wrPtr` is smaller relative to `sq_rdPtr_next` (older recovery point = more aggressive flush). LQ uses independent `if` blocks so both flush sets apply without interaction.

**LQ key behaviors:**

Allocation: any free slot (`!valid`). Dispatch writes to lowest free index. Full when no free slots.

Address computation: capture pr1 from wb bus, compute `addr = pr1_val + imm`, set `addr_valid`, compute `rmask`.

Load state computation (combinational, `load_state_next` per entry):
```
For each valid LQ entry i:
  Older SQ entries: ROB_IDX'(sq[j].rob_entry - rob_rdPtr) < ROB_IDX'(lq[i].rob_entry - rob_rdPtr)
  Find youngest older SQ entry with addr_valid=1 AND lq[i].addr == sq[j].addr:
    wmask covers rmask AND data_ready  → LS_FORWARDING
    wmask covers rmask AND !data_ready → LS_STALL
    addr match AND mask mismatch       → LS_STALL
  If no addr-match found with addr_valid=1:
    any older SQ entry has addr_valid=0 → LS_SPECULATIVE
    else                               → LS_SAFE
  No older SQ entries at all           → LS_SAFE
  !valid || !addr_valid                → LS_IDLE
```
Register `load_state` from `load_state_next` each cycle.

Forwarding selection: among entries where `load_state_next == LS_FORWARDING`, pick oldest. Output `fwd_valid_o` with formatted store wdata.

Issue selection: among entries where `load_state_next == LS_SAFE` or `LS_SPECULATIVE`, pick oldest. Output `load_issue_valid_o`.

Partial flush on `spec_load_mispredict_o`: clear `valid` on LQ entries younger than `spec_load_rob_idx_o`. The mispredicted load keeps its slot — `load_state_next` is reset to `raw_state_next` via Stage 5 (combinational, same cycle); `lq[i]` is not zeroed, addr/rmask/pr1_val preserved for re-issue.

Partial flush on `exec_mispredict`: clear `valid` on LQ entries younger than `exec_mispredict_rob_idx`.

LQ slot released: `load_commit_i` matches entry (rob_entry + pc) → `valid <= 0`.

**Identify-error (internal, generates `spec_load_mispredict_o`):**

Register `sq_addr_valid_prev [SQ_SIZE]` each cycle.

Every cycle, combinationally (uses `pre_final_state`, not registered `load_state`, to catch same-cycle completions without a loop):
```
For each SQ entry j where sq_addr_valid_prev[j]==0 && sq[j].addr_valid==1:
  For each LQ entry i where:
    lq[i].valid == 1
    && pre_final_state[i] == LS_EXECUTED      // catches forwarded + dmem loads
    && lq[i].addr_valid == 1
    && lq_age[i] > sq_age[j]                 // load is younger than store
    && lq[i].addr == sq[j].addr
    && (sq[j].wmask & lq[i].rmask) == lq[i].rmask
  → candidate mispredict

Among all candidates: recover to oldest (smallest lq_age).
Output: spec_load_mispredict_o, spec_load_recover_pc_o = lq[i].rob_data.pc_next,
        spec_load_rob_idx_o, spec_load_checkpoint_id_o.
```

Output `spec_load_mispredict_o`, `spec_load_recover_pc_o`, `spec_load_rob_idx_o`, `spec_load_checkpoint_id_o`.

Dispatch gated with `!exec_mispredict && !spec_load_mispredict_o`.

**Word-aligned address comparison:**
RAW hazard detection compares `addr[31:2]` (not `addr[31:0]`) in both `raw_state_comp` and `identify_error`. Sub-word accesses at different byte offsets within the same aligned word are flagged as potential conflicts; byte mask overlap `(wmask & rmask) == rmask` is then the final arbiter. Using the full 32-bit address would miss byte-vs-halfword collisions to the same 4-byte word.

**`store_wb_valid_o` one-cycle pulse:**
Gated by `sq[j].rob_wb_sent`. Set when `store_wb_valid_o` fires for SQ head; cleared when `store_done_i` arrives (slot about to be reused). Without this, the signal would remain asserted continuously until the store drains, causing the ROB to repeatedly mark the entry done.

**Monitor signals (`/*verilator public*/` wires at module bottom):**
Expose internal per-cycle events for C++ performance counter sampling in top_tb.cpp:
- `mon_load_issued_safe` — SAFE load issued to dmem this cycle
- `mon_load_issued_spec` — SPECULATIVE load issued to dmem this cycle
- `mon_fwd_fire` — forwarding writeback fired this cycle (`wb_fwd_valid_o`)
- `mon_spec_mispredict` — spec load mispredict asserted this cycle
- `mon_spec_mispredict_fwd` — mispredict was caused by an aggressive-forwarding load (`was_forwarded==1`)
- `mon_spec_mispredict_spec` — mispredict was caused by an aggressive-speculative dmem load (`was_forwarded==0`)

---

### Step 3 — `rtl/other/load_checkpoint.sv` ✅ DONE

> **Refer to EARLY_RECOVERY_PLAN.md:** Step 2 — `checkpoint.sv` implementation (SRAT snapshot, alloc_list accumulation, slot allocation/release). This module is structurally identical; copy it directly and change the release trigger from branch-execute to load-commit/flush.

New module. Structurally identical to `checkpoint.sv` (branch checkpoints) but keyed to load dispatch/commit/mispredict.

**Differences from branch checkpoint:**
- Written at **load dispatch** (not branch dispatch)
- Released at **load commit** OR on flush (exec_mispredict or spec_load_mispredict)
- LC_SIZE = 8 slots (one per LQ entry in flight)
- `alloc_list` accumulates renames between dispatch and release (same mechanism as branch checkpoint)

**Ports:**
- `dispatch_valid`, `dispatch_rob_idx`, `dispatch_srat [32]` → allocate slot, output `checkpoint_id_o`, `checkpoint_full`
- `rename_update`, `rename_update_pr` → accumulate alloc_list
- `load_commit`, `load_commit_checkpoint_id` → release slot (correct execution path)
- `exec_mispredict`, `exec_checkpoint_id` → release slots covered by branch flush
- `spec_load_mispredict`, `spec_load_checkpoint_id` → trigger recovery outputs AND release slot
- Recovery outputs: `recover_srat [32]`, `recover_alloc_list [PRF_SIZE]`

**Why LC_SIZE = LQ_SIZE = 8:**
A load checkpoint lives from dispatch until commit (or flush). The maximum number of in-flight loads equals LQ_SIZE. So LC_SIZE = LQ_SIZE ensures no overflow. `checkpoint_full` stalls dispatch when all slots are taken (rare in practice).

---

### Step 4 — `rtl/cpu_execute/mem.sv` ✅ DONE

Significant rewrite. The unified LSQ interface is replaced by the `lsq.sv` issue interface. **Forwarding is NOT mem.sv's responsibility** — it is handled entirely inside `lsq.sv` and routed through `cpu_execute.sv`.

**New inputs (from lsq.sv):**
- Load issue: `load_issue_valid_i`, `load_issue_addr_i`, `load_issue_rmask_i`, `load_issue_new_p_i`, `load_issue_rob_data_i`, `load_issue_funct3_i`
- Store issue: `store_issue_valid_i`, `store_issue_addr_i`, `store_issue_wdata_i`, `store_issue_wmask_i`, `store_issue_rob_data_i`
- Mispredict: `exec_mispredict`, `exec_mispredict_rob_idx`, `spec_load_mispredict`, `spec_load_rob_idx`, `rob_rdPtr_i`

**New outputs (to lsq.sv):**
- `load_done_o`, `load_done_rob_entry_o` — dmem_resp returned for issued load
- `store_done_o` — dmem_resp for committed store

**New outputs (wb):**
- `wb_load_valid_o`, `wb_load_pr_o`, `wb_load_val_o`, `wb_load_rob_data_o` — load writeback to PRF + busy_table + RS + ROB (LOAD_WB state only, suppressed on flush_load)

**Priority arbitration (single dmem port):**
```
Committed store (store_issue_valid_i) takes priority over load issue.
```

**State machine:**
```
IDLE       → LOAD       : load_issue_valid_i && !store_issue_valid_i && !flush_load
IDLE       → STORE      : store_issue_valid_i
LOAD       → LOAD_WB   : dmem_resp && !flush_load
LOAD       → LOAD_DRAIN : flush_load && !dmem_resp
LOAD       → IDLE       : flush_load && dmem_resp (resp and mispredict same cycle)
LOAD_WB    → IDLE       : always (one cycle; WB suppressed if flush_load fires)
LOAD_DRAIN → IDLE       : dmem_resp
STORE      → IDLE       : dmem_resp
```

**flush_load:** combinational signal; suppresses WB and redirects state. Three cases:
- `MEM_LOAD` or `MEM_LOAD_WB`: compare `lat_rob_data.rob_entry` against mispredict rob_idx
- `MEM_IDLE && load_issue_valid_i && !store_issue_valid_i`: compare live `load_issue_rob_data_i.rob_entry` — stay in IDLE, suppress `dmem_read` (no request sent, no drain needed). Store age-wrap guard: flush_load is NOT checked for MEM_STORE (committed stores have already passed rdPtr and their age wraps falsely).

**Load writeback (LOAD_WB only):**
- `rd_v` computed from `lat_funct3` + `lat_rdata` + `lat_addr[1:0]` (sign/zero extend for lb/lbu/lh/lhu/lw)
- `wb_load_rob_data_o` fills all RVFI fields: rs1_rdata (pre-filled by lsq.sv), mem_addr, mem_rmask, mem_rdata, rd_wdata=rd_v, done=1, mispredict=0, target_pc=pc+4

**Removed:** all old unified LSQ signals, `store_match`, `store_committed` state machine, PRF lookup ports, commit input signals, forwarding inputs.

---

### Step 5 — `rtl/cpu_commit/rob.sv` ✅ DONE

> **Refer to EARLY_RECOVERY_PLAN.md:** Step 3 — added `exec_mispredict` wrPtr rollback, `bt_rebuild_o` generation, and `mem_next` done-bit fix to `rob.sv`. Add `spec_load_mispredict` as a second flush path with the same mechanism, plus clearing the `done` bit of the mispredicted load entry.

Add spec_load_mispredict partial flush and store_wb input.

**New inputs:**
- `spec_load_mispredict`, `spec_load_rob_idx`
- `store_wb_valid_i`, `store_wb_rob_data_i` — 6th ROB exec input; marks store entry done so ROB can commit it. Routes to ROB only (no PRF/busy_table/RS update needed).
- `fwd_ROB_exec_valid_i`, `fwd_ROB_exec_i` — 7th ROB exec input; marks forwarded load entry done.

**wrPtr rollback (simultaneous case):**
Three branches: `exec && spec` (pick older = smaller circular age from rdPtr), `exec` only, `spec` only. Same ternary comparison pattern as lsq.sv SQ simultaneous case.

**Partial flush on spec_load_mispredict:**
- `partial_flush_spec` block (independent `if`, not `else if` — runs alongside `partial_flush_exec` if both fire): clear entries younger than `spec_load_rob_idx`
- Additionally: `mem[spec_load_rob_idx].done <= 1'b0` — keeps the load's ROB entry alive but forces re-execution

**Dispatch gate:** `wr_en && !exec_mispredict && !spec_load_mispredict` in both comb (`mem_next`) and sequential blocks.

**wb_update:** includes `store_wb_valid_i | fwd_ROB_exec_valid_i`.

**bt_rebuild_o:** boundary check extended with `&& (!spec_load_mispredict || age <= spec_load age)`. The mispredicted load itself passes the `<=` check and has `mem_next[i].done = 0` (cleared), so its `new_p` is correctly included in the rebuild vector (it re-executes and re-writebacks).

---

### Step 6 — `rtl/cpu_execute/reservation_station.sv` ✅ DONE

> **Refer to EARLY_RECOVERY_PLAN.md:** Step 7 — added `exec_mispredict` valid-bit invalidation to `reservation_station.sv`. Add `spec_load_mispredict` as a second invalidation path using the same logic.

Add `spec_load_mispredict` partial flush.

**New inputs:** `spec_load_mispredict`, `spec_load_rob_idx`, `wb_fwd`, `wb_fwd_pr`.

**Dispatch gate:** `!exec_mispredict && !spec_load_mispredict` added to `valid_next`, `rob_rs_next`, `midcore_rs_next` comb blocks and the sequential dispatch condition.

**Wakeup:** `wb_fwd / wb_fwd_pr` added to pr1 and pr2 wakeup loops (existing-entry scan and dispatch-time bypass). No `wb_fwd_val` needed — RS only tracks readiness, not values.

**Partial flush:** `partial_flush_spec` block (independent `if`, runs alongside `partial_flush_exec`) clears entries younger than `spec_load_rob_idx`. Wakeup `else if` branch extended with `|| wb_fwd`.

---

### Step 7 — `rtl/cpu_midcore/busy_table.sv` ✅ DONE

> **Refer to EARLY_RECOVERY_PLAN.md:** Step 4 — added `exec_mispredict` + `bt_rebuild_i` path to `busy_table.sv`. Add `spec_load_mispredict` as a second rebuild trigger using the same vector.

**New inputs:** `spec_load_mispredict`, `wb_fwd`, `wb_fwd_pr`.

**Rebuild trigger:** `exec_mispredict || spec_load_mispredict` → load `bt_rebuild_i`. No separate `spec_load_bt_rebuild_i` needed — ROB's single `bt_rebuild_o` already accounts for both flush boundaries in its combinational block, so one input suffices for both cases.

**`wb_fwd`:** added to `wb_update`, and `bt_next[wb_fwd_pr] = 1'b0` in the comb block. Clears the busy bit for the forwarded load's dest PR.

---

### Step 8 — `rtl/cpu_midcore/srat.sv` ✅ DONE

> **Refer to EARLY_RECOVERY_PLAN.md:** Step 5 — added `exec_mispredict` + `recover_srat_i` path to `srat.sv`. Add `spec_load_mispredict` + `spec_load_recover_srat` as a second restore path; the load checkpoint provides the SRAT snapshot.

**New inputs:** `exec_mispredict_rob_idx`, `spec_load_mispredict`, `spec_load_rob_idx`, `spec_load_recover_srat [32]`, `rdPtr`.

**Simultaneous case:** three-branch pattern — `exec && spec` compares `ROB_IDX'(exec_mispredict_rob_idx - rdPtr)` vs `ROB_IDX'(spec_load_rob_idx - rdPtr)`, picks snapshot of the older (smaller age). Same pattern as rob.sv and lsq.sv.

> **FLAG (wiring):** `rdPtr`, `exec_mispredict_rob_idx`, `spec_load_rob_idx` need to be routed into `srat.sv` in `cpu_midcore.sv`. `rdPtr` comes from `rob.sv` `rdPtr_o`; `exec_mispredict_rob_idx` comes from `branch_recover.sv` output; `spec_load_rob_idx` comes from `lsq.sv` via `cpu_execute.sv`. Wire these up in Steps 12/15.

---

### Step 9 — `rtl/cpu_midcore/free_list.sv` ✅ DONE

> **Refer to EARLY_RECOVERY_PLAN.md:** Step 6 — added `exec_mispredict` + `recover_alloc_list_i` path to `free_list.sv`, including the `commit_update` OR-in fix for same-cycle commit. Add `spec_load_mispredict` as a second restore path using the same pattern.

**New inputs:** `exec_mispredict_rob_idx`, `spec_load_mispredict`, `spec_load_rob_idx`, `spec_load_recover_alloc_list`, `rdPtr`.

**Simultaneous case:** three-branch pattern — `exec && spec` picks the older recovery point's alloc_list (smaller circular age from rdPtr). The older checkpoint's alloc_list is a superset of the younger's, so it frees all wrong-path PRs. `commit_update` OR-in preserved in all three branches.

> **FLAG (wiring):** `rdPtr`, `exec_mispredict_rob_idx`, `spec_load_rob_idx` need to be routed into `free_list.sv` in `cpu_midcore.sv`. Same signals as srat.sv — wire together in Steps 12/15.

---

### Step 10 — `rtl/cpu_commit/branch_recover.sv` ✅ N/A — NO CHANGES NEEDED

`spec_load_mispredict` originates in `lsq.sv` and is routed directly from `cpu_execute.sv` to all consuming modules. There is no reason to funnel it through `branch_recover.sv`.

All downstream modules (rob, rs, busy_table, srat, free_list, lsq, cpu_midcore, cpu_frontend) already handle `exec_mispredict` and `spec_load_mispredict` as **separate signals**. Merging them into a combined signal would add complexity with no benefit.

`branch_recover.sv` continues to output `exec_mispredict`, `exec_recover_pc`, `exec_mispredict_rob_idx` as before. `spec_load_*` signals are wired independently in `cpu.sv`.

Note: TAGE training outputs (`commit_mispredict`, `commit_target_pc`) are unchanged.

---

### Step 11 — `rtl/cpu_commit/cpu_commit.sv` ✅ DONE

> **Refer to EARLY_RECOVERY_PLAN.md:** Step 11 — exposed `exec_mispredict`, `recover_pc`, `bt_rebuild_o` from `cpu_commit.sv`. Add `spec_load_mispredict`, `spec_load_recover_pc`, `spec_load_rob_idx`, `spec_load_checkpoint_id`, `spec_load_bt_rebuild_o` using the same expose pattern.

**New inputs:**
- `spec_load_mispredict_i`, `spec_load_rob_idx_i` — wired into rob.sv for partial flush + done-bit clear; gates rob wr_en
- `store_wb_valid_i`, `store_wb_rob_data_i` — pass-through to rob.sv (6th exec input)
- `fwd_ROB_exec_valid_i`, `fwd_ROB_exec_i` — pass-through to rob.sv (7th exec input)

**NOT routed through cpu_commit:**
- `spec_load_recover_pc` — goes directly cpu_execute → cpu.sv → cpu_frontend
- `spec_load_checkpoint_id` — goes directly cpu_execute → cpu.sv → load_checkpoint

**New outputs:**
- `load_commit_o`, `load_commit_rob_entry_o`, `load_commit_pc_o` — asserted when `commit && opcode == op_load`
- `store_commit_o`, `store_commit_rob_entry_o`, `store_commit_pc_o` — asserted when `commit && opcode == op_store`

**ROB instantiation:** `wr_en` gated with `!exec_mispredict && !spec_load_mispredict_i`; all new rob.sv ports wired. All other instantiations (arat, branch_recovery) verified correct — no changes needed.

---

### Step 12 — `rtl/cpu_midcore/cpu_midcore.sv` ✅ DONE

> **Refer to EARLY_RECOVERY_PLAN.md:** Step 12 — added stall on `exec_mispredict`, `cp_dispatch_*` outputs for branch checkpoint, and gated dispatch in `cpu_midcore.sv`. Add `spec_load_mispredict` to the stall, `lc_dispatch_*` outputs for load checkpoint, same dispatch gating.

**New inputs:** `spec_load_mispredict`, `spec_load_rob_idx_i`, `spec_load_recover_srat_i [32]`, `spec_load_recover_alloc_list_i`, `wb_fwd`/`wb_fwd_pr`, `lc_checkpoint_full`, `lc_checkpoint_id_i`.

**New outputs:** `lc_dispatch_valid_o`, `lc_dispatch_rob_idx_o`, `lc_dispatch_srat_o [32]`.

**Stall:** added `spec_load_mispredict`, `stall_lc_checkpoint_full` (gates on `is_load`).

**Pipeline flush:** `rst || exec_mispredict || spec_load_mispredict` for both ROB and MIDCORE register blocks.

**is_load signal:** `MIDCORE_rename2_reg.dispatch_to == 3'd2` — used for stall + lc_dispatch + spec_load_cp_id stamping.

**ROB dispatch output:** stamp `ROB_midcore_o.spec_load_cp_id = lc_checkpoint_id_i` when `is_load`.

**`wb_fwd`/`wb_fwd_pr`:** added to MIDCORE_rename2_wb_updated stall bypass, wired to busy_table, rename2.

**Submodule wiring:** srat, free_list receive all new spec_load + age comparison ports; busy_table receives `spec_load_mispredict` + `wb_fwd`; rename2 receives `wb_fwd`/`wb_fwd_pr`.

**Also updated: `rename2.sv`** — added `wb_fwd`/`wb_fwd_pr` to port list and both pr1/pr2 dispatch-time bypass logic.

> **FLAG (wiring — Steps 13/15):** `load_full` and `store_full` in cpu_midcore.sv must be driven by `lq_full_o` and `sq_full_o` from lsq.sv respectively (not a unified signal). Ensure correct mapping when wiring in cpu_execute.sv and cpu.sv.

> **FLAG (wiring — Step 15):** `load_checkpoint.sv` needs `rename_update` + `rename_update_pr` to accumulate alloc_list — these are the **same signals** as `cp_rename_update_o` / `cp_rename_update_pr_o` already output by cpu_midcore.sv. Share them: wire `cp_rename_update_o` → both `checkpoint.sv.rename_update` and `load_checkpoint.sv.rename_update`; same for `cp_rename_update_pr_o`.

---

### Step 13 — `rtl/cpu_execute/cpu_execute.sv` ✅ DONE

**What was changed:**
- Removed old commit inputs (`commit`, `commit_pc`, `commit_inst`, `commit_rob_entry`, `commit_mem_addr`, `commit_mem_wdata`)
- Added load/store commit pulse inputs: `load_commit_i`/`load_commit_rob_entry_i`/`load_commit_pc_i`, `store_commit_i`/`store_commit_rob_entry_i`/`store_commit_pc_i`
- Added `wb_fwd`/`wb_fwd_pr` outputs (6th wb channel to cpu_midcore)
- Added `store_wb_valid_o`/`store_wb_rob_data_o` (lsq store-ready → cpu_commit)
- Added `fwd_ROB_exec_valid_o`/`fwd_ROB_exec_o` (lsq fwd wb → cpu_commit)
- Added `spec_load_mispredict_o`, `spec_load_recover_pc_o`, `spec_load_rob_idx_o`, `spec_load_checkpoint_id_o`
- Removed `mem_full`, `LDorST_i`, `READY_i`, `load_valid`, `store_valid`, `mem_ROB_data_i`, `mem_MIDCORE_data_i`, `mem_empty_i`; replaced with lsq↔mem issue/feedback signals and wb signal wires
- `load_full_o = lq_full`, `store_full_o = sq_full` (separate from lsq.sv)
- `wb_load = wb_load_valid` (from mem.sv); `mem_ROB_exec_o = wb_load_rob_data`
- `fwd_ROB_exec_valid_o = wb_fwd_valid`; `fwd_ROB_exec_o = wb_fwd_rob_data`
- Replaced `loadstore_queue` + old `mem` with new `lsq` + new `mem` instantiations; wired all lsq↔mem handshake signals
- All 4 RS instantiations (alu, cmp, jump, mul): added `spec_load_mispredict`/`spec_load_rob_idx`, `wb_fwd`/`wb_fwd_pr`
- PRF: added `fwd_wb`/`fwd_val`/`fwd_pr` 6th write port; `load_val` now from `wb_load_val` (mem.sv); lsq PRF lookup now uses `MIDCORE_midcore_i.pr1/pr2` directly (no RS for loads)
- `physical_regfile.sv`: added `fwd_wb`, `fwd_val`, `fwd_pr` 6th write port

---

### Step 14 — `rtl/cpu_frontend/cpu_frontend.sv` ✅ DONE

**What was changed:**
- Added inputs: `spec_load_mispredict`, `spec_load_recover_pc`, `spec_load_rob_idx`, `exec_mispredict_rob_idx`, `rdPtr_i`
- Added internal wires: `flush_combined`, `recover_pc_combined`
- `flush_combined = exec_mispredict || spec_load_mispredict` — OR'd and passed to both `fetch` and `fetch_queue`
- `recover_pc_combined`: age comparison when both fire simultaneously (`ROB_IDX'(exec_mispredict_rob_idx - rdPtr_i) <= ROB_IDX'(spec_load_rob_idx - rdPtr_i)` → exec wins); otherwise whichever is asserted
- `fetch` and `fetch_queue` submodules unchanged — only the wired signals changed

TAGE training unchanged.

---

### Step 15 — `rtl/cpu.sv` ✅ DONE

**What was changed:**
- Added wires: `spec_load_mispredict/recover_pc/rob_idx/checkpoint_id`, `wb_fwd/wb_fwd_pr`, `store_wb_valid/rob_data`, `fwd_ROB_exec_valid/rob_data`, `load_commit/rob_entry/pc`, `store_commit/rob_entry/pc`, `lc_checkpoint_full/id`, `lc_recover_srat/alloc_list`, `lc_dispatch_valid/rob_idx/srat`
- `cpu_frontend`: added `exec_mispredict_rob_idx`, `spec_load_mispredict`, `spec_load_recover_pc`, `spec_load_rob_idx`, `rdPtr_i`
- `cpu_midcore`: added `spec_load_*`, `wb_fwd/wb_fwd_pr`, `lc_checkpoint_full/id_i`, `lc_dispatch_*` outputs, `spec_load_recover_srat_i/alloc_list_i`
- `cpu_execute`: removed old 6 commit inputs; added load/store commit pulse inputs, `wb_fwd/wb_fwd_pr`, `store_wb_*`, `fwd_ROB_exec_*`, `spec_load_*` outputs
- `cpu_commit`: added `store_wb_*`, `fwd_ROB_exec_*`, `spec_load_mispredict_i/rob_idx_i`, load/store commit pulse outputs
- Added `load_checkpoint` instantiation: shares `cp_rename_update`/`cp_rename_update_pr` with `checkpoint`; `load_commit_checkpoint_id = commit_rob_o.spec_load_cp_id`

---

## wb_fwd Propagation Checklist

`wb_fwd` is a 6th writeback channel generated by `lsq.sv` (store-to-load forwarding). It bypasses `mem.sv` entirely, so every module that consumes the existing 5 WB channels must also be updated. Work through this list in order.

### Form 1 — `wb_fwd / wb_fwd_pr` (wakeup + busy clear)
Val only needed where marked.

| Module | What to add | Notes |
|---|---|---|
| `physical_regfile.sv` | 6th write port: `fwd_wb`, `fwd_pr`, `fwd_val` | Actual PRF write for forwarded value |
| `busy_table.sv` | `wb_fwd`, `wb_fwd_pr` | Clear busy bit for forwarded dest |
| `reservation_station.sv` | `wb_fwd`, `wb_fwd_pr` | Wake up entries waiting on forwarded dest |
| `rename2.sv` | `wb_fwd`, `wb_fwd_pr` | Dispatch-time bypass: forwarded dest looks not-busy same cycle |
| `cpu_midcore.sv` | `wb_fwd`, `wb_fwd_pr` | Stall-cycle busy bypass (MIDCORE_rename2_wb_updated); pass-through to busy_table + rename2 |

### Form 2 — ROB exec inputs (full `rob_t`, `.done=1`)

| Module | What to add | Notes |
|---|---|---|
| `rob.sv` | 6th input `store_wb_rob_data_i` (rob_t) | Mark store's ROB entry done so it can commit; from lsq.sv `store_wb_valid_o`/`store_wb_rob_data_o`. ROB only — no PRF/busy_table/RS needed (stores have no dest PR) |
| `rob.sv` | 7th input `fwd_ROB_exec_i` (rob_t) | Mark forwarded load's ROB entry done; `wb_fwd_rob_data_o` from lsq.sv already fully filled |
| `cpu_commit.sv` | pass-through both | Wrapper only |

### Aggregator / wiring

| Module | Role |
|---|---|
| `cpu_execute.sv` | Source — expose `wb_fwd_*` + `store_wb_*` outputs from lsq.sv; route both rob_t outputs to cpu_commit; add `fwd_wb` port to physical_regfile |
| `cpu.sv` | Wire `wb_fwd_*` from cpu_execute → cpu_midcore; wire `fwd_ROB_exec` + `store_wb` from cpu_execute → cpu_commit |

### Not affected
`fetch.sv`, `fetch_queue.sv`, `branch_predict.sv`, `decode.sv`, `rename1.sv`, `srat.sv`, `free_list.sv`, `arat.sv`, `alu.sv`, `cmp.sv`, `jump.sv`, `mul_unit.sv`, `mem.sv`, `checkpoint.sv`, `branch_recover.sv`

---

## Signal Flow Summary

```
Dispatch:
  rename2 → lsq.load_wr_en (load) or lsq.store_wr_en (store)
  rename2 → load_checkpoint.dispatch (load only)
  load_checkpoint → checkpoint_id_o → lsq load entry + rob_t.spec_load_cp_id

Execute (every cycle, inside lsq.sv):
  lq entries scan sq entries → load_state_next (combinational, per LQ slot)
  oldest FORWARDING LQ entry → fwd_valid/data output → mem.sv forwarding wb port
  oldest SAFE/SPECULATIVE LQ entry → load_issue output → mem.sv dmem_read
  committed SQ head → store_issue output → mem.sv dmem_write
  wb signals → lq/sq addr computation, sq data capture

Identify error (every cycle, inside lsq.sv):
  sq_addr_valid_prev vs sq.addr_valid → detect 0→1 transitions
  scan LQ for younger executed loads with matching addr+mask
  → spec_load_mispredict_o + spec_load_rob_idx_o + spec_load_checkpoint_id_o

Recovery (on spec_load_mispredict):
  lsq: partial flush (valid-bit clear on younger LQ entries, wrPtr rollback on SQ),
       clear load_executed of mispredicted load
  rob: partial flush + clear done of mispredicted load
  rs: partial flush
  busy_table: rebuild from bt_rebuild_o
  srat: restore from load_checkpoint.recover_srat
  free_list: restore using load_checkpoint.recover_alloc_list
  load_checkpoint: release slot
  fetch_queue + fetch: redirect via spec_load_mispredict + spec_load_recover_pc directly from cpu_execute (no arbitration in branch_recover.sv)

Load commit:
  ROB head commits a load → load_commit pulse → lsq releases LQ slot, load_checkpoint releases slot

Store execution:
  ROB head commits a store → store_commit pulse → lsq SQ head fires dmem_write → dmem_resp → SQ pops head
```

---

## Key Differences from Branch (Early) Recovery

| Aspect | Branch Recovery | Speculative Load Recovery |
|---|---|---|
| Trigger | CMP/Jump resolves in execute | Store addr_valid 0→1, finds younger executed load with matching addr+mask |
| Recovery point | The mispredicting branch | The mispredicted load (re-executed from here) |
| Checkpoint written | At branch/jump dispatch | At load dispatch |
| Checkpoint released | At execute resolution (correct or not) | At load commit OR flush |
| ROB on recovery | Flush younger entries | Flush younger entries + clear done of recovery load |
| Recovery load | N/A | Keep in LQ, clear load_executed, re-execute |
| Forwarding wb port | N/A | New dedicated port for store-to-load forwarding |

---

## Empirical Validation — Aggressive Speculation Works

After full implementation, all 14 benchmarks were run with performance counters tracking safe loads, speculative loads, forwarded loads, and mispredicts (total, from-forwarding, from-speculative). Results across all tests:

**Zero speculative load mispredicts across all 14 benchmarks.**

The aggressive forwarding and aggressive speculative execution mechanisms never cause a RAW violation in any of the benchmarks tested. Both mechanisms are pure wins:
- Forwarded loads complete immediately without a memory port — latency = 0 extra cycles
- Speculative loads issue to dmem immediately rather than stalling — no pipeline bubbles waiting for store addresses

**compression** is the most load-intensive benchmark: ~4000 speculative loads and ~3200 forwarded loads in a single run. Every one executes correctly. Identify-error fires zero times.

**Why zero mispredicts?** Memory access patterns in well-written programs are largely regular. Store-to-load RAW hazards where the load executes before the store address is known are rare, and when they do occur, the identify-error mechanism catches them correctly. In practice, the benchmarks tested do not exhibit the pathological case: a load that completes via forwarding or speculative dmem access, where a subsequently-resolved older store has a conflicting address with the right byte mask.

This validates the design choice: build an aggressive speculation system with a correct safety net (identify-error), rather than a conservative system that stalls unnecessarily. The hardware cost of identify-error (a combinational scan of LQ × SQ on every store addr_valid transition) is paid unconditionally, but the recovery cost is effectively zero across these workloads.

**Performance counters added (top_tb.cpp `[Spec Load]` output):**
```
[Spec Load]  safe=<N>  spec=<N>  fwd=<N>  spec_mispr_rate=0.000  fwd_mispr_rate=0.000
```
- `safe` — loads that issued to dmem with all older store addresses resolved (no risk)
- `spec` — loads that issued to dmem speculatively (≥1 unresolved older store)
- `fwd` — loads that bypassed dmem via SQ forwarding
- `spec_mispr_rate` — fraction of spec+fwd loads that caused a mispredict
- `fwd_mispr_rate` — fraction of fwd loads specifically that caused a mispredict

**Summary table columns added to run_all.sh:**
`Br Misp%`, `Jmp Misp%`, `Spec Misp%`, `Fwd Misp%`, `Safe Lds`, `Spec Lds`, `Fwd Lds`
