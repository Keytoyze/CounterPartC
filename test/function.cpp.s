	.globl	f1
	.type	f1, @function
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
	.globl	f2
	.type	f2, @function
f2:
	pushq	%rbp
	movq	%rsp, %rbp
	movl	%edi, -4(%rbp)   	# param: -4(%rbp) = var7
	movl	$2, -8(%rbp)   	# -8(%rbp) = var8
	movl	$3, -12(%rbp)   	# -12(%rbp) = var9
	movl	$4, -16(%rbp)   	# -16(%rbp) = var10
	movl	$5, -20(%rbp)   	# -20(%rbp) = var11
	movl	$6, -24(%rbp)   	# -24(%rbp) = var12
	movl	-4(%rbp), %edi   	# argu: -4(%rbp) = var7
	movl	-8(%rbp), %esi   	# argu: -8(%rbp) = var8
	movl	-12(%rbp), %edx   	# argu: -12(%rbp) = var9
	movl	-16(%rbp), %ecx   	# argu: -16(%rbp) = var10
	movl	-20(%rbp), %r8d   	# argu: -20(%rbp) = var11
	movl	-24(%rbp), %r9d   	# argu: -24(%rbp) = var12
	call	f1
	movl	%eax, -28(%rbp)   	# argu: -28(%rbp) = var13
	movl	-28(%rbp), %eax   	# -28(%rbp) = var13
	jmp	.f2_end
.f2_end:
	leave
	ret
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	movl	$5, -4(%rbp)   	# -4(%rbp) = var15
	movl	-4(%rbp), %edi   	# argu: -4(%rbp) = var15
	call	f2
	movl	%eax, -8(%rbp)   	# argu: -8(%rbp) = var16
	movl	-8(%rbp), %eax   	# -8(%rbp) = var16
	jmp	.main_end
.main_end:
	leave
	ret
