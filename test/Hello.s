	.file	"Hello.cpp"
	.text
	.globl	a
	.data
	.align 16
	.type	a, @object
	.size	a, 16
a:
	.long	1
	.long	2
	.long	3
	.long	6
	.globl	k
	.align 4
	.type	k, @object
	.size	k, 4
k:
	.long	4
	.globl	k2
	.bss
	.align 4
	.type	k2, @object
	.size	k2, 4
k2:
	.zero	4
	.text
	.globl	_Z4funci
	.type	_Z4funci, @function
_Z4funci:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -52(%rbp)
	movl	-52(%rbp), %eax
	movl	%eax, -48(%rbp)
	movl	$1, -44(%rbp)
	movl	$1, -40(%rbp)
	movl	$1, -36(%rbp)
	movl	$1, -32(%rbp)
	movl	$1, -28(%rbp)
	movl	$1, -24(%rbp)
	movl	$1, -20(%rbp)
	movl	$1, -16(%rbp)
	movl	$1, -12(%rbp)
	movl	$1, -8(%rbp)
	movl	$1, -4(%rbp)
	movl	-44(%rbp), %edx
	movl	-40(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -36(%rbp)
	movl	-44(%rbp), %eax
	subl	-40(%rbp), %eax
	movl	%eax, -36(%rbp)
	movl	-44(%rbp), %eax
	imull	-40(%rbp), %eax
	movl	%eax, -36(%rbp)
	movl	-44(%rbp), %eax
	cltd
	idivl	-40(%rbp)
	movl	%eax, -36(%rbp)
	movl	-44(%rbp), %eax
	cltd
	idivl	-40(%rbp)
	movl	%edx, -36(%rbp)
	movl	-44(%rbp), %eax
	andl	-40(%rbp), %eax
	movl	%eax, -36(%rbp)
	movl	-44(%rbp), %eax
	orl	-40(%rbp), %eax
	movl	%eax, -36(%rbp)
	cmpl	$0, -44(%rbp)
	je	.L2
	cmpl	$0, -40(%rbp)
	je	.L2
	movl	$1, %eax
	jmp	.L3
.L2:
	movl	$0, %eax
.L3:
	movzbl	%al, %eax
	movl	%eax, -36(%rbp)
	cmpl	$0, -44(%rbp)
	jne	.L4
	cmpl	$0, -40(%rbp)
	je	.L5
.L4:
	movl	$1, %eax
	jmp	.L6
.L5:
	movl	$0, %eax
.L6:
	movzbl	%al, %eax
	movl	%eax, -36(%rbp)
	movl	-44(%rbp), %eax
	xorl	-40(%rbp), %eax
	movl	%eax, -36(%rbp)
	movl	-40(%rbp), %eax
	movl	-44(%rbp), %edx
	movl	%eax, %ecx
	sall	%cl, %edx
	movl	%edx, %eax
	movl	%eax, -36(%rbp)
	movl	-40(%rbp), %eax
	movl	-44(%rbp), %edx
	movl	%eax, %ecx
	sarl	%cl, %edx
	movl	%edx, %eax
	movl	%eax, -36(%rbp)
	movl	-44(%rbp), %eax
	cmpl	-40(%rbp), %eax
	setle	%al
	movzbl	%al, %eax
	movl	%eax, -36(%rbp)
	movl	-44(%rbp), %eax
	cmpl	-40(%rbp), %eax
	setge	%al
	movzbl	%al, %eax
	movl	%eax, -36(%rbp)
	movl	-44(%rbp), %eax
	cmpl	-40(%rbp), %eax
	setne	%al
	movzbl	%al, %eax
	movl	%eax, -36(%rbp)
	movl	-44(%rbp), %eax
	cmpl	-40(%rbp), %eax
	sete	%al
	movzbl	%al, %eax
	movl	%eax, -36(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	_Z4funci, .-_Z4funci
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$33, %edi
	call	_Z4funci
	movl	%eax, -4(%rbp)
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L11
	cmpl	$65535, -8(%rbp)
	jne	.L11
	movl	k(%rip), %eax
	movl	%eax, k2(%rip)
.L11:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_a, @function
_GLOBAL__sub_I_a:
.LFB3:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	_GLOBAL__sub_I_a, .-_GLOBAL__sub_I_a
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_a
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
