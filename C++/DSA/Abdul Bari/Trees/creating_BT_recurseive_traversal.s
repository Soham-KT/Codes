	.file	"creating_BT_recurseive_traversal.cpp"
	.text
.lcomm _ZStL8__ioinit,1,1
	.section	.text$_ZN5QueueC1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZN5QueueC1Ev
	.def	_ZN5QueueC1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN5QueueC1Ev
_ZN5QueueC1Ev:
.LFB1809:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	$16, %ecx
	call	_Znwy
	movq	%rax, %rdx
	movq	16(%rbp), %rax
	movq	%rdx, (%rax)
	movq	16(%rbp), %rax
	movq	$0, (%rax)
	movq	16(%rbp), %rax
	movq	$0, 8(%rax)
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC0:
	.ascii "Queue Full\0"
	.section	.text$_ZN5Queue7enqueueEP9Node_Tree,"x"
	.linkonce discard
	.align 2
	.globl	_ZN5Queue7enqueueEP9Node_Tree
	.def	_ZN5Queue7enqueueEP9Node_Tree;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN5Queue7enqueueEP9Node_Tree
_ZN5Queue7enqueueEP9Node_Tree:
.LFB1810:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movl	$16, %ecx
	call	_Znwy
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	jne	.L3
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rcx
	movq	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rax
	movq	%rax, %rdx
	call	_ZNSolsEPFRSoS_E
	jmp	.L6
.L3:
	movq	-8(%rbp), %rax
	movq	24(%rbp), %rdx
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rax
	movq	$0, 8(%rax)
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	jne	.L5
	movq	16(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	16(%rbp), %rax
	movq	8(%rax), %rdx
	movq	16(%rbp), %rax
	movq	%rdx, (%rax)
	jmp	.L6
.L5:
	movq	16(%rbp), %rax
	movq	8(%rax), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	16(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 8(%rax)
.L6:
	nop
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC1:
	.ascii "Queue Empty\0"
	.section	.text$_ZN5Queue7dequeueEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZN5Queue7dequeueEv
	.def	_ZN5Queue7dequeueEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN5Queue7dequeueEv
_ZN5Queue7dequeueEv:
.LFB1811:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	$0, -8(%rbp)
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	jne	.L8
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rcx
	movq	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rax
	movq	%rax, %rdx
	call	_ZNSolsEPFRSoS_E
	jmp	.L9
.L8:
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	movq	8(%rax), %rdx
	movq	16(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-16(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rcx
	call	free
.L9:
	movq	-8(%rbp), %rax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN5Queue7isEmptyEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZN5Queue7isEmptyEv
	.def	_ZN5Queue7isEmptyEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN5Queue7isEmptyEv
_ZN5Queue7isEmptyEv:
.LFB1812:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	sete	%al
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC2:
	.ascii "Enter root node: \0"
.LC3:
	.ascii "Enter left child of \0"
.LC4:
	.ascii "(-1 if not): \0"
.LC5:
	.ascii "Enter right child of \0"
	.section	.text$_ZN4Tree11create_treeEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZN4Tree11create_treeEv
	.def	_ZN4Tree11create_treeEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN4Tree11create_treeEv
_ZN4Tree11create_treeEv:
.LFB1813:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	16(%rbp), %rax
	addq	$16, %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt3cin(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSirsERi
	movl	$24, %ecx
	call	_Znwy
	movq	%rax, %rdx
	movq	16(%rbp), %rax
	movq	%rdx, 40(%rax)
	movq	16(%rbp), %rax
	movq	40(%rax), %rax
	movq	16(%rbp), %rdx
	movl	16(%rdx), %edx
	movl	%edx, 16(%rax)
	movq	16(%rbp), %rax
	movq	40(%rax), %rax
	movq	$0, 8(%rax)
	movq	16(%rbp), %rdx
	movq	40(%rdx), %rdx
	movq	8(%rax), %rax
	movq	%rax, (%rdx)
	movq	16(%rbp), %rax
	leaq	24(%rax), %rcx
	movq	16(%rbp), %rax
	movq	40(%rax), %rax
	movq	%rax, %rdx
	call	_ZN5Queue7enqueueEP9Node_Tree
	jmp	.L14
.L16:
	movq	16(%rbp), %rax
	addq	$24, %rax
	movq	%rax, %rcx
	call	_ZN5Queue7dequeueEv
	movq	16(%rbp), %rdx
	movq	%rax, (%rdx)
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rcx
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	movl	16(%rax), %eax
	movl	%eax, %edx
	call	_ZNSolsEi
	movq	%rax, %rcx
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	16(%rbp), %rax
	addq	$16, %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt3cin(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSirsERi
	movq	16(%rbp), %rax
	movl	16(%rax), %eax
	cmpl	$-1, %eax
	je	.L15
	movl	$24, %ecx
	call	_Znwy
	movq	%rax, %rdx
	movq	16(%rbp), %rax
	movq	%rdx, 8(%rax)
	movq	16(%rbp), %rax
	movq	8(%rax), %rax
	movq	16(%rbp), %rdx
	movl	16(%rdx), %edx
	movl	%edx, 16(%rax)
	movq	16(%rbp), %rax
	movq	8(%rax), %rax
	movq	$0, 8(%rax)
	movq	16(%rbp), %rdx
	movq	8(%rdx), %rdx
	movq	8(%rax), %rax
	movq	%rax, (%rdx)
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	movq	16(%rbp), %rdx
	movq	8(%rdx), %rdx
	movq	%rdx, (%rax)
	movq	16(%rbp), %rax
	leaq	24(%rax), %rcx
	movq	16(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, %rdx
	call	_ZN5Queue7enqueueEP9Node_Tree
.L15:
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rcx
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	movl	16(%rax), %eax
	movl	%eax, %edx
	call	_ZNSolsEi
	movq	%rax, %rcx
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	16(%rbp), %rax
	addq	$16, %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt3cin(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSirsERi
	movq	16(%rbp), %rax
	movl	16(%rax), %eax
	cmpl	$-1, %eax
	je	.L14
	movl	$24, %ecx
	call	_Znwy
	movq	%rax, %rdx
	movq	16(%rbp), %rax
	movq	%rdx, 8(%rax)
	movq	16(%rbp), %rax
	movq	8(%rax), %rax
	movq	16(%rbp), %rdx
	movl	16(%rdx), %edx
	movl	%edx, 16(%rax)
	movq	16(%rbp), %rax
	movq	8(%rax), %rax
	movq	$0, 8(%rax)
	movq	16(%rbp), %rdx
	movq	8(%rdx), %rdx
	movq	8(%rax), %rax
	movq	%rax, (%rdx)
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	movq	16(%rbp), %rdx
	movq	8(%rdx), %rdx
	movq	%rdx, 8(%rax)
	movq	16(%rbp), %rax
	leaq	24(%rax), %rcx
	movq	16(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, %rdx
	call	_ZN5Queue7enqueueEP9Node_Tree
.L14:
	movq	16(%rbp), %rax
	addq	$24, %rax
	movq	%rax, %rcx
	call	_ZN5Queue7isEmptyEv
	xorl	$1, %eax
	testb	%al, %al
	jne	.L16
	nop
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC6:
	.ascii " \0"
	.text
	.globl	_Z16display_preorderP9Node_Tree
	.def	_Z16display_preorderP9Node_Tree;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z16display_preorderP9Node_Tree
_Z16display_preorderP9Node_Tree:
.LFB1814:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	cmpq	$0, 16(%rbp)
	je	.L19
	movq	16(%rbp), %rax
	movl	16(%rax), %eax
	movl	%eax, %edx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSolsEi
	movq	%rax, %rcx
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rcx
	call	_Z16display_preorderP9Node_Tree
	movq	16(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, %rcx
	call	_Z16display_preorderP9Node_Tree
.L19:
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	_Z15display_inorderP9Node_Tree
	.def	_Z15display_inorderP9Node_Tree;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z15display_inorderP9Node_Tree
_Z15display_inorderP9Node_Tree:
.LFB1815:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	cmpq	$0, 16(%rbp)
	je	.L22
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rcx
	call	_Z15display_inorderP9Node_Tree
	movq	16(%rbp), %rax
	movl	16(%rax), %eax
	movl	%eax, %edx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSolsEi
	movq	%rax, %rcx
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	16(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, %rcx
	call	_Z15display_inorderP9Node_Tree
.L22:
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	_Z17display_postorderP9Node_Tree
	.def	_Z17display_postorderP9Node_Tree;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z17display_postorderP9Node_Tree
_Z17display_postorderP9Node_Tree:
.LFB1816:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	cmpq	$0, 16(%rbp)
	je	.L25
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rcx
	call	_Z17display_postorderP9Node_Tree
	movq	16(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, %rcx
	call	_Z17display_postorderP9Node_Tree
	movq	16(%rbp), %rax
	movl	16(%rax), %eax
	movl	%eax, %edx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSolsEi
	movq	%rax, %rcx
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
.L25:
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	_Z10count_nodeP9Node_Tree
	.def	_Z10count_nodeP9Node_Tree;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z10count_nodeP9Node_Tree
_Z10count_nodeP9Node_Tree:
.LFB1817:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	cmpq	$0, 16(%rbp)
	je	.L27
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rcx
	call	_Z10count_nodeP9Node_Tree
	movl	%eax, -4(%rbp)
	movq	16(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, %rcx
	call	_Z10count_nodeP9Node_Tree
	movl	%eax, -8(%rbp)
	movl	-4(%rbp), %edx
	movl	-8(%rbp), %eax
	addl	%edx, %eax
	addl	$1, %eax
	jmp	.L28
.L27:
	movl	$0, %eax
.L28:
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN4TreeC1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZN4TreeC1Ev
	.def	_ZN4TreeC1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN4TreeC1Ev
_ZN4TreeC1Ev:
.LFB1821:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	addq	$24, %rax
	movq	%rax, %rcx
	call	_ZN5QueueC1Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC7:
	.ascii "Pre order: \0"
.LC8:
	.ascii "\12In order: \0"
.LC9:
	.ascii "\12Post order: \0"
.LC10:
	.ascii "\12Number of nodes in tree: \0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB1818:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$88, %rsp
	.seh_stackalloc	88
	leaq	80(%rsp), %rbp
	.seh_setframe	%rbp, 80
	.seh_endprologue
	call	__main
	leaq	-48(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN4TreeC1Ev
	leaq	-48(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN4Tree11create_treeEv
	leaq	.LC7(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	-8(%rbp), %rax
	movq	%rax, %rcx
	call	_Z16display_preorderP9Node_Tree
	leaq	.LC8(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	-8(%rbp), %rax
	movq	%rax, %rcx
	call	_Z15display_inorderP9Node_Tree
	leaq	.LC9(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	-8(%rbp), %rax
	movq	%rax, %rcx
	call	_Z17display_postorderP9Node_Tree
	leaq	.LC10(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rbx
	movq	-8(%rbp), %rax
	movq	%rax, %rcx
	call	_Z10count_nodeP9Node_Tree
	movl	%eax, %edx
	movq	%rbx, %rcx
	call	_ZNSolsEi
	movl	$0, %eax
	addq	$88, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.def	__tcf_0;	.scl	3;	.type	32;	.endef
	.seh_proc	__tcf_0
__tcf_0:
.LFB2325:
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
.LFB2324:
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
	jne	.L35
	cmpl	$65535, 24(%rbp)
	jne	.L35
	leaq	_ZStL8__ioinit(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSt8ios_base4InitC1Ev
	leaq	__tcf_0(%rip), %rax
	movq	%rax, %rcx
	call	atexit
.L35:
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	_GLOBAL__sub_I__Z16display_preorderP9Node_Tree;	.scl	3;	.type	32;	.endef
	.seh_proc	_GLOBAL__sub_I__Z16display_preorderP9Node_Tree
_GLOBAL__sub_I__Z16display_preorderP9Node_Tree:
.LFB2326:
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
	.quad	_GLOBAL__sub_I__Z16display_preorderP9Node_Tree
	.ident	"GCC: (Rev10, Built by MSYS2 project) 11.2.0"
	.def	_Znwy;	.scl	2;	.type	32;	.endef
	.def	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc;	.scl	2;	.type	32;	.endef
	.def	_ZNSolsEPFRSoS_E;	.scl	2;	.type	32;	.endef
	.def	free;	.scl	2;	.type	32;	.endef
	.def	_ZNSirsERi;	.scl	2;	.type	32;	.endef
	.def	_ZNSolsEi;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	atexit;	.scl	2;	.type	32;	.endef
	.section	.rdata$.refptr._ZSt3cin, "dr"
	.globl	.refptr._ZSt3cin
	.linkonce	discard
.refptr._ZSt3cin:
	.quad	_ZSt3cin
	.section	.rdata$.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, "dr"
	.globl	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	.linkonce	discard
.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_:
	.quad	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	.section	.rdata$.refptr._ZSt4cout, "dr"
	.globl	.refptr._ZSt4cout
	.linkonce	discard
.refptr._ZSt4cout:
	.quad	_ZSt4cout
