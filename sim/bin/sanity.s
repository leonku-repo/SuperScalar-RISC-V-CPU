# sanity.s
# Simplest possible test. Tests only ADDI and the halt instruction.
# If this fails, the problem is in fetch, decode, or basic ALU — nothing else.
# Expected final register state: x1=1, x2=2, x3=3

.section .text
.globl _start
_start:
    addi x1, x0, 1       # x1 = 0 + 1 = 1
    addi x2, x0, 2       # x2 = 0 + 2 = 2
    addi x3, x1, 2       # x3 = 1 + 2 = 3
    slti x0, x0, -256    # magic halt
