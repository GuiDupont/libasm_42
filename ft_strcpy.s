section .text
global _ft_strcpy
;rdi, rsi, rdx, rcx, r8, r9;

_ft_strcpy:
	xor		rax, rax
	jmp		copying

copying:
	cmp		byte [rsi + rax], 0
	jz		ft_end
		
	mov		[rdi + rax], [rsi + rax]
	inc		rax
	jmp		copying

ft_end:
	mov		byte [rdi + rax], 0
	mov		rax, rdi
	ret