# first_run.s
# First integration test for the OOO CPU.
# Tests each major unit in order of complexity so failures are easy to isolate.
#
# Run with:
#   cd sim && make sim PROG=../testcode/first_run.s
#
# Expected register values at halt:
#   x1  =   1
#   x2  =   2
#   x3  =   3    (x1 + x2, basic RAW dependency)
#   x4  =   5    (x3 + x2, back-to-back RAW dependency)
#   x5  =  -1    (addi with negative immediate, tests sign extension)
#   x6  =  0x00001000  (LUI)
#   x7  =  42    (loaded from memory after store)
#   x8  =   1    (not-taken branch fell through correctly)
#   x9  =  99    (taken branch jumped correctly)
#
# PC / instruction encoding map  (RESET_PC = 0x60000000, 4 bytes each):
#
#   PC           inst        assembly
#   0x60000000   0x00100093  addi  x1,  x0,  1
#   0x60000004   0x00200113  addi  x2,  x0,  2
#   0x60000008   0x002081B3  add   x3,  x1,  x2
#   0x6000000C   0x00218233  add   x4,  x3,  x2
#   0x60000010   0xFFF00293  addi  x5,  x0,  -1
#   0x60000014   0x00001337  lui   x6,  1
#   0x60000018   0x00000A17  auipc x20, 0            <- la part 1
#   0x6000001C   0x03CA0A13  addi  x20, x20, 60      <- la part 2  (x20 = 0x60000054)
#   0x60000020   0x02A00A93  addi  x21, x0,  42
#   0x60000024   0x015A2023  sw    x21, 0(x20)
#   0x60000028   0x000A2383  lw    x7,  0(x20)
#   0x6000002C   0x00100413  addi  x8,  x0,  1
#   0x60000030   0x00208E63  beq   x1,  x2,  +28     -> 0x6000004C (wrong_branch, NOT taken)
#   0x60000034   0x00000493  addi  x9,  x0,  0
#   0x60000038   0x00108663  beq   x1,  x1,  +12     -> 0x60000044 (branch_target, TAKEN → mispredict)
#   0x6000003C   0x00000493  addi  x9,  x0,  0       SQUASHED (after mispredict flush)
#   0x60000040   0xF0002013  slti  x0,  x0,  -256    SQUASHED
#   --- CPU restarts fetch at 0x60000044 after mispredict ---
#   0x60000044   0x06300493  addi  x9,  x0,  99      branch_target:
#   0x60000048   0xF0002013  slti  x0,  x0,  -256    HALT
#   --- error paths ---
#   0x6000004C   0x00000413  addi  x8,  x0,  0       wrong_branch:
#   0x60000050   0xF0002013  slti  x0,  x0,  -256
#   --- data section ---
#   0x60000054   0x00000000  data_area (.word 0)
#
# Normal commit sequence to verify in waveform:
#   order  pc          inst        rd   wdata
#      0   0x60000000  0x00100093  x1   0x00000001
#      1   0x60000004  0x00200113  x2   0x00000002
#      2   0x60000008  0x002081B3  x3   0x00000003
#      3   0x6000000C  0x00218233  x4   0x00000005
#      4   0x60000010  0xFFF00293  x5   0xFFFFFFFF
#      5   0x60000014  0x00001337  x6   0x00001000
#      6   0x60000018  0x00000A17  x20  0x60000018
#      7   0x6000001C  0x03CA0A13  x20  0x60000054
#      8   0x60000020  0x02A00A93  x21  0x0000002A
#      9   0x60000024  0x015A2023  ---  (store, rd=x0)
#     10   0x60000028  0x000A2383  x7   0x0000002A
#     11   0x6000002C  0x00100413  x8   0x00000001
#     12   0x60000030  0x00208E63  ---  (branch not-taken, rd=x0, mispredict=0)
#     13   0x60000034  0x00000493  x9   0x00000000
#     14   0x60000038  0x00108663  ---  (branch taken,  rd=x0, mispredict=1 → flush)
#     15   0x60000044  0x06300493  x9   0x00000063  (63 hex = 99 dec)
#     16   0x60000048  0xF0002013  x0   ---          HALT
#
# Test coverage:
#   1. ADDI (I-type, no dependency)              -> x1, x2
#   2. ADD  (R-type, RAW hazard chain)           -> x3, x4
#   3. ADDI negative immediate (sign extension)  -> x5
#   4. LUI  (U-type, upper immediate)            -> x6
#   5. AUIPC + ADDI  (PC-relative address)       -> x20
#   6. SW + LW (store-then-load, LSQ ordering)   -> x7  (via x21=42)
#   7. BEQ not-taken (fall-through path)         -> x8  (must remain 1)
#   8. BEQ taken (mispredict recovery, new PC)   -> x9  (must become 99)
#
# RTL bugs fixed before this test first ran (session log 2026-03-17/18):
#   - srat.sv:      old_pr_o bypass missing (WAW register leak)
#   - free_list.sv: wrong reset bit vector (only p32 free instead of p32-p63)
#   - arat.sv:      update not gated on rd_valid (stores/branches wrote p0 to ARAT)
#   - rob.sv:       empty/full used data comparison instead of pointer comparison
#   - jump.sv:      JALR target missing & ~32'd1 (LSB not cleared per spec)
#   - mem.sv:       dmem_wdata not initialized to 0 before partial writes (latch)
#   - mem.sv:       SW wmask was shifted by addr offset (should be 4'b1111)
#   - cpu.sv:       commit_update not gated on rd_valid (p0 freed on every commit)
#   - fifo.sv:      empty/full used data comparison -> false empty after flush (hang)

.section .text
.globl _start
_start:

    #-------------------------------------------------------
    # 1. Basic ADDI — no dependencies, tests fetch/decode/ALU
    #-------------------------------------------------------
    addi x1, x0, 1       # [PC=0x60000000 inst=0x00100093]  x1 = 1
    addi x2, x0, 2       # [PC=0x60000004 inst=0x00200113]  x2 = 2

    #-------------------------------------------------------
    # 2. RAW dependency — tests RS wakeup
    #    x3 depends on x1 and x2 (both already written)
    #    x4 depends on x3 (true producer-consumer)
    #-------------------------------------------------------
    add  x3, x1, x2      # [PC=0x60000008 inst=0x002081B3]  x3 = 3
    add  x4, x3, x2      # [PC=0x6000000C inst=0x00218233]  x4 = 5  (waits for x3)

    #-------------------------------------------------------
    # 3. Negative immediate — tests sign extension in ALU
    #-------------------------------------------------------
    addi x5, x0, -1      # [PC=0x60000010 inst=0xFFF00293]  x5 = 0xFFFFFFFF

    #-------------------------------------------------------
    # 4. LUI — tests U-type decode and ALU (a=0, b=u_imm)
    #-------------------------------------------------------
    lui  x6, 1            # [PC=0x60000014 inst=0x00001337]  x6 = 0x00001000

    #-------------------------------------------------------
    # 5. Store + Load — tests LSQ, mem unit, D-cache path
    #    la expands to auipc + addi (PC-relative address of data_area)
    #    data_area is at 0x60000054 = RESET_PC + 84 bytes
    #-------------------------------------------------------
    auipc x20, 0          # [PC=0x60000018 inst=0x00000A17]  x20 = 0x60000018
    addi  x20, x20, 60    # [PC=0x6000001C inst=0x03CA0A13]  x20 = 0x60000054 (data_area)
    addi x21, x0, 42      # [PC=0x60000020 inst=0x02A00A93]  x21 = 42
    sw   x21, 0(x20)      # [PC=0x60000024 inst=0x015A2023]  mem[0x60000054] = 42
    lw   x7,  0(x20)      # [PC=0x60000028 inst=0x000A2383]  x7  = 42

    #-------------------------------------------------------
    # 6. Branch NOT taken — beq x1, x2 should not branch
    #    (x1=1, x2=2, not equal)  offset=+28 -> 0x6000004C
    #-------------------------------------------------------
    addi x8, x0, 1       # [PC=0x6000002C inst=0x00100413]  x8 = 1
    beq  x1, x2, wrong_branch  # [PC=0x60000030 inst=0x00208E63]  NOT taken

    #-------------------------------------------------------
    # 7. Branch TAKEN — beq x1, x1 should branch
    #    (x1=1, x1=1, equal)  offset=+12 -> 0x60000044
    #    predictor says not-taken so mispredict fires at commit
    #-------------------------------------------------------
    addi x9, x0, 0       # [PC=0x60000034 inst=0x00000493]  x9 = 0 (overwritten)
    beq  x1, x1, branch_target  # [PC=0x60000038 inst=0x00108663]  TAKEN → mispredict+flush
    addi x9, x0, 0       # [PC=0x6000003C inst=0x00000493]  SQUASHED
    slti x0, x0, -256    # [PC=0x60000040 inst=0xF0002013]  SQUASHED

branch_target:
    addi x9, x0, 99      # [PC=0x60000044 inst=0x06300493]  x9 = 99
    slti x0, x0, -256    # [PC=0x60000048 inst=0xF0002013]  HALT

# --- error paths (should never be reached) ---
wrong_branch:
    addi x8, x0, 0       # [PC=0x6000004C inst=0x00000413]  x8 = 0 (WRONG)
    slti x0, x0, -256    # [PC=0x60000050 inst=0xF0002013]  halt with wrong x8

.section .data
.align 4
data_area:
    .word 0               # [addr=0x60000054]  4 bytes for store/load test
