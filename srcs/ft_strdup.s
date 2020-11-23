section	.text
global	ft_strdup
;%rdi​,​ %rsi​, ​%rdx​, ​%rcx​, ​%r8​, and ​%r9

extern __errno_location
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
