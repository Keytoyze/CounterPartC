	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	movl	$1, -4(%rbp)   	# -4(%rbp) = var0
	movl	-4(%rbp), %esi
	movl	%esi, -8(%rbp)   	# -8(%rbp) = var1
	movl	$2, -12(%rbp)   	# -12(%rbp) = var2
	movl	-12(%rbp), %esi
	movl	%esi, -16(%rbp)   	# -16(%rbp) = var3
	movl	-8(%rbp), %ebx   	# -8(%rbp) = var1
	cmpl	-16(%rbp), %ebx   	# -16(%rbp) = var3
	sete	%bl
	movzbl	%bl, %ebx
	movl	%ebx, -20(%rbp)   	# -20(%rbp) = var4
	movl	-20(%rbp), %esi
	movl	%esi, -24(%rbp)   	# -24(%rbp) = var5
	cmpl	$0, -24(%rbp)   	# -24(%rbp) = var5
	jne	.L0
	jmp	.L1
.L0:
	movl	$1, -28(%rbp)   	# -28(%rbp) = var6
	movl	-8(%rbp), %eax   	# -8(%rbp) = var1
	addl	-28(%rbp), %eax   	# -28(%rbp) = var6
	movl	%eax, -32(%rbp)   	# -32(%rbp) = var7
	movl	-32(%rbp), %esi
	movl	%esi, -8(%rbp)   	# -8(%rbp) = var1
	movl	-8(%rbp), %eax   	# -8(%rbp) = var1
	jmp	.main_end
	jmp	.L2
.L1:
	movl	-24(%rbp), %eax   	# -24(%rbp) = var5
	jmp	.main_end
.L2:
.main_end:
	leave
	ret
