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
	.long	3
	.text
	.globl	_Z1fi
	.type	_Z1fi, @function
_Z1fi:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movl	%edi, -52(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movq	%rsp, %rax
	movq	%rax, %rbx
	movl	-52(%rbp), %eax
	cltq
	subq	$1, %rax
	movq	%rax, -40(%rbp)
	movq	%rax, %rdx
	addq	$1, %rdx
	movq	%rdx, %r10
	movl	$0, %r11d
	movq	%rax, %rdx
	addq	$1, %rdx
	movq	%rdx, %r8
	movl	$0, %r9d
	addq	$1, %rax
	salq	$2, %rax
	leaq	3(%rax), %rdx
	movl	$16, %eax
	subq	$1, %rax
	addq	%rdx, %rax
	movl	$16, %esi
	movl	$0, %edx
	divq	%rsi
	imulq	$16, %rax, %rax
	subq	%rax, %rsp
	movq	%rsp, %rax
	addq	$3, %rax
	shrq	$2, %rax
	salq	$2, %rax
	movq	%rax, -32(%rbp)
	movl	-52(%rbp), %eax
	movl	%eax, %edi
	call	_Z1fi
	movq	%rbx, %rsp
	movq	-24(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L3
	call	__stack_chk_fail@PLT
.L3:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	_Z1fi, .-_Z1fi
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
	movl	16+a(%rip), %eax
	addl	$77, %eax
	movl	%eax, 12+a(%rip)
	movl	$6, -8(%rbp)
	movl	-8(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
