section	.text
global	ft_strdup

extern malloc
extern ft_strlen
extern ft_strcpy

ft_strdup:
	mov		rbx, rdi
	call	ft_strlen
	mov		rdi, rax
	inc		rdi
	call	malloc
	cmp		rax, 0
	jz		ft_end
	mov		rdi, rax
	mov		rsi, rbx 
	call	ft_strcpy
	
ft_end:
	ret
