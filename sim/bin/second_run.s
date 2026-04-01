# second_run.s
# Harder integration test: R-type, I-type, all branch types,
# JAL, byte/halfword loads+stores, WAW hazard, dependency chain, load-use hazard.
#
# HALT sentinel: slti x0, x0, -256  (0xF0002013)
#
# Expected at halt (happy path):
#   x1  = 43         load-use: LW 42 then ADDI +1
#   x2  = 5          base (unchanged)
#   x3  = 17         ADD  12+5
#   x4  = 7          SUB  12-5
#   x5  = 9          XOR  12^5
#   x6  = 13         OR   12|5
#   x7  = 4          AND  12&5
#   x8  = 384        SLL  12<<5
#   x9  = 0          SRL  12>>5
#   x10 = 2          base
#   x11 = -12        base (0xFFFFFFF4)
#   x12 = -1         SRA  -12>>>5 (0xFFFFFFFF)
#   x13 = 0          SLT  12 < 5  -> false
#   x14 = 1          SLT   5 < 12 -> true
#   x15 = 0          SLTU 0xFFFFFFF4 < 5 unsigned -> false
#   x16 = 1          SLTU  5 < 0xFFFFFFF4 unsigned -> true
#   x17 = 3          XORI  12 ^ 15
#   x18 = 15         ORI   12 | 15
#   x19 = 12         ANDI  12 & 15
#   x20 = 96         SLLI  12 << 3
#   x21 = 6          SRLI  12 >> 1
#   x22 = -3         SRAI  -12 >> 2 (0xFFFFFFFD)
#   x23 = 1          SLTI  -12 < 0 -> true
#   x24 = 1          SLTIU  5 < 100 -> true
#   x25 = 200        WAW: second write wins
#   x26 = 32         dependency chain 1->2->4->8->16->32
#   x27 = 77         set in jal_target subroutine
#   x28 = 0xFFFFFFAB LB sign-extended 0xAB
#   x29 = 0x0000FFFF LHU zero-extended 0xFFFF

.section .text
.globl _start
_start:

    #-------------------------------------------------------------------
    # Base values
    #-------------------------------------------------------------------
    addi    x1,  x0,  12           # x1  = 12
    addi    x2,  x0,  5            # x2  = 5
    addi    x10, x0,  2            # x10 = 2
    addi    x11, x0, -12           # x11 = 0xFFFFFFF4

    #-------------------------------------------------------------------
    # R-type arithmetic / logic
    #-------------------------------------------------------------------
    add     x3,  x1,  x2           # x3  = 17
    sub     x4,  x1,  x2           # x4  = 7
    xor     x5,  x1,  x2           # x5  = 9
    or      x6,  x1,  x2           # x6  = 13
    and     x7,  x1,  x2           # x7  = 4
    sll     x8,  x1,  x2           # x8  = 12 << 5 = 384
    srl     x9,  x1,  x2           # x9  = 12 >> 5 = 0
    sra     x12, x11, x2           # x12 = -12 >>> 5 = -1
    slt     x13, x1,  x2           # x13 = (12 <  5  signed) = 0
    slt     x14, x2,  x1           # x14 = ( 5 < 12  signed) = 1
    sltu    x15, x11, x2           # x15 = (0xFFFFFFF4 < 5 unsigned) = 0
    sltu    x16, x2,  x11          # x16 = (5 < 0xFFFFFFF4 unsigned) = 1

    #-------------------------------------------------------------------
    # I-type variants
    #-------------------------------------------------------------------
    xori    x17, x1,  15           # x17 = 12 ^ 15 = 3
    ori     x18, x1,  15           # x18 = 12 | 15 = 15
    andi    x19, x1,  15           # x19 = 12 & 15 = 12
    slli    x20, x1,  3            # x20 = 12 << 3 = 96
    srli    x21, x1,  1            # x21 = 12 >> 1 = 6
    srai    x22, x11, 2            # x22 = -12 >> 2 = -3
    slti    x23, x11, 0            # x23 = (-12 < 0 signed) = 1
    sltiu   x24, x2,  100          # x24 = (5 < 100 unsigned) = 1

    #-------------------------------------------------------------------
    # WAW hazard — second write to x25 must win
    #-------------------------------------------------------------------
    addi    x25, x0,  100          # x25 = 100
    addi    x25, x0,  200          # x25 = 200 (overwrites above)

    #-------------------------------------------------------------------
    # 6-deep RAW dependency chain
    #-------------------------------------------------------------------
    addi    x26, x0,  1
    add     x26, x26, x26          # 2
    add     x26, x26, x26          # 4
    add     x26, x26, x26          # 8
    add     x26, x26, x26          # 16
    add     x26, x26, x26          # 32

    #-------------------------------------------------------------------
    # Branch coverage
    #-------------------------------------------------------------------

    # BEQ not-taken (12 != 5) — fall through
    beq     x1,  x2,  fail

    # BNE taken (12 != 5) — jump to bne_ok
    bne     x1,  x2,  bne_ok
    slti    x0,  x0,  -256         # unreachable — halt would signal error
bne_ok:

    # BLT taken (2 < 12 signed)
    blt     x10, x1,  blt_ok
    slti    x0,  x0,  -256
blt_ok:

    # BGE taken (12 >= 5 signed)
    bge     x1,  x2,  bge_ok
    slti    x0,  x0,  -256
bge_ok:

    # BLTU not-taken: 0xFFFFFFF4 is NOT < 5 unsigned — fall through
    bltu    x11, x2,  fail

    # BGEU taken: 0xFFFFFFF4 >= 5 unsigned
    bgeu    x11, x2,  bgeu_ok
    slti    x0,  x0,  -256
bgeu_ok:

    #-------------------------------------------------------------------
    # JAL: jump forward to jal_target, come back via jal_back
    #-------------------------------------------------------------------
    jal     x30, jal_target        # x30 = return addr
    # execution resumes at jal_back after jal_target jumps back
jal_back:
    # x27 set inside jal_target, should be 77 here

    #-------------------------------------------------------------------
    # Memory — load base address via la pseudo-instruction
    #-------------------------------------------------------------------
    la      x31, data_area         # x31 = &data_area

    # Byte store + load (sign extension)
    addi    x1,  x0,  0xAB         # x1  = 0x000000AB
    sb      x1,  0(x31)
    lb      x28, 0(x31)            # x28 = 0xFFFFFFAB (sign-extended)

    # Halfword store + load (zero extension)
    addi    x1,  x0,  -1           # x1  = 0xFFFFFFFF
    sh      x1,  4(x31)
    lhu     x29, 4(x31)            # x29 = 0x0000FFFF (zero-extended)

    # Load-use hazard: LW then immediately dependent ADDI
    addi    x1,  x0,  42
    sw      x1,  8(x31)
    lw      x1,  8(x31)            # x1  = 42
    addi    x1,  x1,  1            # x1  = 43  (RAW on load)

    #-------------------------------------------------------------------
    # Happy path halt
    #-------------------------------------------------------------------
    slti    x0, x0, -256

    #-------------------------------------------------------------------
    # Failure path — should never be reached on correct execution
    #-------------------------------------------------------------------
fail:
    addi    x2,  x0,  0            # poison x2=0 to mark wrong path
    slti    x0,  x0,  -256

    #-------------------------------------------------------------------
    # JAL target — set x27=77 then jump back
    #-------------------------------------------------------------------
jal_target:
    addi    x27, x0,  77           # x27 = 77
    jal     x0,  jal_back          # jump back (x0 discards link)

.section .data
.align 4
data_area:
    .word 0                        # +0  byte scratch
    .word 0                        # +4  halfword scratch
    .word 0                        # +8  word scratch (load-use)
