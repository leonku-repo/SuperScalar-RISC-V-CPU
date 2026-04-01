# RTL_TEMPLATE — Design Notes

---

## What This Is

A Verilator-based verification environment for a multi-cycle in-order RV32I CPU.
The CPU is verified against a formal ISA reference model (riscv-formal's `rvfimon.v`)
via the RVFI (RISC-V Formal Interface) protocol.

---

## What We Built / Changed

### 1. Base CPU (`rtl/cpu.sv`)
Multi-cycle in-order state machine implementing RV32I:
- States: `s_reset → s_fetch → s_decode → s_lui / s_auipc / s_jal / s_jalr / s_br / s_load / s_store / s_ri / s_rr → s_fetch`
- Reset vector: `0x60000000`
- Halt instruction: `slti x0, x0, -256` (`0xF0002013`) — goes through `s_ri`, commits normally
- Regfile has **registered reads** (1-cycle latency)
- Internal `monitor_*` wires expose RVFI signals without adding ports

### 2. Split Instruction / Data Memory Ports
The CPU was originally designed with a **single unified memory port** (`mem_*`).
We split it into two independent ports:

| Port | Signals | Used in state |
|------|---------|---------------|
| `imem` | `imem_addr`, `imem_read`, `imem_rdata`, `imem_resp` | `s_fetch` |
| `dmem` | `dmem_addr`, `dmem_read`, `dmem_write`, `dmem_wmask`, `dmem_rdata`, `dmem_wdata`, `dmem_resp` | `s_load`, `s_store` |

The C++ testbench maintains **two separate memory maps** (`imem_memory`, `dmem_memory`),
both initialized from the same `memory_4.lst` file at startup. This ensures:
- `.text` (code) is available to imem fetches
- `.data` (initialized globals) is available to dmem loads
- Writes go to `dmem_memory` only — imem is read-only

### 3. Memory Model Improvements (`sim/top_tb.cpp`)

Several improvements were made to `eval_magic_mem()` to make it more realistic,
inspired by the `magic_dual_port.sv` design from the VCS-based pipeline project:

**a. Gated resp — resp is 0 when idle**
Previously `imem_resp` and `dmem_resp` were always 1. Now they are only asserted
while a request is active and cleared to 0 otherwise. `rdata` returns `0xDEADBEEF`
when idle (substitute for `'x` — Verilator has no X state).

**b. Configurable response latency (`MEM_DELAY`)**
`eval_magic_mem()` now runs on **posedge** (after `eval()`). A counter counts
posedges from the moment a request is latched. When `counter >= MEM_DELAY`, the
response fires. The CPU sees the response on the next posedge.

| `MEM_DELAY` | Posedges in `s_fetch` | When CPU sees resp |
|---|---|---|
| 0 | 1 | posedge N+1 |
| 1 | 2 | posedge N+2 |
| 2 | 3 | posedge N+3 |

Each port has independent pending state (`imem_pending`, `imem_counter`,
`dmem_pending`, `dmem_counter`). Writes are committed to `dmem_memory` when the
counter fires, not when the request is first seen.

**c. imem alignment check**
When `imem_read=1`, `imem_addr[1:0]` is asserted to be `2'b00`. All RV32I
instructions are 32-bit aligned. A misaligned fetch address is always a CPU bug
and causes an immediate simulation exit with an error message.

**d. Code structure**
Pending state is updated first (no `dut->` writes). A local `resp_ready` flag
is set when the counter fires. All `dut->` output assignments happen in one place
at the end of each port's block.

### 4. VCD Windowing (`sim/top_tb.cpp` + `sim/Makefile`)
By default the simulation runs **without producing any VCD file** (fast, no disk usage).
When a failure occurs, the cycle number is printed. You then re-run with a window:

```
make run PROG=... LOW=<cycle-N> HIGH=<cycle+5>
```

Only cycles in `[LOW, HIGH]` are dumped to `wave.vcd`. Keeps VCD files small even for
long Coremark runs.

### 5. Cycle Counter Fix
The cycle number printed on halt/error is derived from `sim_time / 2 - 1` **after** both
ticks complete. This ensures it is consistent with the VCD gating logic inside `tick()`
(which also uses `sim_time / 2`). Reset cycles are included in the count — the first
execution cycle after `do_reset(3)` is reported as cycle 3, not cycle 0.

### 6. `make help`
Added a help target that prints the full debugging workflow:
```
make help
```

### 7. Random Testbench (`sim/top_tb.cpp`)

A random testbench mode was added directly inside the C++ driver as an alternative
to loading a pre-assembled program. When enabled, `eval_magic_mem()` is replaced by
`eval_random_tb()` which serves randomly generated valid RV32I instructions to the
CPU on every imem fetch, for any fetch address. The RVFI monitor and ISA checker
(`rvfimon.v`) remain fully active throughout, catching any misbehavior.

**Why C++ rather than a SystemVerilog random class?**
Verilator does not support SV constrained randomization (`rand`, `constraint`,
`randomize()`). The C++ driver is also the memory model, making it the natural
home for on-the-fly instruction generation. Any fetch address — including jump
targets from JAL/JALR/Branch — gets a valid instruction immediately, with no
pre-generated file size limit.

**How it connects:**
```
eval_magic_mem()
  └─ if (RANDOM_TB) → eval_random_tb(); return;
                       ├─ imem: gen_rand_instr() → imem_pdata
                       │        same MEM_DELAY counter as normal mode
                       └─ dmem: rand() → dmem_pdata (reads)
                                writes acknowledged, discarded
```
`eval_random_tb()` reuses the same `imem_pending/imem_counter/dmem_pending/
dmem_counter` globals as `eval_magic_mem()`, so the MEM_DELAY latency behaviour
is identical in both modes.

**Instruction generation (`gen_rand_instr()`):**

Three phases, in order of `rtb_fetch_count`:

| Phase | Fetch count | What is returned |
|-------|------------|-----------------|
| Init  | 0–31       | `LUI xN, rand_imm` — seeds all 32 registers with non-X values |
| Random | 32 – 32+N-1 | Random valid RV32I instruction (see below) |
| Halt  | ≥ 32+N     | `0xF0002013` — `slti x0, x0, -256` (halt instruction) |

The init phase is necessary because after reset all registers except x0 are X.
The RVFI monitor X-checks would immediately fire if an R-type instruction read an
uninitialized register. LUI never reads rs1/rs2, so it safely initializes every
register before random instructions begin.

Random instructions are drawn uniformly from whichever types are enabled in
`RTB_ENABLE[9]`. All encodings are constrained to produce legal instructions only:

| Type | Constraints |
|------|-------------|
| LUI, AUIPC | none — all 20-bit immediates valid |
| JAL | offset nonzero, bit 0 = 0 (word-aligned, no self-loop) |
| JALR | funct3=0 per spec |
| Branch | funct3 ∈ {BEQ,BNE,BLT,BGE,BLTU,BGEU}; offset nonzero, bit 0 = 0 |
| OP-IMM | funct7=0 for SLLI; funct7 ∈ {0,0x20} for SRLI/SRAI |
| OP | funct7 ∈ {0,0x20} only for ADD/SUB and SRL/SRA; 0 elsewhere |
| Load | funct3 ∈ {LB,LH,LW,LBU,LHU}; rs1=x0; imm aligned per access width |
| Store | funct3 ∈ {SB,SH,SW}; rs1=x0; imm aligned per access width |

Loads and stores use `rs1=x0` so the effective address equals the sign-extended
immediate. Combined with the alignment constraints on the immediate, this guarantees
addresses never cross a word boundary (which this CPU cannot handle correctly).

Offsets for JAL and Branch are forced nonzero to prevent accidentally generating a
branch-to-self, which the monitor would interpret as an infinite-loop halt and
terminate the simulation early.

**Configuration variables (all in `sim/top_tb.cpp`):**

| Variable | Default | Meaning |
|----------|---------|---------|
| `RANDOM_TB` | `false` | `true` = enable random mode |
| `RTB_MAX_INSTRS` | `100000` | Random instructions before halt injection. `0` = unlimited (runs to MAX_CYCLES) |
| `RTB_ENABLE[9]` | all `true` | Per-type on/off switch — useful for early-stage testing |

**Important:** `RANDOM_TB` and all RTB settings are C++ compile-time variables.
Any change to them requires `make build` before the new value takes effect.
`make run` alone does **not** recompile.

---

## File Structure

```
RTL_TEMPLATE/
│
├── pkg/
│   └── types.sv              rv32i_types package (opcodes, funct3/7 enums)
│                             Must be listed FIRST in Verilator source order.
│
├── rtl/
│   └── cpu.sv                The CPU under verification. Two memory ports:
│                             imem (fetch) and dmem (load/store).
│                             Internal monitor_* wires expose RVFI signals.
│
├── hvl/
│   ├── mon_itf.sv            8-channel RVFI interface bundle definition
│   ├── rvfi_reference.json   Maps RVFI signal names → dut.monitor_* paths
│   ├── rvfi_reference.svh    GENERATED — always_comb wiring block (do not edit)
│   ├── ventilator_monitor.sv X-checks, halt detection, IPC measurement,
│   │                         commit.log writer, array→flat bus packing
│   └── rvfimon.v             9757-line ISA reference model (riscv-formal)
│                             Generated with: -i rv32imc -r 16 -a -c 8
│
├── tb/
│   └── top_tb.sv             Verilator SV top. Explicitly declares all ports
│                             so C++ can access them. Instantiates cpu (as dut),
│                             mon_itf, ventilator_monitor. Includes rvfi_reference.svh.
│
├── sim/
│   ├── Makefile              Main build/run orchestrator
│   ├── top_tb.cpp            C++ Verilator driver. Two magic memory maps.
│   │                         VCD windowing. Halt/error detection.
│   │                         Random testbench (RANDOM_TB, RTB_MAX_INSTRS,
│   │                         RTB_ENABLE[9], gen_rand_instr, eval_random_tb).
│   └── state.filter          GTKWave translate filter for cpu.sv state enum.
│                             Right-click signal → Data Format →
│                             Translate Filter File → point here.
│
├── bin/
│   ├── generate_memory_file.sh  Assembles/compiles .s/.c/.elf → memory_4.lst
│   ├── link.ld               Linker script: .text at 0x60000000, stack at 0x80000000
│   ├── startup.s             C runtime (_start, BSS zero, sp=0x80000000, call main)
│   └── rvfi_reference.py     JSON → .svh generator (run by make gen_svh)
│
├── testcode/
│   ├── sanity.s              3 ADDIs + halt — simplest test
│   ├── easycase.s            Basic instruction mix
│   ├── br.s                  Branch test
│   └── coremark_rv32i.elf    Coremark benchmark (pre-built RV32I ELF)
│
├── lint/
│   └── Makefile              Verilator --lint-only on pkg/ + rtl/ only
│
└── waivers.verilator         -Wno-* flags: EOFNEWLINE, DECLFILENAME, UNUSEDSIGNAL,
                              BLKSEQ, WIDTHTRUNC, TIMESCALEMOD, VARHIDDEN, etc.
```

---

## How Files Connect

```
testcode/sanity.s
    │  bin/generate_memory_file.sh
    ▼
sim/sim/memory_4.lst  ──────────────────────────────────────┐
                                                             │ initmem()
                                                             ▼
                                              imem_memory (std::map)
                                              dmem_memory (std::map)
                                                             │
                         ┌───────────────────────────────────┘
                         │  eval_magic_mem() on posedge (after eval())
                         ▼
┌────────────────────────────────────────────────────────┐
│                     top_tb.sv                          │
│                                                        │
│  cpu dut ──── imem_addr/read ──────────► imem_memory  │
│           ◄── imem_rdata/resp ──────────              │
│                                                        │
│           ──── dmem_addr/read/write ───► dmem_memory  │
│           ◄── dmem_rdata/resp ──────────              │
│                                                        │
│  dut.monitor_* (internal wires, not ports)             │
│       │                                                │
│       │  rvfi_reference.svh (always_comb)              │
│       ▼                                                │
│  mon_itf (8-channel RVFI bundle)                       │
│       │                                                │
│       ▼                                                │
│  ventilator_monitor                                    │
│    ├─ X-checks on all RVFI signals                     │
│    ├─ Halt detection                                   │
│    ├─ IPC measurement (Coremark markers)               │
│    ├─ commit.log writer                                │
│    └─ rvfimon.v (ISA checker → errcode)               │
│                                                        │
│  halt ──────────────────────────────► C++ exit(0)     │
│  error ─────────────────────────────► C++ exit(1)     │
└────────────────────────────────────────────────────────┘
```

---

## How to Run

### First time (or after RTL changes)
```bash
cd RTL_TEMPLATE/sim/
make build
```

### Run a test (no waveform)
```bash
make run PROG=../testcode/sanity.s
make run PROG=../testcode/coremark_rv32i.elf
```

### Debugging a failure with waveforms
```bash
# Step 1 — find the failure cycle (no VCD, fast)
make run PROG=../testcode/mytest.s
# → prints: ERROR at cycle 1234

# Step 2 — re-run with VCD window around the failure
make run PROG=../testcode/mytest.s LOW=1150 HIGH=1240
# → writes wave.vcd covering only cycles 1150–1240

# Step 3 — open waveform
make wave
```

### Random testbench
```bash
# Step 1 — configure in sim/top_tb.cpp:
#   static bool RANDOM_TB      = true;
#   static int  RTB_MAX_INSTRS = 100000;
#   static bool RTB_ENABLE[9]  = { true, false, false, ... };  // pick types

# Step 2 — rebuild (required any time top_tb.cpp changes)
make build

# Step 3 — run (PROG is assembled but ignored in random mode)
make run PROG=../testcode/sanity.s
# → 32 LUI inits + 100000 random instrs + halt injection → SIMULATION PASSED
```

### Other targets
```bash
make sim   PROG=...            # build + run in one step
make lint                      # (from lint/) RTL-only lint check
make clean                     # delete obj_dir, wave.vcd, logs
make info                      # print all Makefile variable values
make help                      # print full workflow reminder
```

### VCD window sizing guide
| Program | Recommended window |
|---------|-------------------|
| Simple .s tests | 50–100 cycles |
| Coremark first look | 1000 cycles |
| Coremark deep debug | 5000 cycles |

---

## Design Choices

### Split imem / dmem
The CPU has two independent memory ports. The C++ testbench maintains two separate
`std::map` instances. Both are initialized from the same `memory_4.lst` at startup
so that `.data` section globals are available to dmem, and `.text` is available to imem.
Writes go to `dmem_memory` only — imem is permanently read-only.

### Magic memory (configurable latency)
`eval_magic_mem()` runs on **posedge**, after `eval()`. Each port has independent
pending state. When `imem_read` or `dmem_read/write` is seen and no request is
already pending, the request is latched (address, data, write mask) and a counter
starts. After `MEM_DELAY` posedges the response fires — `resp` asserts for one
posedge and `rdata` carries the data. On all other cycles `resp=0` and
`rdata=0xDEADBEEF`.

The CPU sees the response on the posedge **after** `eval_magic_mem` fires, giving
`MEM_DELAY + 1` total posedges of memory latency as seen by the CPU.

`MEM_DELAY` is a compile-time constant in `top_tb.cpp` (default 2). Setting it to 0
gives the minimum latency (1 fetch cycle per instruction). Setting it higher tests
that the CPU correctly stalls in `s_fetch`/`s_load`/`s_store` for arbitrary cycles.

The CPU's state machine naturally handles any latency — it stays in the memory-wait
state until `resp=1` arrives. No changes to `cpu.sv` are required to change latency.

### No RVFI ports on cpu.sv
RVFI signals are internal wires (`monitor_*`) inside `cpu.sv`. The testbench accesses
them via Verilator hierarchical references (`dut.monitor_valid`, etc.) rather than
adding RVFI as output ports. This keeps the CPU interface clean and matches how
`mp_ooo` does it.

### VCD windowing (not always-on)
Running without VCD is significantly faster and produces no disk usage. For long runs
like Coremark, always-on VCD would produce multi-gigabyte files. The LOW/HIGH window
approach lets you capture only the cycles you need, chosen after seeing which cycle
the failure occurred on.

### RVFI 8-channel interface
`mon_itf` and `rvfimon.v` support 8 retirement channels (for future OOO use).
Currently only channel 0 is used — channels 1–7 are tied to `'0` in
`rvfi_reference.svh`.

### Random testbench (C++ on-the-fly generation)
The random testbench lives entirely inside the C++ driver rather than as a separate
SV module, for two reasons. First, Verilator does not support SV constrained
randomization. Second, the C++ driver already owns the memory interface — intercepting
imem/dmem responses there is the natural integration point with zero changes to any SV
file.

Generating instructions on-the-fly means every fetch address (including all jump
targets) gets a valid instruction immediately. This is fundamentally different from
pre-generating a `.s` file, where any jump outside the pre-generated range returns
0 or garbage.

Branch and JAL offsets are forced nonzero to prevent branch-to-self instructions.
The monitor's `pc_rdata == pc_wdata` halt condition would otherwise fire immediately
on a self-branching instruction, terminating the test far earlier than intended.

Loads and stores use `rs1=x0` so alignment constraints on the immediate directly
control the effective address. With a non-zero `rs1`, the runtime register value
(which could be anything after the random sequence runs for a while) would add to
the immediate unpredictably, potentially producing cross-word-boundary accesses that
the CPU handles incorrectly (silent data corruption, not a trap).

### memory_4.lst format
4-byte word addressability. Header `@XXXXXXXX` is the word base address
(`0x60000000 >> 2 = 0x18000000`). The C++ driver indexes by `byte_addr >> 2`.

---

## RVFI Signal Assignments (cpu.sv)

| Monitor signal | Source |
|----------------|--------|
| `monitor_valid` | `commit` — fires once per instruction retirement |
| `monitor_order` | `order` — monotonically increasing retirement counter |
| `monitor_inst` | `inst` — raw 32-bit instruction word |
| `monitor_rs1_addr` | `rs1_s` |
| `monitor_rs2_addr` | `rs2_s` |
| `monitor_rs1_rdata` | `rs1_v` |
| `monitor_rs2_rdata` | `rs2_v` |
| `monitor_rd_addr` | `regf_we ? rd_s : 5'd0` |
| `monitor_rd_wdata` | `rd_v` |
| `monitor_pc_rdata` | `pc` |
| `monitor_pc_wdata` | `pc_next` |
| `monitor_mem_addr` | `dmem_addr` |
| `monitor_mem_rmask` | `dmem_rmask` |
| `monitor_mem_wmask` | `dmem_wmask` |
| `monitor_mem_rdata` | `dmem_rdata` |
| `monitor_mem_wdata` | `dmem_wdata` |

---

## Halt / IPC Detection (ventilator_monitor.sv)

**Halt patterns** (any of these causes `halt = 1`):
- `pc_rdata == pc_wdata` — infinite loop
- `inst == 32'h00000063` — `BEQ x0, x0, 0`
- `inst == 32'h0000006f` — `JAL x0, 0`
- `inst == 32'hF0002013` — `slti x0, x0, -256` (our halt instruction)

**IPC measurement markers** (Coremark):
- `32'h00102013` — start marker (resets `inst_count` and `cycle_count`)
- `32'h00202013` — stop marker (prints segment IPC)
- If markers never appear: prints total IPC in `final` block
