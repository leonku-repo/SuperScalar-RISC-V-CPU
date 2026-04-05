# Early Branch Recovery — Implementation Plan

## Overview

Replace commit-time branch recovery with **execute-time (early) recovery** using checkpointing.
When a branch or jump resolves in the execute stage, recovery fires immediately — no waiting for ROB head commit.

---

## Design Decisions

| Decision | Choice |
|---|---|
| Recovery trigger | Execute-time only. Commit-time recovery removed entirely. |
| TAGE training | Unchanged — still trains at commit time. |
| Checkpoint slots | 4 (= CMP_RS_SIZE + JUMP_RS_SIZE = 2 + 2) |
| Checkpoint release | At execute time — freed whether mispredict or correct resolution |
| Mispredict arbiter | `branch_recover.sv` — takes CMP and Jump exec outputs directly |
| `checkpoint_id` location | `rob_t` — rides through execute outputs naturally |
| `stall_checkpoint_full` | Explicit signal added for debuggability (logically redundant with RS full stalls but useful in waveforms) |

### Why 4 checkpoints needs no extra stall (but we add one anyway)
A checkpoint lives exactly as long as its RS entry (dispatch → execute, 1-cycle combinational).
CMP RS holds 2 entries max, Jump RS holds 2 entries max → 4 checkpoints max in flight.
`stall_cmp_full` and `stall_jump_full` already prevent overflow. `stall_checkpoint_full` is added explicitly so it is visible in Verilator as a named `/*verilator public*/` signal.

### Free List Recovery Mechanism (exact)

**What the checkpoint stores per entry:**
- `alloc_list [PRF_SIZE]` — bitvector of every PR allocated by rename2 since this checkpoint was taken. Bit set = that PR was allocated on the wrong speculative path.
- Does NOT store a free list snapshot.

**Why no snapshot is needed:**
At mispredict time, `free_list` already correctly reflects all valid commits that happened
after the checkpoint (commits free `old_p`, setting those bits to 1). The only bits that
are wrong are PRs stolen by wrong-path speculative renames — those are exactly the bits
recorded in `alloc_list`.

**Recovery (in `free_list.sv`):**
```sv
else if (exec_mispredict)
    free_list <= free_list | checkpoint_alloc_list;
```
OR-ing with `alloc_list` sets back to 1 every PR that was wrongly allocated, restoring
the free list to the correct post-commit state without needing a snapshot.

**Why `freelist_snap | alloc_list` would be wrong:**
A PR that was in-use at checkpoint time and freed by a valid commit afterward would have
`freelist_snap[p]=0` and `alloc_list[p]=0` → result = 0 (still in-use). But it should
be free. The snapshot approach loses track of valid commits after checkpoint time.

---

## Current Recovery (commit-time) vs New Recovery (execute-time)

```
OLD:
CMP/Jump execute → ROB writeback → ROB head commit → branch_recover → frontend + midcore

NEW:
CMP/Jump execute → branch_recover → checkpoint restore → frontend + midcore + RS/LSQ/ROB
                                  → (branch stays in ROB, commits normally for RVFI)

Commit stage → TAGE training only (commit_is_branch, commit_actual_taken, etc.)
```

---

## New Signal Flow

```
CMP/Jump execute result
        │
        ▼
branch_recovery.sv  (instantiated in cpu_commit)
        │
        ├─ exec_mispredict ──────────────────────────────────────────────┐
        ├─ exec_recover_pc ──────────────────────────── cpu_frontend     │
        ├─ exec_mispredict_rob_idx ──────────────┐                       │
        └─ exec_checkpoint_id ─── checkpoint.sv  │                       │
                                      │          │                       │
                                      ├─ recover_srat       → srat.sv      │
                                      ├─ recover_alloc_list → free_list.sv │
                                      └─ recover_rob_idx    → rob.sv       │
                                                                          │
                              rob.sv (partial flush) ◄────────────────────┤
                                └─ bt_rebuild_o → busy_table.sv           │
                                                                           │
                              reservation_station (partial inval) ◄────────┤
                              loadstore_queue (partial inval) ◄────────────┤
                              cpu_midcore (pipeline flush) ◄───────────────┤
                              cpu_frontend (flush + PC redirect) ◄─────────┘

Commit stage
        └─ commit_is_branch/jump/taken/pc → TAGE (unchanged)
```

---

## Step-by-Step Implementation

### Step 1 — `types.sv` ✅ DONE

Added `CP_SIZE` and `CP_IDX` parameters derived from `CMP_RS_SIZE + JUMP_RS_SIZE`:
```sv
localparam int unsigned CP_SIZE = CMP_RS_SIZE + JUMP_RS_SIZE; // 4
localparam int unsigned CP_IDX  = $clog2(CP_SIZE);            // 2
```

Added `checkpoint_id` to `rob_t`:
```sv
logic [CP_IDX-1:0] checkpoint_id;  // which checkpoint slot owns this branch/jump
```
No changes to `midcore_t`.

> **Note:** `LS_QUEUE_SIZE = 16` in `types.sv`, not 8 as stated in `CPU_DESIGN_NOTES.md`.
> Step 8 (loadstore_queue) uses `LSQ_SIZE` via parameter — unaffected, but the design notes are stale.

---

### Step 2 — `checkpoint.sv` (new module) ✅ DONE

**4 entries. Per-entry contents:**
```
valid          : 1
rob_idx        : ROB_IDX
srat_snap      : [32][PRF_IDX]      // SRAT snapshot at dispatch time
alloc_list     : PRF_SIZE           // PRs allocated since this checkpoint (grows every rename)
```
No `freelist_snap` — see "Free List Recovery Mechanism" in Design Decisions above.

**Ports:**
```sv
module checkpoint
import rv32i_types::*;
(
    input  logic                    clk,
    input  logic                    rst,

    // Allocation — from rename2 at branch/jump dispatch
    input  logic                    dispatch_valid,
    input  logic [ROB_IDX-1:0]      dispatch_rob_idx,
    input  logic [PRF_IDX-1:0]      dispatch_srat     [32],
    output logic [CP_IDX-1:0]       checkpoint_id_o,
    output logic                    checkpoint_full,

    // Accumulate — every rename2 allocation
    input  logic                    rename_update,
    input  logic [PRF_IDX-1:0]      rename_update_pr,

    // Resolve — from branch_recover.sv at execute time
    input  logic                    cmp_resolved,
    input  logic [CP_IDX-1:0]       cmp_checkpoint_id,
    input  logic                    jump_resolved,
    input  logic [CP_IDX-1:0]       jump_checkpoint_id,
    input  logic                    exec_mispredict,
    input  logic [CP_IDX-1:0]       exec_checkpoint_id,
    input  logic [ROB_IDX-1:0]      rdPtr,              // wrap-aware younger-cp comparison

    // Recovery outputs (valid when exec_mispredict = 1)
    output logic [PRF_IDX-1:0]      recover_srat      [32],
    output logic [PRF_SIZE-1:0]     recover_alloc_list, // OR'd into free_list in free_list.sv
    output logic [ROB_IDX-1:0]      recover_rob_idx
);
```

**Key behaviors:**
- `checkpoint_full = cp[0].valid & cp[1].valid & cp[2].valid & cp[3].valid`
- Allocation: priority-encode first `!valid` slot → `checkpoint_id_o`
- On `dispatch_valid`: write `srat_snap`, `rob_idx`; clear `alloc_list`; set `valid`
  - `dispatch_srat` must be the **current registered** SRAT (`srat_o [32]` from `srat.sv`). Checkpoint dispatch fires from `rename2_reg` (one cycle after `rename_update` for the branch). By that cycle the branch's own rename has already clocked into `srat`, so `srat_o` is post-rename for the branch. The next instruction's `rename_update` fires the same cycle but has not clocked yet — so `srat_o` is also pre-next-instruction-rename. Correct snapshot, no `srat_next` needed.
- Every cycle with `rename_update`: set `alloc_list[rename_update_pr] = 1` for ALL valid entries simultaneously
- On CMP/Jump resolved with no mispredict: clear `valid` for that checkpoint's slot
- On `exec_mispredict`: clear `valid` for `exec_checkpoint_id` AND all younger checkpoints (wrap-aware rob_idx comparison)
- `recover_alloc_list = cp[exec_checkpoint_id].alloc_list` (combinational)
- `recover_srat = cp[exec_checkpoint_id].srat_snap` (combinational)
- Allocation is gated by `dispatch_valid && !checkpoint_full` — module protects itself even if upstream stall fails to gate `dispatch_valid`

---

### Step 3 — `rob.sv` ✅ DONE

**Remove:** `flush` input (commit-time full flush). Reset-only full flush retained.

**Added inputs:** `exec_mispredict`, `exec_mispredict_rob_idx [ptr_width-1:0]`.

**Added output:** `bt_rebuild_o [PRF_SIZE]` (combinational). `rdPtr_o` was already present.

**wrPtr rollback formula (implemented):**
```sv
wrPtr <= rdPtr + {1'b0, ptr_width'(exec_mispredict_rob_idx - rdPtr[ptr_width-1:0])} + 1'b1;
rdPtr <= rdPtrNext;  // commit may still drain on same cycle
```
This correctly handles wrap-around: `age_m = exec_mispredict_rob_idx - rdPtr_lower` (natural
4-bit modular subtraction), then `rdPtr + age_m + 1` gives the right (ptr_width+1)-bit wrPtr.

**Partial flush (always_ff, after normal update so it takes priority):**
```sv
if (exec_mispredict) begin
    for (int i = 0; i < fifo_size; i++) begin
        if (ptr_width'(i - rdPtr[ptr_width-1:0]) >
            ptr_width'(exec_mispredict_rob_idx - rdPtr[ptr_width-1:0]))
            mem[i] <= '0;
    end
end
```

**`bt_rebuild_o` (combinational, applies flush boundary filter immediately):**
```sv
always_comb begin
    bt_rebuild_o = '0;
    for (int i = 0; i < fifo_size; i++) begin
        if (mem[i].valid && mem[i].rd_valid && !mem[i].done) begin
            if (!exec_mispredict ||
                ptr_width'(i - rdPtr[ptr_width-1:0]) <=
                ptr_width'(exec_mispredict_rob_idx - rdPtr[ptr_width-1:0]))
                bt_rebuild_o[mem[i].new_p] = 1'b1;
        end
    end
end
```
The age filter is applied combinationally so `bt_rebuild_o` is correct the same cycle
`exec_mispredict` fires — no need to wait for the flush to clock in.

**Design notes:**

- **Wrap bit not needed in age comparison.** `ptr_width'(i - rdPtr[ptr_width-1:0])` is
  sufficient. `rdPtr[ptr_width-1:0]` is exactly `ptr_width` bits wide (indices ptr_width-1
  down to 0), and the natural modular subtraction handles wrap-around correctly. Committed
  slots behind rdPtr may also get cleared by the partial flush, but that is harmless since
  they are no longer valid ROB entries and will be overwritten at next dispatch.

- **`bt_rebuild_o` timing — no extra cycle needed.** At cycle T when `exec_mispredict=1`,
  `mem` still holds pre-flush state. The inline age filter in `bt_rebuild_o` combinationally
  excludes younger (wrong-path) entries before they physically flush. So `busy_table` can
  safely latch `bt_rebuild_o` at the same posedge T — it is already correct.

---

### Step 4 — `busy_table.sv` ✅ DONE

**Removed:** `mispredict_update` input (zeroing path).

**Added inputs:** `exec_mispredict`, `bt_rebuild_i [PRF_SIZE]`.

**Change:** `bt <= '0` on mispredict replaced with `bt <= bt_rebuild_i`.
`bt_rebuild_i` comes from `rob.bt_rebuild_o` which is correct the same cycle
`exec_mispredict` fires (age-filtered combinationally — see Step 3 notes).

---

### Step 5 — `srat.sv` ✅ DONE

**Remove:** `mispredict_update` + `mispredict_update_arat` inputs (ARAT-based restore).

**Add inputs:** `exec_mispredict`, `recover_srat [32]` (checkpoint snapshot).

**Add output:** `srat_o [32]` — exposes the full registered `srat[]` array so `cpu_midcore`
can forward it to `checkpoint.sv` as `dispatch_srat`. (Not `srat_next` — see Step 2 notes.)

```sv
// In always_ff:
else if (exec_mispredict)
    srat <= recover_srat;

// New output:
assign srat_o = srat;  // combinational from register — correct snapshot at dispatch time
```

SRAT bypass logic (`pr1_o`, `pr2_o`, `old_pr_o`) unchanged.

---

### Step 6 — `free_list.sv` ✅ DONE

**Removed:** `mispredict_update` + `mispredict_update_arat` inputs and `free_list_recovery` ARAT rebuild combinational logic.

**Added inputs:** `exec_mispredict`, `recover_alloc_list [PRF_SIZE]`.

```sv
else if (exec_mispredict)
    free_list <= free_list | recover_alloc_list;
```
`free_list` already reflects all valid commits. `recover_alloc_list` (from `checkpoint.recover_alloc_list`) contains every PR stolen by wrong-path renames. OR-ing frees them back. No snapshot needed.

---

### Step 7 — `reservation_station.sv` ✅ DONE

**Removed:** `flush` input (full flush on mispredict).

**Added inputs:** `exec_mispredict`, `exec_mispredict_rob_idx [ROB_IDX-1:0]`, `rdPtr [ROB_IDX-1:0]`.

**Partial invalidation (always_ff, after normal update — last assignment wins):**
```sv
if (exec_mispredict) begin
    for (int i = 0; i < RS_SIZE; i++) begin
        if (valid[i] &&
            ROB_IDX'(rob_rs[i].rob_entry - rdPtr) >
            ROB_IDX'(exec_mispredict_rob_idx - rdPtr))
            valid[i] <= 1'b0;
    end
end
```
Only `valid[i]` is cleared — other fields (rob_rs, midcore_rs, pr_ready) are don't-care when valid=0.

---

### Step 8 — `loadstore_queue.sv` ✅ DONE

**Removed:** `flush` input.

**Added inputs:** `exec_mispredict`, `exec_mispredict_rob_idx [ROB_IDX-1:0]`, `rob_rdPtr_i [ROB_IDX-1:0]`.

**wrPtr rollback (combinational + ptr always_ff):**
```sv
// Combinational: count surviving entries (not younger than branch)
logic [PTR_SIZE:0] exec_new_wrPtr;
always_comb begin
    exec_new_wrPtr = rdPtr;
    for (int i = 0; i < LSQ_SIZE; i++) begin
        if ({1'b0, PTR_SIZE'(i)} < (wrPtr - rdPtr) &&
            ROB_IDX'(rob_rs[PTR_SIZE'(rdPtr[PTR_SIZE-1:0] + PTR_SIZE'(i))].rob_entry - rob_rdPtr_i) <=
            ROB_IDX'(exec_mispredict_rob_idx - rob_rdPtr_i))
            exec_new_wrPtr = exec_new_wrPtr + 1;
    end
end
// ptr always_ff:
else if (exec_mispredict) begin
    wrPtr <= exec_new_wrPtr;
    rdPtr <= rdPtrNext;
end
```

**Dispatch guard:** `wr_en && !exec_mispredict` — prevents writing wrong-path entries on mispredict cycle.
Also applied to **ROB** (`mem_next` dispatch block + mem always_ff) and **RS** (always_ff dispatch condition).
⚠️ **Review at Step 12**: cpu_midcore stall should also assert on `exec_mispredict` to gate `wr_en=0` upstream. The per-structure guards are defense-in-depth.

---

### Step 9 — `branch_recover.sv` (redesigned) ✅ DONE

Fully rewritten. Takes CMP and Jump exec outputs. Arbitrates. Also emits TAGE training signals from commit.

**New interface:**
```sv
module branch_recovery
import rv32i_types::*;
(
    // From execute stage
    input  rob_t                    cmp_ROB_exec_i,
    input  logic                    cmp_valid,
    input  rob_t                    jump_ROB_exec_i,
    input  logic                    jump_valid,
    input  logic [ROB_IDX-1:0]      rdPtr,

    // From commit stage — TAGE training only, no recovery
    input  logic                    commit,
    input  rob_t                    commit_rob_i,

    // Early recovery outputs
    output logic                    exec_mispredict,
    output logic [31:0]             exec_recover_pc,
    output logic [ROB_IDX-1:0]      exec_mispredict_rob_idx,
    output logic [1:0]              exec_checkpoint_id,

    // Checkpoint release (non-mispredict resolves)
    output logic                    cmp_resolved,
    output logic [1:0]              cmp_checkpoint_id_o,
    output logic                    jump_resolved,
    output logic [1:0]              jump_checkpoint_id_o,

    // TAGE training outputs (commit-time)
    output logic                    commit_is_branch,
    output logic                    commit_is_jump,
    output logic                    commit_branch_actual_taken,
    output logic [31:0]             commit_branch_pc,
    output logic                    commit_mispredict,   // commit_rob_i.mispredict — for TAGE pred derivation
    output logic [31:0]             commit_target_pc     // commit_rob_i.target_pc — for BTB update_target
);
```

**Arbitration (combinational):**
```sv
logic cmp_mp, jump_mp, pick_cmp;
logic [ROB_IDX-1:0] cmp_age, jump_age;

assign cmp_mp   = cmp_valid  && cmp_ROB_exec_i.mispredict;
assign jump_mp  = jump_valid && jump_ROB_exec_i.mispredict;
assign cmp_age  = cmp_ROB_exec_i.rob_entry  - rdPtr;   // mod ROB_SIZE naturally
assign jump_age = jump_ROB_exec_i.rob_entry - rdPtr;
assign pick_cmp = cmp_mp && (!jump_mp || (cmp_age < jump_age));

assign exec_mispredict         = cmp_mp || jump_mp;
assign exec_recover_pc         = pick_cmp ? cmp_ROB_exec_i.target_pc
                                          : jump_ROB_exec_i.target_pc;
assign exec_mispredict_rob_idx = pick_cmp ? cmp_ROB_exec_i.rob_entry
                                          : jump_ROB_exec_i.rob_entry;
assign exec_checkpoint_id      = pick_cmp ? cmp_ROB_exec_i.checkpoint_id
                                          : jump_ROB_exec_i.checkpoint_id;

assign cmp_resolved        = cmp_valid;
assign cmp_checkpoint_id_o = cmp_ROB_exec_i.checkpoint_id;
assign jump_resolved       = jump_valid;
assign jump_checkpoint_id_o = jump_ROB_exec_i.checkpoint_id;
```

**TAGE training (unchanged behavior + two new outputs):**
```sv
assign commit_is_branch           = commit && commit_rob_i.is_branch;
assign commit_is_jump             = commit && commit_rob_i.is_jump;
assign commit_branch_actual_taken = commit && commit_rob_i.branch_actual_taken;
assign commit_branch_pc           = commit_rob_i.pc;
assign commit_mispredict          = commit && commit_rob_i.mispredict;
assign commit_target_pc           = commit_rob_i.target_pc;
```

**Amendment (from Step 13 review):**
`branch_recover.sv` must emit two new commit-time signals needed by `branch_predict.sv` via `cpu_frontend`:
- `commit_mispredict = commit && commit_rob_i.mispredict` — for `commit_pred_taken = actual ^ mispredict`
- `commit_target_pc = commit_rob_i.target_pc` — for BTB `update_target` (actual target of every committing branch)

`branch_predict.sv` is **not changed** — TAGE trains and flushes entirely at commit time.

---

### Step 10 — `cpu_execute.sv` ✅ DONE

**Removed:** `mispredict` input.

**Added inputs:** `exec_mispredict`, `exec_mispredict_rob_idx [ROB_IDX-1:0]`, `rdPtr_i [ROB_IDX-1:0]`.

**Added outputs:** `cmp_valid_o`, `jump_valid_o` — expose internal valid signals so `branch_recover.sv` (in cpu_commit) can consume them.

All 4 RS instances: `flush(mispredict)` → `exec_mispredict`, `exec_mispredict_rob_idx`, `rdPtr(rdPtr_i)`.
LSQ: `flush(mispredict)` → `exec_mispredict`, `exec_mispredict_rob_idx`, `rob_rdPtr_i(rdPtr_i)`.

---

### Step 11 — `cpu_commit.sv` ✅ DONE

**Removed outputs:** `mispredict`, `recover_pc` (commit-time recovery gone).

**Added inputs:** `cmp_valid_i`, `jump_valid_i`.

**Added outputs:** `exec_mispredict`, `exec_recover_pc`, `exec_mispredict_rob_idx`, `exec_checkpoint_id`, `cmp_resolved`, `cmp_checkpoint_id_o`, `jump_resolved`, `jump_checkpoint_id_o`, `bt_rebuild_o [PRF_SIZE]`, `commit_mispredict`, `commit_target_pc`.

ROB: removed `flush`, added `exec_mispredict`/`exec_mispredict_rob_idx`; `wr_en` gated with `!exec_mispredict`; wires `bt_rebuild_o`.

`branch_recovery` fully rewired with new execute-time interface; `rdPtr = rob_rd_idx` (registered, no comb loop); `commit_rob_i = commit_rob_o` for TAGE training.

---

### Step 12 — `cpu_midcore.sv` ✅ DONE

**Removed inputs:** `mispredict`, `mispredict_arat [32]`.

**Added inputs:** `exec_mispredict`, `exec_mispredict_rob_idx`, `rdPtr_i`, `recover_srat_i [32]`, `recover_alloc_list_i [PRF_SIZE]`, `bt_rebuild_i [PRF_SIZE]`, `checkpoint_full`, `cp_checkpoint_id_i [CP_IDX]`.

**Added outputs:** `cp_dispatch_valid`, `cp_dispatch_rob_idx [ROB_IDX]`, `cp_dispatch_srat [32]`.

**New stall:** `stall_checkpoint_full = checkpoint_full && is_br_or_jump`. Also added `exec_mispredict` to stall (resolves ⚠️ from Step 8).

**Checkpoint dispatch:** fires when `!stall && ROB_rename2_reg.valid && is_br_or_jump`. `cp_dispatch_srat = srat_o` (post-rename registered SRAT).

**checkpoint_id stamping:** `ROB_midcore_o.checkpoint_id = cp_checkpoint_id_i` set combinationally for branch/jump dispatches.

**Pipeline flush:** all `mispredict` → `exec_mispredict` in both always_ff blocks.

**checkpoint.sv instantiated in cpu.sv (Step 15)** — not here.

**Added outputs for checkpoint alloc_list accumulation:**
```sv
output logic                cp_rename_update_o,      // rename_update && !stall
output logic [PRF_IDX-1:0]  cp_rename_update_pr_o    // rename_update_pr
```
`checkpoint.sv` (cpu.sv) needs these to accumulate `alloc_list` on every rename. Gated with
`!stall` (which includes `exec_mispredict`) so wrong-path renames on the recovery cycle are excluded.
Without this, `recover_alloc_list` is always 0 and wrong-path PRs are never freed.

---

### Step 13 — `cpu_frontend.sv` ✅ DONE

**Remove inputs:** `branch_mispredict`, `recover_pc` (commit-time recovery signals).

**Add inputs:** `exec_mispredict`, `exec_recover_pc`, `commit_mispredict`, `commit_target_pc`.

**`fetch.sv`:** `flush(branch_mispredict → exec_mispredict)`, `recover_pc(recover_pc → exec_recover_pc)`.

**`fetch_queue.sv`:** `flush(branch_mispredict → exec_mispredict)`.

**`branch_predict.sv`: no changes.** TAGE trains and flushes at commit time — keep `commit_mispredict` for both `commit_pred_taken` and `TAGE.flush`. `commit_mispredict` source is now `cpu_commit.commit_mispredict` (ROB head at commit), same timing as before.

In `cpu_frontend.sv` instantiation only:
- `commit_mispredict(branch_mispredict → commit_mispredict)` — new signal name, same commit-time semantics
- `commit_target(recover_pc → commit_target_pc)` — BTB update_target is now the actual target from the committing ROB entry, correct for all branches not just mispredicts

**Keep unchanged:** `commit_is_branch`, `commit_is_jump`, `commit_branch_actual_taken`, `commit_pc` inputs to branch_predict.

---

### Step 14 — `arat.sv`

**No changes.** Still updates at commit. `arat_o` is disconnected from recovery path in `cpu.sv`. Kept as a passive structure for assertions/debug. Can be removed after verification.

---

### Step 15 — `cpu.sv` ✅ DONE

**Remove wires:**
- `arat_o` → `cpu_midcore.mispredict_arat`
- `mispredict` / `recover_pc` from `cpu_commit` → `cpu_frontend`

**Add wires:**
- `exec_mispredict`, `exec_recover_pc` : `cpu_commit` → `cpu_frontend`, `cpu_midcore`, `cpu_execute`
- `exec_mispredict_rob_idx` : `cpu_commit` → `cpu_execute`, `cpu_midcore`
- `exec_checkpoint_id` : `cpu_commit` → checkpoint module
- `cmp_ROB_exec_o`, `cmp_valid` : `cpu_execute` → `cpu_commit`
- `jump_ROB_exec_o`, `jump_valid` : `cpu_execute` → `cpu_commit`
- `rob_rd_idx` : `cpu_commit` → `cpu_execute` (RS/LSQ partial invalidation + age comparison)
- `bt_rebuild_o` : ROB (inside `cpu_commit`) → `busy_table` (inside `cpu_midcore`)
- `cp_rename_update_o`, `cp_rename_update_pr_o` : `cpu_midcore` → checkpoint (alloc_list accumulation)
- Checkpoint module instance + all wires (instantiated at `cpu.sv` level)

**⚠️ TAGE training wires — must restore (currently disconnected):**
The old `mispredict` + `recover_pc` wires from `cpu_commit` were removed in Step 11, which left
`cpu_frontend.branch_mispredict` and `cpu_frontend.recover_pc` undriven. Step 13 replaces those
ports. In Step 15 confirm the following commit-time training wires are connected:
- `commit_is_branch` : `cpu_commit` → `cpu_frontend` (unchanged name)
- `commit_is_jump` : `cpu_commit` → `cpu_frontend` (unchanged name)
- `commit_branch_actual_taken` : `cpu_commit` → `cpu_frontend` (unchanged name)
- `commit_branch_pc` (cpu_commit) → wire → `commit_pc` (cpu_frontend) ← **name mismatch, watch out**
- `commit_mispredict` : `cpu_commit` → `cpu_frontend` (new — replaces old `mispredict` wire for TAGE flush + pred_taken)
- `commit_target_pc` : `cpu_commit` → `cpu_frontend` (new — replaces old `recover_pc` for BTB update_target)

---

## Coding Order

| # | File | Why this order |
|---|---|---|
| 1 | `types.sv` ✅ | `checkpoint_id` in `rob_t` — everything depends on this |
| 2 | `checkpoint.sv` ✅ | New module, no dependencies on changed files |
| 3 | `rob.sv` | Partial flush + `bt_rebuild_o` + expose `rdPtr` |
| 4 | `busy_table.sv` | Depends on `bt_rebuild_o` |
| 5 | `srat.sv` | Simple swap of restore source |
| 6 | `free_list.sv` | Simple swap of restore source |
| 7 | `reservation_station.sv` | Partial invalidation — needs `rdPtr` |
| 8 | `loadstore_queue.sv` | Partial invalidation — needs `rdPtr` |
| 9 | `branch_recover.sv` | Redesign — depends on `rob_t.checkpoint_id` |
| 10 | `cpu_execute.sv` | Add exec_mispredict inputs, pass to RS/LSQ |
| 11 | `cpu_commit.sv` | Add execute-stage inputs, rewire `branch_recovery` |
| 12 | `cpu_midcore.sv` | New stall, checkpoint dispatch, flush signal swap |
| 13 | `cpu_frontend.sv` | Swap flush/recover source to execute-stage |
| 14 | `cpu.sv` | Rewire everything |

---

## What ARAT Becomes

`arat.sv` keeps updating at commit (`arat[rd_arch] <= new_p`) but its output is no longer
consumed by anything on the recovery path. Options:
- Keep it as a passive structure — useful for assertions or future debug
- Remove it after the design is fully verified

---

## Known Limitations Resolved by This Change

| Limitation (from CPU_DESIGN_NOTES.md §12) | Status after this change |
|---|---|
| Commit-time branch recovery wastes full ROB depth | **Fixed** — recovery fires at execute time |
| TAGE FIFO uses BTB-hit as push gate | Unchanged — still a known limitation |
| Small TAGE tables | Unchanged |
| Single-issue | Unchanged |
| In-order conservative LSQ | Unchanged |
