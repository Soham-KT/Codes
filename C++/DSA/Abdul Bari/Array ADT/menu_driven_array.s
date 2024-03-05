	.file	"menu_driven_array.cpp"
	.text
.lcomm _ZStL8__ioinit,1,1
	.section .rdata,"dr"
.LC0:
	.ascii "Enter size of array: \0"
	.align 8
.LC1:
	.ascii "Enter length of array (<=size): \0"
.LC2:
	.ascii "Enter in array: \0"
	.section	.text$_ZN5Array5entryEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZN5Array5entryEv
	.def	_ZN5Array5entryEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN5Array5entryEv
_ZN5Array5entryEv:
.LFB1807:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	16(%rbp), %rax
	addq	$8, %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt3cin(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSirsERi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	16(%rbp), %rax
	addq	$12, %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt3cin(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSirsERi
	movq	16(%rbp), %rax
	movl	12(%rax), %eax
	cltq
	movabsq	$2305843009213693950, %rdx
	cmpq	%rdx, %rax
	ja	.L2
	salq	$2, %rax
	movq	%rax, %rcx
	call	_Znay
	movq	%rax, %rdx
	movq	16(%rbp), %rax
	movq	%rdx, (%rax)
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$0, -4(%rbp)
	jmp	.L4
.L2:
	call	__cxa_throw_bad_array_new_length
.L5:
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt3cin(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSirsERi
	addl	$1, -4(%rbp)
.L4:
	movq	16(%rbp), %rax
	movl	12(%rax), %eax
	cmpl	%eax, -4(%rbp)
	jl	.L5
	nop
	nop
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC3:
	.ascii " \0"
	.section	.text$_ZN5Array7displayEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZN5Array7displayEv
	.def	_ZN5Array7displayEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN5Array7displayEv
_ZN5Array7displayEv:
.LFB1808:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L7
.L8:
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, %edx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSolsEi
	movq	%rax, %rcx
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	addl	$1, -4(%rbp)
.L7:
	movq	16(%rbp), %rax
	movl	12(%rax), %eax
	cmpl	%eax, -4(%rbp)
	jl	.L8
	movq	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSolsEPFRSoS_E
	nop
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN5Array6appendEi,"x"
	.linkonce discard
	.align 2
	.globl	_ZN5Array6appendEi
	.def	_ZN5Array6appendEi;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN5Array6appendEi
_ZN5Array6appendEi:
.LFB1809:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	%edx, 24(%rbp)
	movq	16(%rbp), %rax
	movl	12(%rax), %edx
	movq	16(%rbp), %rax
	movl	8(%rax), %eax
	cmpl	%eax, %edx
	jge	.L12
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movq	16(%rbp), %rax
	movl	12(%rax), %eax
	cltq
	salq	$2, %rax
	addq	%rax, %rdx
	movl	24(%rbp), %eax
	movl	%eax, (%rdx)
	movq	16(%rbp), %rax
	movl	12(%rax), %eax
	leal	1(%rax), %edx
	movq	16(%rbp), %rax
	movl	%edx, 12(%rax)
	jmp	.L9
.L12:
	nop
.L9:
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN5Array6insertEii,"x"
	.linkonce discard
	.align 2
	.globl	_ZN5Array6insertEii
	.def	_ZN5Array6insertEii;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN5Array6insertEii
_ZN5Array6insertEii:
.LFB1810:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	%edx, 24(%rbp)
	movl	%r8d, 32(%rbp)
	cmpl	$0, 32(%rbp)
	js	.L18
	movq	16(%rbp), %rax
	movl	12(%rax), %eax
	cmpl	%eax, 32(%rbp)
	jge	.L18
	movq	16(%rbp), %rax
	movl	12(%rax), %edx
	movq	16(%rbp), %rax
	movl	8(%rax), %eax
	cmpl	%eax, %edx
	jge	.L18
	movq	16(%rbp), %rax
	movl	12(%rax), %eax
	movl	%eax, -4(%rbp)
	jmp	.L15
.L16:
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	subq	$4, %rax
	leaq	(%rdx,%rax), %rcx
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rax, %rdx
	movl	(%rcx), %eax
	movl	%eax, (%rdx)
	addl	$1, -4(%rbp)
.L15:
	movl	-4(%rbp), %eax
	cmpl	32(%rbp), %eax
	jg	.L16
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	32(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rax, %rdx
	movl	24(%rbp), %eax
	movl	%eax, (%rdx)
	movq	16(%rbp), %rax
	movl	12(%rax), %eax
	leal	1(%rax), %edx
	movq	16(%rbp), %rax
	movl	%edx, 12(%rax)
	jmp	.L13
.L18:
	nop
.L13:
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN5Array6removeEi,"x"
	.linkonce discard
	.align 2
	.globl	_ZN5Array6removeEi
	.def	_ZN5Array6removeEi;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN5Array6removeEi
_ZN5Array6removeEi:
.LFB1811:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	%edx, 24(%rbp)
	movl	24(%rbp), %eax
	movl	%eax, -4(%rbp)
	jmp	.L20
.L21:
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	addq	$1, %rax
	salq	$2, %rax
	leaq	(%rdx,%rax), %rcx
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rax, %rdx
	movl	(%rcx), %eax
	movl	%eax, (%rdx)
	addl	$1, -4(%rbp)
.L20:
	movq	16(%rbp), %rax
	movl	12(%rax), %eax
	subl	$1, %eax
	cmpl	%eax, -4(%rbp)
	jl	.L21
	movq	16(%rbp), %rax
	movl	12(%rax), %eax
	leal	-1(%rax), %edx
	movq	16(%rbp), %rax
	movl	%edx, 12(%rax)
	nop
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN5Array6searchEi,"x"
	.linkonce discard
	.align 2
	.globl	_ZN5Array6searchEi
	.def	_ZN5Array6searchEi;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN5Array6searchEi
_ZN5Array6searchEi:
.LFB1812:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	%edx, 24(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L23
.L26:
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	%eax, 24(%rbp)
	jne	.L24
	movl	-4(%rbp), %eax
	jmp	.L25
.L24:
	addl	$1, -4(%rbp)
.L23:
	movq	16(%rbp), %rax
	movl	12(%rax), %eax
	cmpl	%eax, -4(%rbp)
	jl	.L26
	movl	$0, %eax
.L25:
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN5Array3getEi,"x"
	.linkonce discard
	.align 2
	.globl	_ZN5Array3getEi
	.def	_ZN5Array3getEi;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN5Array3getEi
_ZN5Array3getEi:
.LFB1813:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	%edx, 24(%rbp)
	cmpl	$0, 24(%rbp)
	js	.L28
	movq	16(%rbp), %rax
	movl	12(%rax), %eax
	cmpl	%eax, 24(%rbp)
	jge	.L28
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	24(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	jmp	.L27
.L28:
.L27:
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN5Array3setEii,"x"
	.linkonce discard
	.align 2
	.globl	_ZN5Array3setEii
	.def	_ZN5Array3setEii;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN5Array3setEii
_ZN5Array3setEii:
.LFB1814:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	%edx, 24(%rbp)
	movl	%r8d, 32(%rbp)
	cmpl	$0, 24(%rbp)
	js	.L33
	movq	16(%rbp), %rax
	movl	12(%rax), %eax
	cmpl	%eax, 24(%rbp)
	jge	.L33
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	24(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rax, %rdx
	movl	32(%rbp), %eax
	movl	%eax, (%rdx)
	jmp	.L30
.L33:
	nop
.L30:
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN5Array3maxEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZN5Array3maxEv
	.def	_ZN5Array3maxEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN5Array3maxEv
_ZN5Array3maxEv:
.LFB1815:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	movl	(%rax), %eax
	movl	%eax, -4(%rbp)
	movl	$0, -8(%rbp)
	jmp	.L35
.L37:
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	-8(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	%eax, -4(%rbp)
	jge	.L36
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	-8(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -4(%rbp)
.L36:
	addl	$1, -8(%rbp)
.L35:
	movq	16(%rbp), %rax
	movl	12(%rax), %eax
	cmpl	%eax, -8(%rbp)
	jl	.L37
	movl	-4(%rbp), %eax
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN5Array3minEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZN5Array3minEv
	.def	_ZN5Array3minEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN5Array3minEv
_ZN5Array3minEv:
.LFB1816:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	movl	(%rax), %eax
	movl	%eax, -4(%rbp)
	movl	$0, -8(%rbp)
	jmp	.L40
.L42:
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	-8(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	%eax, -4(%rbp)
	jle	.L41
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	-8(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -4(%rbp)
.L41:
	addl	$1, -8(%rbp)
.L40:
	movq	16(%rbp), %rax
	movl	12(%rax), %eax
	cmpl	%eax, -8(%rbp)
	jl	.L42
	movl	-4(%rbp), %eax
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN5Array3sumEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZN5Array3sumEv
	.def	_ZN5Array3sumEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN5Array3sumEv
_ZN5Array3sumEv:
.LFB1817:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	$0, -4(%rbp)
	movl	$0, -8(%rbp)
	jmp	.L45
.L46:
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	-8(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	addl	%eax, -4(%rbp)
	addl	$1, -8(%rbp)
.L45:
	movq	16(%rbp), %rax
	movl	12(%rax), %eax
	cmpl	%eax, -8(%rbp)
	jl	.L46
	movl	-4(%rbp), %eax
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN5Array3avgEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZN5Array3avgEv
	.def	_ZN5Array3avgEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN5Array3avgEv
_ZN5Array3avgEv:
.LFB1818:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	$0, -4(%rbp)
	movl	$0, -8(%rbp)
	jmp	.L49
.L50:
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	-8(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	addl	%eax, -4(%rbp)
	addl	$1, -8(%rbp)
.L49:
	movq	16(%rbp), %rax
	movl	12(%rax), %eax
	cmpl	%eax, -8(%rbp)
	jl	.L50
	pxor	%xmm0, %xmm0
	cvtsi2ssl	-4(%rbp), %xmm0
	movq	16(%rbp), %rax
	movl	12(%rax), %eax
	pxor	%xmm1, %xmm1
	cvtsi2ssl	%eax, %xmm1
	divss	%xmm1, %xmm0
	movss	%xmm0, -12(%rbp)
	movss	-12(%rbp), %xmm0
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN5Array7reverseEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZN5Array7reverseEv
	.def	_ZN5Array7reverseEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN5Array7reverseEv
_ZN5Array7reverseEv:
.LFB1819:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L53
.L54:
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -8(%rbp)
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movq	16(%rbp), %rax
	movl	12(%rax), %eax
	subl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	leaq	(%rdx,%rax), %rcx
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rax, %rdx
	movl	(%rcx), %eax
	movl	%eax, (%rdx)
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movq	16(%rbp), %rax
	movl	12(%rax), %eax
	subl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rax, %rdx
	movl	-8(%rbp), %eax
	movl	%eax, (%rdx)
	addl	$1, -4(%rbp)
.L53:
	movq	16(%rbp), %rax
	movl	12(%rax), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	cmpl	%eax, -4(%rbp)
	jl	.L54
	nop
	nop
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN5Array4sortEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZN5Array4sortEv
	.def	_ZN5Array4sortEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN5Array4sortEv
_ZN5Array4sortEv:
.LFB1820:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L56
.L60:
	movl	$0, -8(%rbp)
	jmp	.L57
.L59:
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	-8(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movq	16(%rbp), %rax
	movq	(%rax), %rcx
	movl	-8(%rbp), %eax
	cltq
	addq	$1, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jle	.L58
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	-8(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -12(%rbp)
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	-8(%rbp), %eax
	cltq
	addq	$1, %rax
	salq	$2, %rax
	leaq	(%rdx,%rax), %rcx
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	-8(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rax, %rdx
	movl	(%rcx), %eax
	movl	%eax, (%rdx)
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	-8(%rbp), %eax
	cltq
	addq	$1, %rax
	salq	$2, %rax
	addq	%rax, %rdx
	movl	-12(%rbp), %eax
	movl	%eax, (%rdx)
.L58:
	addl	$1, -8(%rbp)
.L57:
	movq	16(%rbp), %rax
	movl	12(%rax), %eax
	subl	-4(%rbp), %eax
	subl	$1, %eax
	cmpl	%eax, -8(%rbp)
	jl	.L59
	addl	$1, -4(%rbp)
.L56:
	movq	16(%rbp), %rax
	movl	12(%rax), %eax
	cmpl	%eax, -4(%rbp)
	jl	.L60
	nop
	nop
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN5Array13insert_sortedEii,"x"
	.linkonce discard
	.align 2
	.globl	_ZN5Array13insert_sortedEii
	.def	_ZN5Array13insert_sortedEii;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN5Array13insert_sortedEii
_ZN5Array13insert_sortedEii:
.LFB1821:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	%edx, 24(%rbp)
	movl	%r8d, 32(%rbp)
	cmpl	$0, 24(%rbp)
	js	.L68
	movq	16(%rbp), %rax
	movl	12(%rax), %eax
	cmpl	%eax, 24(%rbp)
	jge	.L68
	movq	16(%rbp), %rax
	movl	12(%rax), %edx
	movq	16(%rbp), %rax
	movl	8(%rax), %eax
	cmpl	%eax, %edx
	jge	.L68
	movq	16(%rbp), %rax
	movl	12(%rax), %eax
	subl	$1, %eax
	movl	%eax, -4(%rbp)
	jmp	.L63
.L67:
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	%eax, 32(%rbp)
	jge	.L69
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	subq	$4, %rax
	leaq	(%rdx,%rax), %rcx
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rax, %rdx
	movl	(%rcx), %eax
	movl	%eax, (%rdx)
	subl	$1, -4(%rbp)
.L63:
	cmpl	$0, -4(%rbp)
	jns	.L67
	jmp	.L66
.L69:
	nop
.L66:
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	24(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rax, %rdx
	movl	32(%rbp), %eax
	movl	%eax, (%rdx)
	movq	16(%rbp), %rax
	movl	12(%rax), %eax
	leal	1(%rax), %edx
	movq	16(%rbp), %rax
	movl	%edx, 12(%rax)
.L68:
	nop
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN5Array9is_sortedEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZN5Array9is_sortedEv
	.def	_ZN5Array9is_sortedEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN5Array9is_sortedEv
_ZN5Array9is_sortedEv:
.LFB1822:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	$1, -4(%rbp)
	jmp	.L71
.L74:
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movq	16(%rbp), %rax
	movq	(%rax), %rcx
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	subq	$4, %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jge	.L72
	movl	$0, %eax
	jmp	.L73
.L72:
	addl	$1, -4(%rbp)
.L71:
	movq	16(%rbp), %rax
	movl	12(%rax), %eax
	cmpl	%eax, -4(%rbp)
	jl	.L74
	movl	$1, %eax
.L73:
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN5Array9rearrangeEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZN5Array9rearrangeEv
	.def	_ZN5Array9rearrangeEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN5Array9rearrangeEv
_ZN5Array9rearrangeEv:
.LFB1823:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	$0, -4(%rbp)
	movq	16(%rbp), %rax
	movl	12(%rax), %eax
	subl	$1, %eax
	movl	%eax, -8(%rbp)
	jmp	.L76
.L78:
	addl	$1, -4(%rbp)
.L77:
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	js	.L78
	jmp	.L79
.L80:
	subl	$1, -8(%rbp)
.L79:
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	-8(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	jns	.L80
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jge	.L76
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -12(%rbp)
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	-8(%rbp), %eax
	cltq
	salq	$2, %rax
	leaq	(%rdx,%rax), %rcx
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rax, %rdx
	movl	(%rcx), %eax
	movl	%eax, (%rdx)
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movl	-8(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rax, %rdx
	movl	-12(%rbp), %eax
	movl	%eax, (%rdx)
.L76:
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jl	.L77
	nop
	nop
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN5Array5mergeES_S_,"x"
	.linkonce discard
	.align 2
	.globl	_ZN5Array5mergeES_S_
	.def	_ZN5Array5mergeES_S_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN5Array5mergeES_S_
_ZN5Array5mergeES_S_:
.LFB1824:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	leaq	48(%rsp), %rbp
	.seh_setframe	%rbp, 48
	.seh_endprologue
	movq	%rcx, 32(%rbp)
	movq	%rdx, %rbx
	movq	(%rbx), %rax
	movq	8(%rbx), %rdx
	movq	%rax, -32(%rbp)
	movq	%rdx, -24(%rbp)
	movq	%r8, %rbx
	movq	(%rbx), %rax
	movq	8(%rbx), %rdx
	movq	%rax, -48(%rbp)
	movq	%rdx, -40(%rbp)
	movl	-24(%rbp), %edx
	movl	-40(%rbp), %eax
	addl	%eax, %edx
	movq	32(%rbp), %rax
	movl	%edx, 8(%rax)
	movl	-20(%rbp), %edx
	movl	-36(%rbp), %eax
	addl	%eax, %edx
	movq	32(%rbp), %rax
	movl	%edx, 12(%rax)
	movl	$0, -4(%rbp)
	jmp	.L83
.L84:
	movq	-32(%rbp), %rdx
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	leaq	(%rdx,%rax), %rcx
	movq	32(%rbp), %rax
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rax, %rdx
	movl	(%rcx), %eax
	movl	%eax, (%rdx)
	addl	$1, -4(%rbp)
.L83:
	movl	-20(%rbp), %eax
	cmpl	%eax, -4(%rbp)
	jl	.L84
	movl	$0, -8(%rbp)
	jmp	.L85
.L86:
	movq	-48(%rbp), %rdx
	movl	-8(%rbp), %eax
	cltq
	salq	$2, %rax
	leaq	(%rdx,%rax), %rcx
	movq	32(%rbp), %rax
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rax, %rdx
	movl	(%rcx), %eax
	movl	%eax, (%rdx)
	addl	$1, -8(%rbp)
	addl	$1, -4(%rbp)
.L85:
	movl	-36(%rbp), %eax
	cmpl	%eax, -8(%rbp)
	jl	.L86
	nop
	nop
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN5Array5UnionES_S_,"x"
	.linkonce discard
	.align 2
	.globl	_ZN5Array5UnionES_S_
	.def	_ZN5Array5UnionES_S_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN5Array5UnionES_S_
_ZN5Array5UnionES_S_:
.LFB1825:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	leaq	48(%rsp), %rbp
	.seh_setframe	%rbp, 48
	.seh_endprologue
	movq	%rcx, 32(%rbp)
	movq	%rdx, %rbx
	movq	(%rbx), %rax
	movq	8(%rbx), %rdx
	movq	%rax, -32(%rbp)
	movq	%rdx, -24(%rbp)
	movq	%r8, %rbx
	movq	(%rbx), %rax
	movq	8(%rbx), %rdx
	movq	%rax, -48(%rbp)
	movq	%rdx, -40(%rbp)
	movl	$0, -4(%rbp)
	movl	$0, -8(%rbp)
	movl	$0, -12(%rbp)
	jmp	.L88
.L92:
	movq	-32(%rbp), %rdx
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movq	-48(%rbp), %rcx
	movl	-8(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jge	.L89
	movq	-32(%rbp), %rcx
	movl	-4(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -4(%rbp)
	cltq
	salq	$2, %rax
	addq	%rcx, %rax
	movl	(%rax), %edx
	movq	32(%rbp), %rax
	movq	(%rax), %r8
	movl	-12(%rbp), %eax
	leal	1(%rax), %ecx
	movl	%ecx, -12(%rbp)
	cltq
	salq	$2, %rax
	addq	%r8, %rax
	movl	%edx, (%rax)
	jmp	.L88
.L89:
	movq	-32(%rbp), %rdx
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movq	-48(%rbp), %rcx
	movl	-8(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jle	.L90
	movq	-48(%rbp), %rcx
	movl	-8(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -8(%rbp)
	cltq
	salq	$2, %rax
	addq	%rcx, %rax
	movl	(%rax), %edx
	movq	32(%rbp), %rax
	movq	(%rax), %r8
	movl	-12(%rbp), %eax
	leal	1(%rax), %ecx
	movl	%ecx, -12(%rbp)
	cltq
	salq	$2, %rax
	addq	%r8, %rax
	movl	%edx, (%rax)
	jmp	.L88
.L90:
	movq	-32(%rbp), %rcx
	movl	-4(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -4(%rbp)
	cltq
	salq	$2, %rax
	addq	%rcx, %rax
	movl	(%rax), %edx
	movq	32(%rbp), %rax
	movq	(%rax), %r8
	movl	-12(%rbp), %eax
	leal	1(%rax), %ecx
	movl	%ecx, -12(%rbp)
	cltq
	salq	$2, %rax
	addq	%r8, %rax
	movl	%edx, (%rax)
	addl	$1, -8(%rbp)
.L88:
	movl	-20(%rbp), %eax
	cmpl	%eax, -4(%rbp)
	jge	.L93
	movl	-36(%rbp), %eax
	cmpl	%eax, -8(%rbp)
	jl	.L92
	jmp	.L93
.L94:
	movq	-32(%rbp), %rdx
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movq	32(%rbp), %rax
	movq	(%rax), %r8
	movl	-12(%rbp), %eax
	leal	1(%rax), %ecx
	movl	%ecx, -12(%rbp)
	cltq
	salq	$2, %rax
	addq	%r8, %rax
	movl	%edx, (%rax)
	addl	$1, -4(%rbp)
.L93:
	movl	-20(%rbp), %eax
	cmpl	%eax, -4(%rbp)
	jl	.L94
	jmp	.L95
.L96:
	movq	-48(%rbp), %rdx
	movl	-8(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movq	32(%rbp), %rax
	movq	(%rax), %r8
	movl	-12(%rbp), %eax
	leal	1(%rax), %ecx
	movl	%ecx, -12(%rbp)
	cltq
	salq	$2, %rax
	addq	%r8, %rax
	movl	%edx, (%rax)
	addl	$1, -8(%rbp)
.L95:
	movl	-36(%rbp), %eax
	cmpl	%eax, -8(%rbp)
	jl	.L96
	movq	32(%rbp), %rax
	movl	-12(%rbp), %edx
	movl	%edx, 12(%rax)
	movl	-24(%rbp), %edx
	movl	-40(%rbp), %eax
	addl	%eax, %edx
	movq	32(%rbp), %rax
	movl	%edx, 8(%rax)
	nop
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 8
.LC4:
	.ascii "1)Display\12"
	.ascii "2)Append\12"
	.ascii "3)Insert\12"
	.ascii "4)Remove\12"
	.ascii "5)Search\12"
	.ascii "6)Get\12"
	.ascii "7)Set\12"
	.ascii "8)Max\12"
	.ascii "9)Min\12"
	.ascii "10)Sum\12"
	.ascii "11)Average\12"
	.ascii "12)Reverse\12"
	.ascii "13)Sort\12"
	.ascii "14)Insert in sorted\12"
	.ascii "15)Check if sorted\12"
	.ascii "16)Rearrange(+ve and -ve elements)\12"
	.ascii "17)Merge\12"
	.ascii "18)Union\12"
	.ascii "19)Intersection\12\0"
.LC5:
	.ascii "Enter your choice:\0"
.LC6:
	.ascii "Array: \0"
.LC7:
	.ascii "Enter element to append: \0"
.LC8:
	.ascii "Element inserted\0"
	.align 8
.LC9:
	.ascii "Enter element and position to insert: \0"
.LC10:
	.ascii "Element successfully inserted\0"
	.align 8
.LC11:
	.ascii "Enter position of element to remove: \0"
.LC12:
	.ascii "Element successfully removed\0"
.LC13:
	.ascii "Enter element to search: \0"
.LC14:
	.ascii "Element found at: \0"
.LC15:
	.ascii "Element not found\0"
	.align 8
.LC16:
	.ascii "Enter index of element you want: \0"
.LC17:
	.ascii "Element: \0"
	.align 8
.LC18:
	.ascii "Enter new element and index to set: \0"
.LC19:
	.ascii "Element successfully swapped\0"
	.align 8
.LC20:
	.ascii "The maximum element in array is: \0"
	.align 8
.LC21:
	.ascii "The minimum element in array is: \0"
	.align 8
.LC22:
	.ascii "The summation elements in array is: \0"
	.align 8
.LC23:
	.ascii "The average elements in array is: \0"
.LC24:
	.ascii "The reverse array is: \0"
.LC25:
	.ascii "Sorted array: \0"
	.align 8
.LC26:
	.ascii "Enter element and position of element: \0"
.LC27:
	.ascii "Array is sorted\0"
.LC28:
	.ascii "Array is not sorted\0"
.LC29:
	.ascii "Rearranged array: \0"
.LC30:
	.ascii "Enter another array: \0"
.LC31:
	.ascii "Array successfully merged\0"
.LC32:
	.ascii "Array successfully unioned\0"
	.align 8
.LC33:
	.ascii "Array successfully intersected\0"
.LC34:
	.ascii "Invalid Entry\0"
.LC35:
	.ascii "Another entry?(y/n): \0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB1827:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$280, %rsp
	.seh_stackalloc	280
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movl	%ecx, 176(%rbp)
	movq	%rdx, 184(%rbp)
	call	__main
	leaq	112(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN5Array5entryEv
	movq	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSolsEPFRSoS_E
.L121:
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	108(%rbp), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt3cin(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSirsERi
	movl	108(%rbp), %eax
	cmpl	$1, %eax
	jne	.L98
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	112(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN5Array7displayEv
	jmp	.L99
.L98:
	movl	108(%rbp), %eax
	cmpl	$2, %eax
	jne	.L100
	leaq	.LC7(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	104(%rbp), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt3cin(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSirsERi
	movl	104(%rbp), %edx
	leaq	112(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN5Array6appendEi
	leaq	.LC8(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rcx
	movq	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rax
	movq	%rax, %rdx
	call	_ZNSolsEPFRSoS_E
	jmp	.L99
.L100:
	movl	108(%rbp), %eax
	cmpl	$3, %eax
	jne	.L101
	leaq	.LC9(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	100(%rbp), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt3cin(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSirsERi
	movq	%rax, %rcx
	leaq	96(%rbp), %rax
	movq	%rax, %rdx
	call	_ZNSirsERi
	movl	96(%rbp), %eax
	leal	-1(%rax), %ecx
	movl	100(%rbp), %edx
	leaq	112(%rbp), %rax
	movl	%ecx, %r8d
	movq	%rax, %rcx
	call	_ZN5Array6insertEii
	leaq	.LC10(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rcx
	movq	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rax
	movq	%rax, %rdx
	call	_ZNSolsEPFRSoS_E
	jmp	.L99
.L101:
	movl	108(%rbp), %eax
	cmpl	$4, %eax
	jne	.L102
	leaq	.LC11(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	92(%rbp), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt3cin(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSirsERi
	movl	92(%rbp), %edx
	leaq	112(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN5Array6removeEi
	leaq	.LC12(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rcx
	movq	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rax
	movq	%rax, %rdx
	call	_ZNSolsEPFRSoS_E
	jmp	.L99
.L102:
	movl	108(%rbp), %eax
	cmpl	$5, %eax
	jne	.L103
	leaq	.LC13(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	88(%rbp), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt3cin(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSirsERi
	movl	88(%rbp), %edx
	leaq	112(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN5Array6searchEi
	movl	%eax, 136(%rbp)
	cmpl	$0, 136(%rbp)
	je	.L104
	leaq	.LC14(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rcx
	movl	136(%rbp), %eax
	movl	%eax, %edx
	call	_ZNSolsEi
	movq	%rax, %rcx
	movq	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rax
	movq	%rax, %rdx
	call	_ZNSolsEPFRSoS_E
	jmp	.L99
.L104:
	leaq	.LC15(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rcx
	movq	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rax
	movq	%rax, %rdx
	call	_ZNSolsEPFRSoS_E
	jmp	.L99
.L103:
	movl	108(%rbp), %eax
	cmpl	$6, %eax
	jne	.L106
	leaq	.LC16(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	84(%rbp), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt3cin(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSirsERi
	leaq	.LC17(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rbx
	movl	84(%rbp), %edx
	leaq	112(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN5Array3getEi
	movl	%eax, %edx
	movq	%rbx, %rcx
	call	_ZNSolsEi
	jmp	.L99
.L106:
	movl	108(%rbp), %eax
	cmpl	$7, %eax
	jne	.L107
	leaq	.LC18(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	80(%rbp), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt3cin(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSirsERi
	movq	%rax, %rcx
	leaq	76(%rbp), %rax
	movq	%rax, %rdx
	call	_ZNSirsERi
	movl	76(%rbp), %ecx
	movl	80(%rbp), %edx
	leaq	112(%rbp), %rax
	movl	%ecx, %r8d
	movq	%rax, %rcx
	call	_ZN5Array3setEii
	leaq	.LC19(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rcx
	movq	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rax
	movq	%rax, %rdx
	call	_ZNSolsEPFRSoS_E
	jmp	.L99
.L107:
	movl	108(%rbp), %eax
	cmpl	$8, %eax
	jne	.L108
	leaq	.LC20(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rbx
	leaq	112(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN5Array3maxEv
	movl	%eax, %edx
	movq	%rbx, %rcx
	call	_ZNSolsEi
	jmp	.L99
.L108:
	movl	108(%rbp), %eax
	cmpl	$9, %eax
	jne	.L109
	leaq	.LC21(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rbx
	leaq	112(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN5Array3minEv
	movl	%eax, %edx
	movq	%rbx, %rcx
	call	_ZNSolsEi
	jmp	.L99
.L109:
	movl	108(%rbp), %eax
	cmpl	$10, %eax
	jne	.L110
	leaq	.LC22(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rbx
	leaq	112(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN5Array3sumEv
	movl	%eax, %edx
	movq	%rbx, %rcx
	call	_ZNSolsEi
	jmp	.L99
.L110:
	movl	108(%rbp), %eax
	cmpl	$11, %eax
	jne	.L111
	leaq	.LC23(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rbx
	leaq	112(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN5Array3avgEv
	movd	%xmm0, %eax
	movd	%eax, %xmm1
	movq	%rbx, %rcx
	call	_ZNSolsEf
	jmp	.L99
.L111:
	movl	108(%rbp), %eax
	cmpl	$12, %eax
	jne	.L112
	movq	112(%rbp), %rax
	movq	120(%rbp), %rdx
	movq	%rax, 48(%rbp)
	movq	%rdx, 56(%rbp)
	leaq	.LC24(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	48(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN5Array7reverseEv
	leaq	48(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN5Array7displayEv
	jmp	.L99
.L112:
	movl	108(%rbp), %eax
	cmpl	$13, %eax
	jne	.L113
	leaq	112(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN5Array4sortEv
	leaq	.LC25(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	112(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN5Array7displayEv
	jmp	.L99
.L113:
	movl	108(%rbp), %eax
	cmpl	$14, %eax
	jne	.L114
	leaq	.LC26(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	44(%rbp), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt3cin(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSirsERi
	movq	%rax, %rcx
	leaq	40(%rbp), %rax
	movq	%rax, %rdx
	call	_ZNSirsERi
	movl	44(%rbp), %ecx
	movl	40(%rbp), %edx
	leaq	112(%rbp), %rax
	movl	%ecx, %r8d
	movq	%rax, %rcx
	call	_ZN5Array13insert_sortedEii
	jmp	.L99
.L114:
	movl	108(%rbp), %eax
	cmpl	$15, %eax
	jne	.L115
	leaq	112(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN5Array9is_sortedEv
	movl	%eax, 140(%rbp)
	cmpl	$0, 140(%rbp)
	je	.L116
	leaq	.LC27(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rcx
	movq	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rax
	movq	%rax, %rdx
	call	_ZNSolsEPFRSoS_E
	jmp	.L99
.L116:
	leaq	.LC28(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rcx
	movq	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rax
	movq	%rax, %rdx
	call	_ZNSolsEPFRSoS_E
	jmp	.L99
.L115:
	movl	108(%rbp), %eax
	cmpl	$16, %eax
	jne	.L117
	leaq	.LC29(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	112(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN5Array9rearrangeEv
	leaq	112(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN5Array7displayEv
	jmp	.L99
.L117:
	movl	108(%rbp), %eax
	cmpl	$17, %eax
	jne	.L118
	movq	112(%rbp), %rax
	movq	120(%rbp), %rdx
	movq	%rax, 16(%rbp)
	movq	%rdx, 24(%rbp)
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rbp, %rax
	movq	%rax, %rcx
	call	_ZN5Array5entryEv
	movq	16(%rbp), %rax
	movq	24(%rbp), %rdx
	movq	%rax, -80(%rbp)
	movq	%rdx, -72(%rbp)
	movq	0(%rbp), %rax
	movq	8(%rbp), %rdx
	movq	%rax, -96(%rbp)
	movq	%rdx, -88(%rbp)
	leaq	-96(%rbp), %rcx
	leaq	-80(%rbp), %rdx
	leaq	112(%rbp), %rax
	movq	%rcx, %r8
	movq	%rax, %rcx
	call	_ZN5Array5mergeES_S_
	leaq	.LC31(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rcx
	movq	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rax
	movq	%rax, %rdx
	call	_ZNSolsEPFRSoS_E
	jmp	.L99
.L118:
	movl	108(%rbp), %eax
	cmpl	$18, %eax
	jne	.L119
	movq	112(%rbp), %rax
	movq	120(%rbp), %rdx
	movq	%rax, -16(%rbp)
	movq	%rdx, -8(%rbp)
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-32(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN5Array5entryEv
	movq	-16(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rax, -80(%rbp)
	movq	%rdx, -72(%rbp)
	movq	-32(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rax, -96(%rbp)
	movq	%rdx, -88(%rbp)
	leaq	-96(%rbp), %rcx
	leaq	-80(%rbp), %rdx
	leaq	112(%rbp), %rax
	movq	%rcx, %r8
	movq	%rax, %rcx
	call	_ZN5Array5UnionES_S_
	leaq	.LC32(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rcx
	movq	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rax
	movq	%rax, %rdx
	call	_ZNSolsEPFRSoS_E
	jmp	.L99
.L119:
	movl	108(%rbp), %eax
	cmpl	$19, %eax
	jne	.L120
	movq	112(%rbp), %rax
	movq	120(%rbp), %rdx
	movq	%rax, -48(%rbp)
	movq	%rdx, -40(%rbp)
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-64(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN5Array5entryEv
	movq	-48(%rbp), %rax
	movq	-40(%rbp), %rdx
	movq	%rax, -80(%rbp)
	movq	%rdx, -72(%rbp)
	movq	-64(%rbp), %rax
	movq	-56(%rbp), %rdx
	movq	%rax, -96(%rbp)
	movq	%rdx, -88(%rbp)
	leaq	-96(%rbp), %rcx
	leaq	-80(%rbp), %rdx
	leaq	112(%rbp), %rax
	movq	%rcx, %r8
	movq	%rax, %rcx
	call	_ZN5Array5UnionES_S_
	leaq	.LC33(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rcx
	movq	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rax
	movq	%rax, %rdx
	call	_ZNSolsEPFRSoS_E
	jmp	.L99
.L120:
	leaq	.LC34(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rcx
	movq	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rax
	movq	%rax, %rdx
	call	_ZNSolsEPFRSoS_E
.L99:
	leaq	.LC35(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	135(%rbp), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt3cin(%rip), %rax
	movq	%rax, %rcx
	call	_ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_RS3_
	movzbl	135(%rbp), %eax
	cmpb	$121, %al
	je	.L121
	movl	$0, %eax
	addq	$280, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.def	__tcf_0;	.scl	3;	.type	32;	.endef
	.seh_proc	__tcf_0
__tcf_0:
.LFB2332:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	leaq	_ZStL8__ioinit(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSt8ios_base4InitD1Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	_Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
	.seh_proc	_Z41__static_initialization_and_destruction_0ii
_Z41__static_initialization_and_destruction_0ii:
.LFB2331:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	cmpl	$1, 16(%rbp)
	jne	.L126
	cmpl	$65535, 24(%rbp)
	jne	.L126
	leaq	_ZStL8__ioinit(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSt8ios_base4InitC1Ev
	leaq	__tcf_0(%rip), %rax
	movq	%rax, %rcx
	call	atexit
.L126:
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	_GLOBAL__sub_I_main;	.scl	3;	.type	32;	.endef
	.seh_proc	_GLOBAL__sub_I_main
_GLOBAL__sub_I_main:
.LFB2333:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movl	$65535, %edx
	movl	$1, %ecx
	call	_Z41__static_initialization_and_destruction_0ii
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.ctors,"w"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.ident	"GCC: (Rev10, Built by MSYS2 project) 11.2.0"
	.def	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc;	.scl	2;	.type	32;	.endef
	.def	_ZNSirsERi;	.scl	2;	.type	32;	.endef
	.def	_Znay;	.scl	2;	.type	32;	.endef
	.def	__cxa_throw_bad_array_new_length;	.scl	2;	.type	32;	.endef
	.def	_ZNSolsEi;	.scl	2;	.type	32;	.endef
	.def	_ZNSolsEPFRSoS_E;	.scl	2;	.type	32;	.endef
	.def	_ZNSolsEf;	.scl	2;	.type	32;	.endef
	.def	_ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_RS3_;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	atexit;	.scl	2;	.type	32;	.endef
	.section	.rdata$.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, "dr"
	.globl	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	.linkonce	discard
.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_:
	.quad	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	.section	.rdata$.refptr._ZSt3cin, "dr"
	.globl	.refptr._ZSt3cin
	.linkonce	discard
.refptr._ZSt3cin:
	.quad	_ZSt3cin
	.section	.rdata$.refptr._ZSt4cout, "dr"
	.globl	.refptr._ZSt4cout
	.linkonce	discard
.refptr._ZSt4cout:
	.quad	_ZSt4cout
