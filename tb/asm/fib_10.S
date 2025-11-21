.text
.globl main

main:

    addi    a0, zero, 0      # fib0 = 0
    addi    a1, zero, 1      # fib1 = 1


    addi    t0, zero, 10     # t0 = 10 to calc fib 10

loop:
    add     t1, a0, a1       # t1 = fib0 + fib1 
    addi    a0, a1, 0        # fib0 = fib1
    addi    a1, t1, 0        # fib1 = next
    addi    t0, t0, -1       # counter--
    bne     t0, zero, loop   # repeat until t0 == 0

# a0 should be 55 representing f10

finish:
    beq     zero, zero, finish   # infinite loop