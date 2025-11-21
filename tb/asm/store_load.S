.text
.globl main

main:
    addi    a1, zero, 10      # a1 = 10

    # Store a1 into data memory at address 0
    sw      a1, 10(zero)       # mem[2] = 10

    # Load the word back from address 0 into a0
    lw      a0, 10(zero)       # a0 = mem[2] = 10 rember

finish:
    beq     zero, zero, finish  # infinite loop
