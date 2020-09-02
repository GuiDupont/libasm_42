section .text
global	_ft_strlen

_ft_strlen:
	xor		rax, rax
	jmp		ft_strlen_next;

ft_strlen_next:
	cmp		byte [rdi + rax], 0
	jz		ft_strlen_null

	inc		rdi
	jmp		ft_strlen_next

ft_strlen_null:
	ret
