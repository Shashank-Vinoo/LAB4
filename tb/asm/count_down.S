.text
.globl main
main:
    addi a0, zero, 10      # a0 = 10

loop:
    addi a0, a0, -1        # a0 = a0 - 1
    bne  a0, zero, loop    # repeat until a0 == 0

finish:
    bne zero, zero, finish # infinite loop 
