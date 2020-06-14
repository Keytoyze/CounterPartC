main:
        pushq   %rbp
        movq    %rsp, %rbp
        movl    $1, -4(%rbp)    # -4(%rbp) = var1
        movl    -4(%rbp), -8(%rbp)      # -8(%rbp) = var2
        movl    $1, -12(%rbp)           # -12(%rbp) = var3
        movl    -8(%rbp), %edx          # -8(%rbp) = var2
        addl    -12(%rbp), %edx         # -12(%rbp) = var3
        movl    %edx, -16(%rbp)         # -16(%rbp) = var4
        movl    -16(%rbp), -20(%rbp)    # -20(%rbp) = var5
        movl    $2, -24(%rbp)           # -24(%rbp) = var6
        movl    -20(%rbp), %ecx         # -20(%rbp) = var5
        imull   -24(%rbp), %ecx         # -24(%rbp) = var6
        movl    %ecx, -28(%rbp)         # -28(%rbp) = var7
        movl    -28(%rbp), -32(%rbp)    # -32(%rbp) = var8
        movl    $2, -36(%rbp)           # -36(%rbp) = var9
        movl    -8(%rbp), %ebx          # -8(%rbp) = var2
        subl    -36(%rbp), %ebx         # -36(%rbp) = var9
        movl    %ebx, -40(%rbp)         # -40(%rbp) = var10
        movl    -40(%rbp), -32(%rbp)    # -32(%rbp) = var8
        movl    $2, -44(%rbp)           # -44(%rbp) = var11
        movl    -32(%rbp), %eax         # -32(%rbp) = var8
        sall    -44(%rbp), %eax         # -44(%rbp) = var11
        movl    %eax, -48(%rbp)         # -48(%rbp) = var12
        movl    -48(%rbp), -8(%rbp)     # -8(%rbp) = var2
        movl    $2, -52(%rbp)           # -52(%rbp) = var13
        movl    -20(%rbp), %edx         # -20(%rbp) = var5
        andl    -52(%rbp), %edx         # -52(%rbp) = var13
        movl    %edx, -56(%rbp)         # -56(%rbp) = var14
        movl    -56(%rbp), -20(%rbp)    # -20(%rbp) = var5
.main_end:
        popq    %rbp
        ret