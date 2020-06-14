f1:
	pushq	%rbp
	movq	%rsp, %rbp
	movl	%edi, -4(%rbp)   	# param: -4(%rbp) = var0
	movl	%esi, -8(%rbp)   	# param: -8(%rbp) = var1
	movl	%edx, -12(%rbp)   	# param: -12(%rbp) = var2
	movl	%ecx, -16(%rbp)   	# param: -16(%rbp) = var3
	movl	%r8d, -20(%rbp)   	# param: -20(%rbp) = var4
	movl	%r9d, -24(%rbp)   	# param: -24(%rbp) = var5
	movl	-4(%rbp), %ebx   	# -4(%rbp) = var0
	addl	-8(%rbp), %ebx   	# -8(%rbp) = var1
	movl	%ebx, -28(%rbp)   	# -28(%rbp) = var6
	movl	-28(%rbp), %eax   	# -28(%rbp) = var6
	jmp	.f1_end
.f1_end:
	leave
	ret
f2:
	pushq	%rbp
	movq	%rsp, %rbp
	movl	%edi, -4(%rbp)   	# param: -4(%rbp) = var7
	movl	$1, -8(%rbp)   	# -8(%rbp) = var8
	movl	$2, -12(%rbp)   	# -12(%rbp) = var9
	movl	$3, -16(%rbp)   	# -16(%rbp) = var10
	movl	$4, -20(%rbp)   	# -20(%rbp) = var11
	movl	$5, -24(%rbp)   	# -24(%rbp) = var12
	movl	$6, -28(%rbp)   	# -28(%rbp) = var13
	movl	-8(%rbp), %edi   	# argu: -8(%rbp) = var8
	movl	-12(%rbp), %esi   	# argu: -12(%rbp) = var9
	movl	-16(%rbp), %edx   	# argu: -16(%rbp) = var10
	movl	-20(%rbp), %ecx   	# argu: -20(%rbp) = var11
	movl	-24(%rbp), %r8d   	# argu: -24(%rbp) = var12
	movl	-28(%rbp), %r9d   	# argu: -28(%rbp) = var13
	call	f1
	movl	%eax, var14
	movl	-32(%rbp), %eax   	# -32(%rbp) = var14
	jmp	.f2_end
.f2_end:
	leave
	ret
main:
	pushq	%rbp
	movq	%rsp, %rbp
	movl	$5, -4(%rbp)   	# -4(%rbp) = var16
	movl	-4(%rbp), %edi   	# argu: -4(%rbp) = var16
	call	f2
	movl	%eax, var17
.main_end:
	leave
	ret
