section	.text
global	ft_read

extern __errno_location
extern ft_error

ft_read:
	mov		rax, 0      ; set syscall to read
	syscall             ; call the Kernel
	cmp		rax, 0		; compare the return value of read
	jl		ft_error	; if rax < 0, call ft_error
	ret
