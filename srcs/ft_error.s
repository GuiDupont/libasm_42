section	.text
global	ft_error

extern __errno_location

ft_error:
	mov		r8, rax 		; copy the returned value in r8
	call 	__errno_location ; errno address is now in rax
	neg 	r8				; make errno positive
	mov 	[rax], r8		; change the value of errno
	mov		rax, -1			; set the return value to -1
	ret