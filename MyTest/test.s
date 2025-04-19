	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 15, 0
	.globl	_mult                           ; -- Begin function mult
	.p2align	2
_mult:                                  ; @mult
	.cfi_startproc
; %bb.0:
	mul	w0, w0, w1
	ret
	.cfi_endproc
                                        ; -- End function
.subsections_via_symbols
