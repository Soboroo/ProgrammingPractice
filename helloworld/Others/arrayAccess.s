	.file	"arrayAccess.c"
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "%dhelo\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$80, %rsp
	.seh_stackalloc	80
	.seh_endprologue
	call	__main
	movl	$5, -48(%rbp)
	movl	$7, -44(%rbp)
	movl	$23, -40(%rbp)
	movl	$7, -36(%rbp)
	movl	$8, -32(%rbp)
	movl	$2, -28(%rbp)
	movl	$8, -24(%rbp)
	movl	$5, -20(%rbp)
	movl	$9, -16(%rbp)
	movl	$3, -12(%rbp)
	movl	-24(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC0(%rip), %rcx
	call	printf
	movl	$0, %eax
	addq	$80, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	printf;	.scl	2;	.type	32;	.endef
