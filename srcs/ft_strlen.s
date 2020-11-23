section	.text
global	ft_strlen

ft_strlen:
			mov		rax, rdi	; the pointer in rdi is moved in rax;
			jmp		compare     ; we go check the value pointed to by rax;
				
compare:
			cmp		byte [rax], 0  
			jz		done			; if it's equal to zero --> we are done
			inc		rax				; if not we increase our pointer.		
			jmp		compare
done:
			sub		rax, rdi		; by substracting our 2 pointers we get the length
			ret	