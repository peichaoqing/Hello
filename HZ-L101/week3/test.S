	.file	"test.c"
	.text
	.globl	mymul
	.type	mymul, @function
mymul:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	movl	8(%ebp), %eax
	imull	12(%ebp), %eax
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	mymul, .-mymul
	.section	.rodata
.LC1:
	.string	"hello"
.LC2:
	.string	"max=%d"
.LC3:
	.string	"%d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$64, %esp
	fildl	28(%esp)
	fldl	.LC0
	fmulp	%st, %st(1)
	fildl	28(%esp)
	fmulp	%st, %st(1)
	fstpl	32(%esp)
	movl	$0, 24(%esp)
	jmp	.L4
.L5:
	addl	$1, 24(%esp)
.L4:
	cmpl	$5, 24(%esp)
	jle	.L5
	movl	$.LC1, (%esp)
	call	puts
	movl	$3, 4(%esp)
	movl	$.LC2, (%esp)
	call	printf
	movl	$24, 4(%esp)
	movl	$.LC3, (%esp)
	call	printf
	movl	$64, 4(%esp)
	movl	$6, (%esp)
	call	mymul
	movl	%eax, 4(%esp)
	movl	$.LC3, (%esp)
	call	printf
	movl	$96, 4(%esp)
	movl	$.LC3, (%esp)
	call	printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC0:
	.long	1293080650
	.long	1074340347
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
