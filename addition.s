section .text
global _addit
_addit:
	mov	rax, rdi
	add rax, rsi
	ret