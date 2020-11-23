section .text
global ft_strcpy


ft_strcpy:
	mov		rax, 0					; we set rax to 0

copy:		
	mov		dl, byte [rsi + rax]	; we copy src
	mov		byte [rdi + rax], dl	; in dst
	cmp		byte [rsi + rax], 0		; we check the value of src
	je		ft_end					; if it's 0 we go to ft_end
	
	inc		rax						; if it's not the case we increase rax
	jmp		copy					; and go back to copy

ft_end:
	mov		rax, rdi				; we set the return value to rdi pointer
	ret