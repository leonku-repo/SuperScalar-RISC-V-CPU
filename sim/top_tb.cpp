// C++ Verilator driver for top_tb.
// Based on hvl/ventilator/top_tb.cpp, simplified for magic (instant) memory.

#include <cstdint>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include <unistd.h>
#include <vector>

static const char* GOLDEN_LOG_PATH = "golden_log.bin";

#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtop_tb.h"
#include "Vtop_tb_top_tb.h"
#include "Vtop_tb_cpu.h"
#include "Vtop_tb_cpu_midcore.h"
#include "Vtop_tb_cpu_execute.h"
#include "Vtop_tb_lsq.h"

// ---------------------------------------------------------------------------
// Simulation limits
// ---------------------------------------------------------------------------
#define MAX_CYCLES 10000000

// ---------------------------------------------------------------------------
// Globals (mirrors reference style)
// ---------------------------------------------------------------------------
static Vtop_tb*      dut     = nullptr;
static VerilatedVcdC* m_trace = nullptr;
static uint64_t       sim_time = 0;

static const char*   exe_path  = nullptr;   // argv[0] — for re-exec on error
static const char*   mem_path  = nullptr;   // argv[1] — memory file
static const char*   prog_path = nullptr;   // argv[2] — original PROG (cache key)
static bool          is_rerun  = false;     // true when LOW/HIGH already provided (argc==5)
static int           last_commit_cycle = 0; // cycle of the most recent commit
static const int     VCD_WIN_PAD = 500;  // extra cycles of padding around the golden↔DUT commit span
static bool          golden_phase_active = false; // true during Phase 1 (suppress RVFI exits)

// ---------------------------------------------------------------------------
// vl_stop: intercepts SV $stop (fired by RVFI monitor on assertion failure).
// Verilator's default maps $stop -> abort(), losing the cycle number.
// This override prints the cycle and re-run hint before exiting cleanly.
// ---------------------------------------------------------------------------
void vl_stop(const char* filename, int linenum, const char* hier) VL_MT_UNSAFE {
    // During Phase 1 the RVFI monitor watches the DUT but we only care about
    // golden commits. Ignore any $stop so the golden phase can finish cleanly.
    if (golden_phase_active) return;

    int cycle = (int)(sim_time / 2) - 1;
    int lo    = std::max(0, last_commit_cycle - VCD_WIN_PAD);
    int hi    = last_commit_cycle + VCD_WIN_PAD;

    std::cerr << "\nERROR at cycle " << cycle
              << "  ($stop from " << filename << ":" << linenum << ")\n";

    if (m_trace) { m_trace->close(); m_trace = nullptr; }

    char ans = 'n';
    if (!is_rerun) {
        std::cerr << "\033[1;32mRe-run with VCD window LOW=" << lo << " HIGH=" << hi << "? [y/n]: \033[0m";
        std::cin >> ans;
    }

    if ((ans == 'y' || ans == 'Y') && exe_path && mem_path) {
        std::string lo_s = std::to_string(lo);
        std::string hi_s = std::to_string(hi);
        const char* args[] = { exe_path, mem_path, prog_path, lo_s.c_str(), hi_s.c_str(), nullptr };
        execv(exe_path, const_cast<char* const*>(args));
        std::cerr << "execv failed\n";  // only reached if execv fails
    }

    exit(EXIT_FAILURE);
}

// VCD window: only dump cycles in [low_cycle, high_cycle].
// Both default to -1 (no VCD).
static int low_cycle  = -1;
static int high_cycle = -1;

// Separate instruction and data memory maps.
// Both are initialized from the same memory_4.lst so that .data section
// globals are available to dmem loads, and .text is available to imem fetches.
static std::map<uint32_t, uint32_t> imem_memory;
static std::map<uint32_t, uint32_t> dmem_memory;

// Golden core has its own dmem so DUT's wrong stores don't corrupt golden loads.
// Initialized to the same content as dmem_memory in initmem().
static std::map<uint32_t, uint32_t> golden_dmem_memory;

// Snapshot of dmem at load time — used to restore state before Phase 2.
static std::map<uint32_t, uint32_t> initial_dmem_memory;

// ---------------------------------------------------------------------------
// Memory response delays (posedge cycles after the request).
//   DELAY = N  →  CPU sees resp N+1 posedges after the request.
//
// IMEM: fixed (I-cache always hits for small benchmarks).
//
// DMEM: set DMEM_PROBABILISTIC = false to use a flat DMEM_DELAY every
//       transaction, or true to draw a random latency per transaction:
//   DMEM_L1_PCT %            → DMEM_L1_DELAY ( 4-cycle total,  L1 hit)
//   DMEM_L2_PCT %            → DMEM_L2_DELAY (12-cycle total,  L2 hit)
//   100-L1_PCT-L2_PCT %      → DMEM_MM_DELAY (80-cycle total,  DRAM  )
// ---------------------------------------------------------------------------
static int  IMEM_DELAY         = 1;     // fixed: 2-cycle total

static bool DMEM_PROBABILISTIC = true;  // false = constant delay every txn
static int  DMEM_DELAY         = 3;     // flat delay  (DMEM_PROBABILISTIC=false)
static int  DMEM_L1_PCT        = 90,  DMEM_L1_DELAY = 3;   // L1: 90% → 4 cyc
static int  DMEM_L2_PCT        =  8,  DMEM_L2_DELAY = 11;  // L2:  8% → 12 cyc
static int                            DMEM_MM_DELAY  = 79;  // MM:  2% → 80 cyc

static int sample_dmem_delay() {
    if (!DMEM_PROBABILISTIC) return DMEM_DELAY;
    int r = rand() % 100;
    if (r < DMEM_L1_PCT)                return DMEM_L1_DELAY;
    if (r < DMEM_L1_PCT + DMEM_L2_PCT) return DMEM_L2_DELAY;
    return DMEM_MM_DELAY;
}

// Set to true to enable random testbench mode.
// imem returns random valid RV32I instructions for any fetch address.
// dmem reads return a random word; writes are acknowledged and discarded.
// The first 32 fetches return LUI xN instructions to initialize all registers.
static bool RANDOM_TB = false;

// Number of random instructions to run before injecting the halt instruction.
// The first 32 fetches are always LUI init instructions and do not count.
// Set to 0 for unlimited (simulation ends at MAX_CYCLES timeout instead).
static int RTB_MAX_INSTRS = 100000;

// Enable/disable individual instruction types for the random testbench.
// Index matches the case numbers in gen_rand_instr():
static bool RTB_ENABLE[9] = {
    true,   // 0: LUI       — load upper immediate (rd = imm << 12)
    true,   // 1: AUIPC     — add upper immediate to PC (rd = PC + imm<<12)
    true,   // 2: JAL       — jump and link (rd = PC+4, PC += imm)
    true,   // 3: JALR      — jump and link register (rd = PC+4, PC = rs1+imm)
    true,   // 4: Branch    — BEQ, BNE, BLT, BGE, BLTU, BGEU
    true,   // 5: OP-IMM    — ADDI, SLTI, SLTIU, XORI, ORI, ANDI, SLLI, SRLI, SRAI
    true,   // 6: OP        — ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND
    true,   // 7: Load      — LB, LH, LW, LBU, LHU  (rs1=x0, addr=imm)
    true,   // 8: Store     — SB, SH, SW             (rs1=x0, addr=imm)
};

// imem pipeline state
static bool     imem_pending = false;
static int      imem_counter = 0;
static uint32_t imem_pdata   = 0xDEADBEEFu;

// dmem pipeline state
static bool     dmem_pending   = false;
static int      dmem_counter   = 0;
static int      dmem_cur_delay = 3;   // sampled per transaction
static uint32_t dmem_pdata   = 0xDEADBEEFu;
static bool     dmem_pwrite  = false;
static uint32_t dmem_pwaddr  = 0;
static uint8_t  dmem_pwmask  = 0;
static uint32_t dmem_pwdata  = 0;

// Golden core memory pipeline state (separate from DUT)
static bool     golden_imem_pending = false;
static int      golden_imem_counter = 0;
static uint32_t golden_imem_pdata   = 0xDEADBEEFu;
static bool     golden_dmem_pending = false;
static int      golden_dmem_counter = 0;
static uint32_t golden_dmem_pdata   = 0xDEADBEEFu;
static bool     golden_dmem_pwrite  = false;
static uint32_t golden_dmem_pwaddr  = 0;
static uint8_t  golden_dmem_pwmask  = 0;
static uint32_t golden_dmem_pwdata  = 0;

// ---------------------------------------------------------------------------
// Random testbench helpers
// ---------------------------------------------------------------------------

// Counts how many imem responses have fired. Used to drive the init phase.
static int rtb_fetch_count = 0;

// gen_rand_instr: returns a random valid RV32I instruction word.
// The first 32 calls return LUI x0..x31 to seed all registers with non-X values.
// Loads and stores always use rs1=x0 so the effective address equals the
// sign-extended immediate, which the constraints below keep aligned.
static uint32_t gen_rand_instr()
{
    // --- init phase: LUI xN, rand_imm ---
    if (rtb_fetch_count < 32) {
        uint32_t rd  = (uint32_t)rtb_fetch_count;
        uint32_t imm = (uint32_t)rand() & 0xFFFFFu;
        return (imm << 12) | (rd << 7) | 0x37u;   // LUI rd, imm
    }

    // --- halt after RTB_MAX_INSTRS random instructions (0 = unlimited) ---
    if (RTB_MAX_INSTRS > 0 && rtb_fetch_count >= 32 + RTB_MAX_INSTRS)
        return 0xF0002013u;   // slti x0, x0, -256 — halt instruction

    uint32_t rd  = (uint32_t)rand() % 32;
    uint32_t rs1 = (uint32_t)rand() % 32;
    uint32_t rs2 = (uint32_t)rand() % 32;
    uint32_t imm, f3, f7, j, b;

    // Build list of enabled types and pick uniformly from them.
    int enabled[9], count = 0;
    for (int i = 0; i < 9; i++)
        if (RTB_ENABLE[i]) enabled[count++] = i;
    if (count == 0) return 0x13u;   // all disabled → NOP fallback

    switch (enabled[rand() % count]) {

    case 0: // LUI
        imm = (uint32_t)rand() & 0xFFFFFu;
        return (imm << 12) | (rd << 7) | 0x37u;

    case 1: // AUIPC
        imm = (uint32_t)rand() & 0xFFFFFu;
        return (imm << 12) | (rd << 7) | 0x17u;

    case 2: // JAL — J-type, bit 0 always 0
        do { j = (uint32_t)rand() & 0x1FFFFEu; } while (j == 0);  // 21-bit even, nonzero
        return (((j>>20)&1u)<<31) | (((j>>1)&0x3FFu)<<21) |
               (((j>>11)&1u)<<20) | (((j>>12)&0xFFu)<<12) |
               (rd<<7) | 0x6Fu;

    case 3: // JALR
        imm = (uint32_t)rand() & 0xFFFu;
        return (imm<<20) | (rs1<<15) | (rd<<7) | 0x67u;

    case 4: { // Branch — B-type, bit 0 always 0
        static const uint32_t bf3[] = {0,1,4,5,6,7};
        f3 = bf3[rand() % 6];
        do { b = (uint32_t)rand() & 0x1FFEu; } while (b == 0);  // 13-bit even, nonzero
        return (((b>>12)&1u)<<31) | (((b>>5)&0x3Fu)<<25) |
               (rs2<<20) | (rs1<<15) | (f3<<12) |
               (((b>>1)&0xFu)<<8) | (((b>>11)&1u)<<7) | 0x63u;
    }

    case 5: // OP-IMM (I-type arithmetic)
        f3  = (uint32_t)rand() % 8;
        if (f3 == 1) {                              // SLLI: funct7=0, shamt[4:0]
            imm = (uint32_t)rand() & 0x1Fu;
        } else if (f3 == 5) {                       // SRLI/SRAI
            f7  = (rand() % 2) ? 0x20u : 0x00u;
            imm = (f7 << 5) | ((uint32_t)rand() & 0x1Fu);
        } else {
            imm = (uint32_t)rand() & 0xFFFu;
        }
        return (imm<<20) | (rs1<<15) | (f3<<12) | (rd<<7) | 0x13u;

    case 6: { // OP (R-type)
        f3 = (uint32_t)rand() % 8;
        f7 = ((f3 == 0 || f3 == 5) && (rand() % 2)) ? 0x20u : 0x00u;
        return (f7<<25) | (rs2<<20) | (rs1<<15) | (f3<<12) | (rd<<7) | 0x33u;
    }

    case 7: { // LOAD — rs1=x0, aligned imm
        static const uint32_t lf3[] = {0,1,2,4,5};   // lb,lh,lw,lbu,lhu
        f3 = lf3[rand() % 5];
        if      (f3 == 2)            imm = ((uint32_t)rand() & 0x1FFu) << 2;  // LW
        else if (f3 == 1 || f3 == 5) imm = ((uint32_t)rand() & 0x3FFu) << 1;  // LH/LHU
        else                         imm = (uint32_t)rand() & 0xFFFu;          // LB/LBU
        imm &= 0xFFFu;
        return (imm<<20) | (0u<<15) | (f3<<12) | (rd<<7) | 0x03u;   // rs1=x0
    }

    case 8: { // STORE — rs1=x0, aligned imm
        static const uint32_t sf3[] = {0,1,2};        // sb,sh,sw
        f3 = sf3[rand() % 3];
        if      (f3 == 2) imm = ((uint32_t)rand() & 0x1FFu) << 2;   // SW
        else if (f3 == 1) imm = ((uint32_t)rand() & 0x3FFu) << 1;   // SH
        else              imm = (uint32_t)rand() & 0xFFFu;           // SB
        imm &= 0xFFFu;
        return (((imm>>5)&0x7Fu)<<25) | (rs2<<20) | (0u<<15) |
               (f3<<12) | ((imm&0x1Fu)<<7) | 0x23u;                  // rs1=x0
    }

    default:
        return 0x13u;   // NOP (ADDI x0, x0, 0)
    }
}

// eval_random_tb: random-mode drop-in for eval_magic_mem.
// Structurally identical (same pending state, same IMEM_DELAY/DMEM_DELAY) but:
//   imem → gen_rand_instr() instead of imem_memory lookup
//   dmem reads  → random word; dmem writes → acknowledged, discarded
static void eval_random_tb()
{
    // --- imem ---
    bool imem_resp_ready = false;

    if (dut->imem_read && !imem_pending) {
        imem_pdata   = gen_rand_instr();
        imem_pending = true;
        imem_counter = 0;
    }
    if (imem_pending) {
        if (imem_counter >= IMEM_DELAY) {
            imem_resp_ready = true;
            imem_pending    = false;
            imem_counter    = 0;
            rtb_fetch_count++;
        } else {
            imem_counter++;
        }
    }
    dut->imem_resp  = imem_resp_ready;
    dut->imem_rdata = imem_resp_ready ? imem_pdata : 0xDEADBEEFu;

    // --- dmem ---
    bool dmem_resp_ready = false;

    if ((dut->dmem_read || dut->dmem_write) && !dmem_pending) {
        dmem_pwrite     = dut->dmem_write;
        dmem_pdata      = (uint32_t)rand();   // random read data; writes are discarded
        dmem_cur_delay  = sample_dmem_delay();
        dmem_pending    = true;
        dmem_counter    = 0;
    }
    if (dmem_pending) {
        if (dmem_counter >= dmem_cur_delay) {
            dmem_resp_ready = true;
            dmem_pending    = false;
            dmem_counter    = 0;
        } else {
            dmem_counter++;
        }
    }
    dut->dmem_resp  = dmem_resp_ready;
    dut->dmem_rdata = (dmem_resp_ready && !dmem_pwrite) ? dmem_pdata : 0xDEADBEEFu;
}

// ---------------------------------------------------------------------------
// initmem: load memory_4.lst into the magic memory map
// ---------------------------------------------------------------------------
void initmem(const char* path)
{
    std::ifstream f(path);
    if (!f) {
        std::cerr << "ERROR: cannot open memory file: " << path << "\n";
        exit(EXIT_FAILURE);
    }

    std::string line;

    // First line must be @XXXXXXXX — the word base address in hex
    if (!std::getline(f, line) || line.empty() || line[0] != '@') {
        std::cerr << "ERROR: memory file missing @XXXXXXXX header\n";
        exit(EXIT_FAILURE);
    }
    uint32_t base = (uint32_t)std::stoul(line.substr(1), nullptr, 16);

    // Each subsequent line is one 32-bit word in hex — load into both maps
    uint32_t start = base;
    while (std::getline(f, line)) {
        if (line.empty()) continue;
        uint32_t word = (uint32_t)std::stoul(line, nullptr, 16);
        imem_memory[base]        = word;
        dmem_memory[base]        = word;
        golden_dmem_memory[base] = word;
        base++;
    }

    initial_dmem_memory = dmem_memory;   // snapshot for Phase 2 reset

    std::cout << "Loaded memory from: " << path
              << "  (base word addr = 0x" << std::hex << start
              << ", words = " << std::dec << (base - start) << ")\n";
}

// ---------------------------------------------------------------------------
// eval_magic_mem: runs on posedge (after eval()).
// Latches a new request when none is pending, counts IMEM_DELAY/DMEM_DELAY posedges,
// then fires resp. The CPU sees resp on the posedge after firing.
//
// IMEM/DMEM_DELAY=0: fire same posedge as request  → CPU sees resp posedge N+1
// IMEM/DMEM_DELAY=1: fire one posedge later        → CPU sees resp posedge N+2
//                    (s_fetch visible at posedge N and N+1)
// ---------------------------------------------------------------------------
void eval_magic_mem()
{
    if (dut->clk != 1) return;  // posedge only

    // flush memory model state during reset so no in-flight response leaks
    // into the first post-reset posedge
    if (dut->rst) {
        imem_pending    = false;
        imem_counter    = 0;
        dut->imem_resp  = 0;
        dut->imem_rdata = 0xDEADBEEFu;
        dmem_pending    = false;
        dmem_counter    = 0;
        dut->dmem_resp  = 0;
        dut->dmem_rdata = 0xDEADBEEFu;
        return;
    }

    if (RANDOM_TB) { eval_random_tb(); return; }

    // -----------------------------------------------------------------------
    // Instruction memory — update pending state
    // -----------------------------------------------------------------------
    bool imem_resp_ready = false;

    if (dut->imem_read && !imem_pending) {
        if (dut->imem_addr & 0x3u) {
            std::cerr << "ERROR: imem_addr 0x" << std::hex << dut->imem_addr
                      << std::dec << " is not 4-byte aligned\n";
            exit(EXIT_FAILURE);
        }
        uint32_t waddr = dut->imem_addr >> 2;
        auto it        = imem_memory.find(waddr);
        imem_pdata     = (it != imem_memory.end()) ? it->second : 0u;
        imem_pending   = true;
        imem_counter   = 0;
    }

    if (imem_pending) {
        if (imem_counter >= IMEM_DELAY) {
            imem_resp_ready = true;
            imem_pending    = false;
            imem_counter    = 0;
        } else {
            imem_counter++;
        }
    }

    // Drive imem outputs — one place only
    dut->imem_resp  = imem_resp_ready;
    dut->imem_rdata = imem_resp_ready ? imem_pdata : 0xDEADBEEFu;

    // -----------------------------------------------------------------------
    // Data memory — update pending state
    // -----------------------------------------------------------------------
    bool dmem_resp_ready = false;

    if ((dut->dmem_read || dut->dmem_write) && !dmem_pending) {
        dmem_pwrite  = dut->dmem_write;
        dmem_pwaddr  = dut->dmem_addr >> 2;
        dmem_pwmask  = dut->dmem_wmask;
        dmem_pwdata  = dut->dmem_wdata;
        dmem_pdata   = 0xDEADBEEFu;
        if (dut->dmem_read) {
            auto it = dmem_memory.find(dut->dmem_addr >> 2);
            dmem_pdata = (it != dmem_memory.end()) ? it->second : 0u;
        }
        dmem_cur_delay = sample_dmem_delay();
        dmem_pending   = true;
        dmem_counter   = 0;
    }

    if (dmem_pending) {
        if (dmem_counter >= dmem_cur_delay) {
            dmem_resp_ready = true;
            if (dmem_pwrite) {
                uint32_t& word = dmem_memory[dmem_pwaddr];
                for (int i = 0; i < 4; i++) {
                    if (dmem_pwmask & (1u << i)) {
                        uint32_t bval = (dmem_pwdata >> (8*i)) & 0xFFu;
                        word = (word & ~(0xFFu << (8*i))) | (bval << (8*i));
                    }
                }
            }
            dmem_pending = false;
            dmem_counter = 0;
        } else {
            dmem_counter++;
        }
    }

    // Drive dmem outputs — one place only
    dut->dmem_resp  = dmem_resp_ready;
    dut->dmem_rdata = (dmem_resp_ready && !dmem_pwrite) ? dmem_pdata : 0xDEADBEEFu;
}

// ---------------------------------------------------------------------------
// eval_golden_mem: same structure as eval_magic_mem but drives golden core
// memory ports and uses golden_dmem_memory (separate from DUT's dmem).
// Both cores share the same imem_memory (read-only program image).
// ---------------------------------------------------------------------------
void eval_golden_mem()
{
    if (dut->clk != 1) return;

    if (dut->rst) {
        golden_imem_pending         = false;
        golden_imem_counter         = 0;
        dut->golden_imem_resp       = 0;
        dut->golden_imem_rdata      = 0xDEADBEEFu;
        golden_dmem_pending         = false;
        golden_dmem_counter         = 0;
        dut->golden_dmem_resp       = 0;
        dut->golden_dmem_rdata      = 0xDEADBEEFu;
        return;
    }

    // imem — reads from shared imem_memory (same program as DUT)
    bool imem_resp_ready = false;
    if (dut->golden_imem_read && !golden_imem_pending) {
        uint32_t waddr        = dut->golden_imem_addr >> 2;
        auto it               = imem_memory.find(waddr);
        golden_imem_pdata     = (it != imem_memory.end()) ? it->second : 0u;
        golden_imem_pending   = true;
        golden_imem_counter   = 0;
    }
    if (golden_imem_pending) {
        if (golden_imem_counter >= IMEM_DELAY) {
            imem_resp_ready       = true;
            golden_imem_pending   = false;
            golden_imem_counter   = 0;
        } else {
            golden_imem_counter++;
        }
    }
    dut->golden_imem_resp  = imem_resp_ready;
    dut->golden_imem_rdata = imem_resp_ready ? golden_imem_pdata : 0xDEADBEEFu;

    // dmem — reads/writes golden_dmem_memory (independent from DUT's dmem)
    bool dmem_resp_ready = false;
    if ((dut->golden_dmem_read || dut->golden_dmem_write) && !golden_dmem_pending) {
        golden_dmem_pwrite  = dut->golden_dmem_write;
        golden_dmem_pwaddr  = dut->golden_dmem_addr >> 2;
        golden_dmem_pwmask  = dut->golden_dmem_wmask;
        golden_dmem_pwdata  = dut->golden_dmem_wdata;
        golden_dmem_pdata   = 0xDEADBEEFu;
        if (dut->golden_dmem_read) {
            auto it = golden_dmem_memory.find(dut->golden_dmem_addr >> 2);
            golden_dmem_pdata = (it != golden_dmem_memory.end()) ? it->second : 0u;
        }
        golden_dmem_pending = true;
        golden_dmem_counter = 0;
    }
    if (golden_dmem_pending) {
        if (golden_dmem_counter >= DMEM_DELAY) {
            dmem_resp_ready = true;
            if (golden_dmem_pwrite) {
                uint32_t& word = golden_dmem_memory[golden_dmem_pwaddr];
                for (int i = 0; i < 4; i++) {
                    if (golden_dmem_pwmask & (1u << i)) {
                        uint32_t bval = (golden_dmem_pwdata >> (8*i)) & 0xFFu;
                        word = (word & ~(0xFFu << (8*i))) | (bval << (8*i));
                    }
                }
            }
            golden_dmem_pending = false;
            golden_dmem_counter = 0;
        } else {
            golden_dmem_counter++;
        }
    }
    dut->golden_dmem_resp  = dmem_resp_ready;
    dut->golden_dmem_rdata = (dmem_resp_ready && !golden_dmem_pwrite) ? golden_dmem_pdata : 0xDEADBEEFu;
}

// ---------------------------------------------------------------------------
// Golden co-simulation commit comparison.
// Phase 1: golden runs to completion, all commits stored in golden_full_log.
// Phase 2: DUT runs and each commit is immediately compared against the log.
// ---------------------------------------------------------------------------
struct CommitSnap {
    uint32_t pc, inst;
    uint32_t rd_addr, rd_wdata;
    uint32_t mem_addr, mem_rmask, mem_wmask, mem_rdata, mem_wdata;
    int      cycle;   // commit cycle — used for VCD window suggestion
};

// Indexed by retirement order (0-based). Populated during Phase 1.
static std::vector<CommitSnap> golden_full_log;

static void golden_mismatch(uint64_t order, const CommitSnap& d, const CommitSnap& g)
{
    int span_lo = std::min(d.cycle, g.cycle);
    int span_hi = std::max(d.cycle, g.cycle);
    int lo = std::max(0, span_lo - VCD_WIN_PAD);
    int hi = span_hi + VCD_WIN_PAD;

    std::cerr << "\n\033[1;31m[GOLDEN MISMATCH] order=" << order
              << "  DUT cycle=" << d.cycle << "  GOLDEN cycle=" << g.cycle << "\033[0m\n";
    // Print every field; red = mismatch, green = match
    auto col = [](bool ok) { return ok ? "\033[0;32m" : "\033[1;31m"; };
    const char* rst = "\033[0m";

    std::cerr << std::hex;
    { bool ok = d.pc == g.pc;
      std::cerr << col(ok) << "  pc        DUT=0x" << d.pc   << "  GOLDEN=0x" << g.pc   << rst << "\n"; }
    { bool ok = d.inst == g.inst;
      std::cerr << col(ok) << "  inst      DUT=0x" << d.inst << "  GOLDEN=0x" << g.inst << rst << "\n"; }
    { bool ok = d.rd_addr == g.rd_addr && d.rd_wdata == g.rd_wdata;
      std::cerr << col(ok) << "  rd        DUT=x"  << std::dec << d.rd_addr << "=0x" << std::hex << d.rd_wdata
                           << "  GOLDEN=x" << std::dec << g.rd_addr << "=0x" << std::hex << g.rd_wdata << rst << "\n"; }
    { uint32_t rb = 0;
      if (d.mem_rmask & 1) rb |= 0x000000FFu;
      if (d.mem_rmask & 2) rb |= 0x0000FF00u;
      if (d.mem_rmask & 4) rb |= 0x00FF0000u;
      if (d.mem_rmask & 8) rb |= 0xFF000000u;
      bool ok = d.mem_rmask == g.mem_rmask && (d.mem_rmask == 0 || (d.mem_rdata & rb) == (g.mem_rdata & rb));
      std::cerr << col(ok) << "  mem_r     DUT  addr=0x" << d.mem_addr << " rmask=" << d.mem_rmask << " rdata=0x" << d.mem_rdata << "\n"
                           << "            GOLDEN addr=0x" << g.mem_addr << " rmask=" << g.mem_rmask << " rdata=0x" << g.mem_rdata << rst << "\n"; }
    { bool ok = d.mem_wmask == g.mem_wmask && (d.mem_wmask == 0 || (d.mem_addr == g.mem_addr && d.mem_wdata == g.mem_wdata));
      std::cerr << col(ok) << "  mem_w     DUT  addr=0x" << d.mem_addr << " wmask=" << d.mem_wmask << " wdata=0x" << d.mem_wdata << "\n"
                           << "            GOLDEN addr=0x" << g.mem_addr << " wmask=" << g.mem_wmask << " wdata=0x" << g.mem_wdata << rst << "\n"; }
    std::cerr << std::dec;

    // If the mismatch is in mem_rdata, scan the golden log backwards to find
    // the most recent store(s) to that address — the divergence originates there.
    uint32_t rb_hint = 0;
    if (d.mem_rmask & 1) rb_hint |= 0x000000FFu;
    if (d.mem_rmask & 2) rb_hint |= 0x0000FF00u;
    if (d.mem_rmask & 4) rb_hint |= 0x00FF0000u;
    if (d.mem_rmask & 8) rb_hint |= 0xFF000000u;
    if (d.mem_rmask != 0 && (d.mem_rdata & rb_hint) != (g.mem_rdata & rb_hint)) {
        uint32_t addr = g.mem_addr;
        std::cerr << "\033[1;33m  [hint] searching golden log for prior stores to 0x"
                  << std::hex << addr << std::dec << "...\033[0m\n";
        int found = 0;
        for (int64_t i = (int64_t)order - 1; i >= 0 && found < 5; i--) {
            const CommitSnap& s = golden_full_log[i];
            if (s.mem_wmask != 0 && s.mem_addr == addr) {
                std::cerr << "  golden order=" << i
                          << "  pc=0x" << std::hex << s.pc
                          << "  wmask=" << s.mem_wmask
                          << "  wdata=0x" << s.mem_wdata << std::dec << "\n";
                found++;
            }
        }
        if (found == 0)
            std::cerr << "  (no prior golden store to that address found)\n";
    }

    if (m_trace) { m_trace->close(); m_trace = nullptr; }

    char ans = 'n';
    if (!is_rerun) {
        std::cerr << "\033[1;32mRe-run with VCD window LOW=" << lo << " HIGH=" << hi << "? [y/n]: \033[0m";
        std::cin >> ans;
    }
    if ((ans == 'y' || ans == 'Y') && exe_path && mem_path) {
        std::string lo_s = std::to_string(lo);
        std::string hi_s = std::to_string(hi);
        const char* args[] = { exe_path, mem_path, prog_path, lo_s.c_str(), hi_s.c_str(), nullptr };
        execv(exe_path, const_cast<char* const*>(args));
        std::cerr << "execv failed\n";
    }
    exit(EXIT_FAILURE);
}

static void compare_dut_commit(uint64_t order, const CommitSnap& d)
{
    if (order >= golden_full_log.size()) {
        std::cerr << "\n\033[1;31m[GOLDEN OVERRUN] DUT committed order=" << order
                  << " but golden log only has " << golden_full_log.size() << " entries\033[0m\n";
        exit(EXIT_FAILURE);
    }
    const CommitSnap& g = golden_full_log[order];

    // For loads: only compare the bytes selected by rmask.
    // OOO execution may cause other bytes in the same word to differ
    // (e.g. a store to adjacent byte lanes executed after this load).
    uint32_t rbits = 0;
    if (d.mem_rmask & 1) rbits |= 0x000000FFu;
    if (d.mem_rmask & 2) rbits |= 0x0000FF00u;
    if (d.mem_rmask & 4) rbits |= 0x00FF0000u;
    if (d.mem_rmask & 8) rbits |= 0xFF000000u;

    bool ok = (d.pc       == g.pc)
           && (d.inst     == g.inst)
           && (d.rd_addr  == g.rd_addr)
           && (d.rd_wdata == g.rd_wdata)
           && (d.mem_rmask == g.mem_rmask)
           && (d.mem_rmask == 0 || (d.mem_rdata & rbits) == (g.mem_rdata & rbits))
           && (d.mem_wmask == g.mem_wmask)
           && (d.mem_wmask == 0 || (d.mem_addr == g.mem_addr && d.mem_wdata == g.mem_wdata));

    if (!ok) golden_mismatch(order, d, g);
}

// ---------------------------------------------------------------------------
// clocked_assertions: sanity checks on posedge (mirrors reference)
// ---------------------------------------------------------------------------
void clocked_assertions()
{
    if (dut->clk == 1) {
        if (dut->dmem_read && dut->dmem_write) {
            std::cerr << "ERROR: simultaneous dmem_read and dmem_write!\n";
            exit(EXIT_FAILURE);
        }
    }
}

// ---------------------------------------------------------------------------
// tick: one half-cycle of simulation
// ---------------------------------------------------------------------------
void tick()
{
    dut->clk ^= 1;          // toggle clock
    dut->eval();             // propagate through all SV logic
    clocked_assertions();    // check for illegal signal combinations
    eval_magic_mem();        // respond to DUT memory requests
    eval_golden_mem();       // respond to golden core memory requests
    if (m_trace) {
        int cycle = (int)(sim_time / 2);
        if (cycle >= low_cycle && cycle <= high_cycle)
            m_trace->dump(sim_time);
    }
    sim_time++;
}

// ---------------------------------------------------------------------------
// do_reset: hold rst high for N full cycles, then release
// ---------------------------------------------------------------------------
void do_reset(int cycles)
{
    dut->rst = 1;
    for (int i = 0; i < cycles * 2; i++)
        tick();
    dut->rst = 0;
}

// ---------------------------------------------------------------------------
// finish: clean up and exit
// ---------------------------------------------------------------------------
void finish(bool failed = false)
{
    if (m_trace) {
        m_trace->close();
        delete m_trace;
        m_trace = nullptr;
    }
    dut->final();
    delete dut;
    dut = nullptr;

    if (failed) {
        std::cerr << "SIMULATION FAILED\n";
        exit(EXIT_FAILURE);
    } else {
        std::cout << "SIMULATION PASSED\n";
        exit(EXIT_SUCCESS);
    }
}

// ---------------------------------------------------------------------------
// Golden log save/load — skips Phase 1 when the same test is re-run.
// File layout: [path_len: uint32][mem_path: path_len bytes]
//              [num_entries: uint64][CommitSnap x num_entries]
// ---------------------------------------------------------------------------
static void save_golden_log(const char* key)
{
    std::ofstream f(GOLDEN_LOG_PATH, std::ios::binary | std::ios::trunc);
    if (!f) {
        std::cerr << "[golden log] WARNING: could not write " << GOLDEN_LOG_PATH << "\n";
        return;
    }
    uint32_t path_len    = (uint32_t)std::string(key).size();
    uint64_t num_entries = (uint64_t)golden_full_log.size();
    f.write((const char*)&path_len,    sizeof(path_len));
    f.write(key,                       path_len);
    f.write((const char*)&num_entries, sizeof(num_entries));
    f.write((const char*)golden_full_log.data(), (std::streamsize)(num_entries * sizeof(CommitSnap)));
    std::cout << "[golden log] Saved " << num_entries << " entries to " << GOLDEN_LOG_PATH << "\n";
}

// Returns true if the log was loaded successfully (Phase 1 can be skipped).
static bool load_golden_log(const char* key)
{
    std::ifstream f(GOLDEN_LOG_PATH, std::ios::binary);
    if (!f) return false;

    uint32_t path_len = 0;
    if (!f.read((char*)&path_len, sizeof(path_len))) return false;
    std::string cached_path(path_len, '\0');
    if (!f.read(cached_path.data(), path_len)) return false;

    if (cached_path != std::string(key)) return false;  // different test

    uint64_t num_entries = 0;
    if (!f.read((char*)&num_entries, sizeof(num_entries))) return false;
    golden_full_log.resize(num_entries);
    if (!f.read((char*)golden_full_log.data(), (std::streamsize)(num_entries * sizeof(CommitSnap)))) return false;

    std::cout << "[golden log] Loaded " << num_entries << " entries from " << GOLDEN_LOG_PATH << " — skipping Phase 1\n";
    return true;
}

// ---------------------------------------------------------------------------
// main
// ---------------------------------------------------------------------------
int main(int argc, char** argv)
{
    if (argc != 3 && argc != 5) {
        std::cerr << "Usage:\n"
                  << "  " << argv[0] << " <memory_4.lst> <prog>\n"
                  << "  " << argv[0] << " <memory_4.lst> <prog> <LOW_CYCLE> <HIGH_CYCLE>\n";
        return EXIT_FAILURE;
    }

    exe_path  = argv[0];
    mem_path  = argv[1];
    prog_path = argv[2];
    is_rerun  = (argc == 5);
    srand(42);   // fixed seed — reproducible runs, fair spec vs non-spec comparison
    initmem(argv[1]);

    // Parse optional VCD window
    if (argc == 5) {
        low_cycle  = std::stoi(argv[3]);
        high_cycle = std::stoi(argv[4]);
        if (high_cycle < low_cycle) {
            std::cerr << "ERROR: HIGH_CYCLE must be >= LOW_CYCLE\n";
            return EXIT_FAILURE;
        }
        std::cout << "VCD window: cycles " << low_cycle
                  << " to " << high_cycle << "\n";
    }

    // Always enable trace infrastructure (cheap even if unused)
    Verilated::traceEverOn(true);

    // -----------------------------------------------------------------------
    // Helper: initialise a fresh Verilator model and drive default inputs.
    // -----------------------------------------------------------------------
    auto init_dut = [](bool eoc_enable, bool dut_in_reset) {
        dut = new Vtop_tb;
        dut->clk               = 0;
        dut->rst               = 0;
        dut->dut_rst           = dut_in_reset ? 1 : 0;
        dut->eoc_enable        = eoc_enable ? 1 : 0;
        dut->imem_rdata        = 0xDEADBEEFu;
        dut->imem_resp         = 0;
        dut->dmem_rdata        = 0xDEADBEEFu;
        dut->dmem_resp         = 0;
        dut->golden_imem_rdata = 0xDEADBEEFu;
        dut->golden_imem_resp  = 0;
        dut->golden_dmem_rdata = 0xDEADBEEFu;
        dut->golden_dmem_resp  = 0;
    };

    // Helper: reset all memory-model pipeline state and restore dmem contents.
    auto reset_mem_state = []() {
        imem_pending        = false; imem_counter        = 0;
        dmem_pending        = false; dmem_counter        = 0;
        golden_imem_pending = false; golden_imem_counter = 0;
        golden_dmem_pending = false; golden_dmem_counter = 0;
        dmem_memory        = initial_dmem_memory;
        golden_dmem_memory = initial_dmem_memory;
    };

    // -----------------------------------------------------------------------
    // Phase 1: run golden to completion and record every commit.
    // Skipped if golden_log.bin already exists for this memory file.
    // -----------------------------------------------------------------------
    if (load_golden_log(prog_path)) {
        // Phase 1 skipped — log loaded from file; state already clean
        sim_time = 0;
        last_commit_cycle = 0;
        reset_mem_state();
    } else {
        std::cout << "\n[Phase 1] Running golden CPU to completion...\n";
        golden_phase_active = true;

        init_dut(false, true);   // eoc_enable=0, dut_rst=1: DUT held in reset, RVFI silent
        do_reset(3);

        for (int i = 0; i < MAX_CYCLES; i++) {
            tick();
            tick();
            int cycle = (int)(sim_time / 2) - 1;

            if (dut->golden_commit) {
                CommitSnap s;
                s.pc        = dut->golden_pc;
                s.inst      = dut->golden_inst;
                s.rd_addr   = dut->golden_rd_addr;
                s.rd_wdata  = dut->golden_rd_wdata;
                s.mem_addr  = dut->golden_mem_addr;
                s.mem_rmask = dut->golden_mem_rmask;
                s.mem_wmask = dut->golden_mem_wmask;
                s.mem_rdata = dut->golden_mem_rdata;
                s.mem_wdata = dut->golden_mem_wdata;
                s.cycle     = cycle;
                uint64_t order = dut->golden_order;
                if (order >= golden_full_log.size())
                    golden_full_log.resize(order + 1);
                golden_full_log[order] = s;
            }

            // Halt detected the same way the RVFI monitor does: golden commits
            // the magic halt instruction (slti x0, x0, -256 = 0xF0002013).
            if (dut->golden_commit && dut->golden_inst == 0xF0002013u) {
                std::cout << "[Phase 1] Golden halted at cycle " << cycle
                          << " — recorded " << golden_full_log.size() << " commits\n";
                break;
            }

            if (i == MAX_CYCLES - 1) {
                std::cerr << "ERROR: Golden timed out in Phase 1 after " << MAX_CYCLES << " cycles\n";
                finish(true);
            }
        }

        golden_phase_active = false;
        dut->final();
        delete dut;
        dut = nullptr;
        sim_time = 0;
        last_commit_cycle = 0;
        reset_mem_state();

        save_golden_log(prog_path);
    }

#ifndef GOLDEN_ONLY
    // -----------------------------------------------------------------------
    // Phase 2: run the DUT and compare each commit against the golden log.
    // -----------------------------------------------------------------------
    std::cout << "[Phase 2] Running DUT...\n";

    init_dut(true, false);   // eoc_enable=1, dut_rst=0: normal DUT operation

    // Open VCD only when a window was requested (Phase 2 only — DUT waveform)
    if (argc == 5) {
        m_trace = new VerilatedVcdC;
        dut->trace(m_trace, 5);
        m_trace->open("wave.vcd");
    }

    do_reset(3);

    uint64_t cpp_commits          = 0;
    uint64_t cpp_cycles           = 0;
    uint64_t cpp_branches         = 0;
    uint64_t cpp_branch_mispreds  = 0;
    uint64_t cpp_jumps            = 0;   // JALR only (indirect; JAL never mispredicts)
    uint64_t cpp_jump_mispreds    = 0;

    uint64_t stall_rob_full          = 0;
    uint64_t stall_alu_full          = 0;
    uint64_t stall_cmp_full          = 0;
    uint64_t stall_load_full         = 0;   // LQ full
    uint64_t stall_store_full        = 0;   // SQ full
    uint64_t stall_jump_full         = 0;
    uint64_t stall_mul_full          = 0;
    uint64_t stall_no_free_pr        = 0;
    uint64_t stall_checkpoint_full   = 0;   // branch/jump checkpoint full
    uint64_t stall_lc_checkpoint_full= 0;   // load checkpoint full

    uint64_t loads_issued_safe       = 0;
    uint64_t loads_issued_spec       = 0;
    uint64_t loads_forwarded         = 0;
    uint64_t spec_mispredicts        = 0;
    uint64_t spec_mispr_from_fwd     = 0;
    uint64_t spec_mispr_from_spec    = 0;

    auto print_ipc = [&]() {
        double ipc           = cpp_cycles   ? (double)cpp_commits         / cpp_cycles   : 0.0;
        double br_mispr_rate = cpp_branches ? (double)cpp_branch_mispreds / cpp_branches : 0.0;
        double jmp_mispr_rate= cpp_jumps    ? (double)cpp_jump_mispreds   / cpp_jumps    : 0.0;
        std::cout << "[IPC]          commits=" << cpp_commits
                  << "  cycles=" << cpp_cycles
                  << "  IPC=" << ipc << "\n";
        std::cout << "[Branch]       count=" << cpp_branches
                  << "  mispredicts=" << cpp_branch_mispreds
                  << "  rate=" << br_mispr_rate << "\n";
        std::cout << "[Jump (JALR)]  count=" << cpp_jumps
                  << "  mispredicts=" << cpp_jump_mispreds
                  << "  rate=" << jmp_mispr_rate << "\n";
        std::cout << "[Stall]        rob_full="    << stall_rob_full
                  << "  no_free_pr="               << stall_no_free_pr     << "\n";
        std::cout << "[Stall RS]     alu="         << stall_alu_full
                  << "  cmp="                      << stall_cmp_full
                  << "  jump="                     << stall_jump_full
                  << "  mul="                      << stall_mul_full       << "\n";
        std::cout << "[Stall LSQ]    lq_full="     << stall_load_full
                  << "  sq_full="                  << stall_store_full     << "\n";
        std::cout << "[Stall CP]     br_cp_full="  << stall_checkpoint_full
                  << "  load_cp_full="             << stall_lc_checkpoint_full << "\n";

        uint64_t total_loads   = loads_issued_safe + loads_issued_spec + loads_forwarded;
        double   fwd_rate      = total_loads      ? (double)loads_forwarded      / total_loads      : 0.0;
        double   spec_rate     = total_loads      ? (double)loads_issued_spec    / total_loads      : 0.0;
        double   mispr_rate    = loads_issued_spec ? (double)spec_mispredicts    / loads_issued_spec : 0.0;
        double   fwd_mispr_r   = loads_forwarded  ? (double)spec_mispr_from_fwd / loads_forwarded   : 0.0;
        std::cout << "[Spec Load]    total="       << total_loads
                  << "  safe="                     << loads_issued_safe
                  << "  spec="                     << loads_issued_spec
                  << "  fwd="                      << loads_forwarded            << "\n";
        std::cout << "               fwd_rate="    << fwd_rate
                  << "  spec_rate="                << spec_rate                  << "\n";
        std::cout << "               spec_mispredicts=" << spec_mispredicts
                  << "  (from_spec="               << spec_mispr_from_spec
                  << "  from_fwd="                 << spec_mispr_from_fwd        << ")\n";
        std::cout << "               spec_mispr_rate=" << mispr_rate
                  << "  fwd_mispr_rate="            << fwd_mispr_r               << "\n";
    };

    for (int i = 0; i < MAX_CYCLES; i++) {
        tick();
        tick();
        cpp_cycles++;

        int cycle = (int)(sim_time / 2) - 1;

        if (dut->error) {
            std::cout << "ERROR at cycle " << cycle << "\n";
            finish(true);
        }
        // stall breakdown via verilator public signals
        {
            auto* mc = dut->top_tb->dut->cpu_midcore;
            if (mc->stall_rob_full          ) stall_rob_full++;
            if (mc->stall_alu_full          ) stall_alu_full++;
            if (mc->stall_cmp_full          ) stall_cmp_full++;
            if (mc->stall_load_full         ) stall_load_full++;
            if (mc->stall_store_full        ) stall_store_full++;
            if (mc->stall_jump_full         ) stall_jump_full++;
            if (mc->stall_mul_full          ) stall_mul_full++;
            if (mc->stall_no_free_pr        ) stall_no_free_pr++;
            if (mc->stall_checkpoint_full   ) stall_checkpoint_full++;
            if (mc->stall_lc_checkpoint_full) stall_lc_checkpoint_full++;
        }
        {
            auto* lsq = dut->top_tb->dut->cpu_execute->lsq;
            if (lsq->mon_load_issued_safe    ) loads_issued_safe++;
            if (lsq->mon_load_issued_spec    ) loads_issued_spec++;
            if (lsq->mon_fwd_fire            ) loads_forwarded++;
            if (lsq->mon_spec_mispredict     ) spec_mispredicts++;
            if (lsq->mon_spec_mispredict_fwd ) spec_mispr_from_fwd++;
            if (lsq->mon_spec_mispredict_spec) spec_mispr_from_spec++;
        }
        if (dut->any_commit && !dut->halt) {
            last_commit_cycle = cycle;
            cpp_commits++;
            if ((dut->dut_inst & 0x7F) == 0x63) {        // BRANCH (BEQ/BNE/BLT/BGE/BLTU/BGEU)
                cpp_branches++;
                if (dut->mispredict_o) cpp_branch_mispreds++;
            }
            if ((dut->dut_inst & 0x7F) == 0x67) {        // JALR (indirect jump, can mispredict)
                cpp_jumps++;
                if (dut->mispredict_o) cpp_jump_mispreds++;
            }
            CommitSnap s;
            s.pc        = dut->dut_pc;
            s.inst      = dut->dut_inst;
            s.rd_addr   = dut->dut_rd_addr;
            s.rd_wdata  = dut->dut_rd_wdata;
            s.mem_addr  = dut->dut_mem_addr;
            s.mem_rmask = dut->dut_mem_rmask;
            s.mem_wmask = dut->dut_mem_wmask;
            s.mem_rdata = dut->dut_mem_rdata;
            s.mem_wdata = dut->dut_mem_wdata;
            s.cycle     = cycle;
            compare_dut_commit(dut->dut_order, s);
        }

        if (dut->halt) {
            std::cout << "HALT at cycle " << cycle << "\n";
            // Drain a few extra cycles so any in-flight RVFI errors propagate.
            for (int j = 0; j < 5; j++) { tick(); tick(); }
            if (dut->error) {
                std::cout << "ERROR detected after halt\n";
                finish(true);
            }
            print_ipc();
            finish(false);
        }
    }

    {
        int lo = std::max(0, last_commit_cycle - VCD_WIN_PAD);
        int hi = last_commit_cycle + VCD_WIN_PAD;
        print_ipc();
        std::cerr << "TIMEOUT after " << MAX_CYCLES << " cycles\n"
                  << "Last commit at cycle " << last_commit_cycle << "\n";
        char ans = 'n';
        if (!is_rerun) {
            std::cerr << "\033[1;32mRe-run with VCD window LOW=" << lo << " HIGH=" << hi << "? [y/n]: \033[0m";
            std::cin >> ans;
        }
        if ((ans == 'y' || ans == 'Y') && exe_path && mem_path) {
            std::string lo_s = std::to_string(lo);
            std::string hi_s = std::to_string(hi);
            const char* args[] = { exe_path, mem_path, prog_path, lo_s.c_str(), hi_s.c_str(), nullptr };
            execv(exe_path, const_cast<char* const*>(args));
            std::cerr << "execv failed\n";
        }
    }
    finish(true);
    return EXIT_FAILURE;
#endif // GOLDEN_ONLY
    finish(false);
    return EXIT_SUCCESS;
}
