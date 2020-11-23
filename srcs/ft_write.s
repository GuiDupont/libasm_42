section	.text
global	ft_write

extern ft_error

ft_write:
	mov		rax, 1      ; set syscall to write
	syscall             ; call the Kernel
	cmp		rax, 0		; compare the return value of write
	jl		ft_error	; if rax < 0, call ft_error
	ret
