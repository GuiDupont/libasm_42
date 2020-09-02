section	.text
global	_ft_strlen_2
_ft_strlen_2:
			xor		rax, rax	
			jmp		compare
increment:
			inc		rax					
compare:
			cmp		BYTE [rdi + rax], 0	
			jne		increment
done:
			ret							