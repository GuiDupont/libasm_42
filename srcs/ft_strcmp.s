section .text
global ft_strcmp


ft_strcmp:
	mov		rax, 0					; we set rax to 0

compare:		
	mov		dl, byte [rdi + rax]	; we copy s2 dans un temp
	mov		cl, byte [rsi + rax]
	cmp		cl, dl					; we compare s1 et s2
	jne		ft_end					; if they are enequal we are done
	
	cmp		cl, 0					; if they are equal we check they are != 0
	jz		ft_end					; if they are equal to zero we are done

	inc		rax					; if it's not the case we increase rax
	jmp		compare					; and go back to copy

ft_end:
	movzx	rax, dl			; movzx = move with zero end
    movzx	rbx, cl
    sub		rax, rbx		; we put the difference of the last two char in rax
	ret
	