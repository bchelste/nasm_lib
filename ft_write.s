section .text

global _ft_write
extern ___error

_ft_write:									; rdi = fd, buf = rsi, bytes = rdx
				mov		rax, 0x2000004
				syscall
				jc		___error			; if error => jc = 1 (jump if carry)
				ret

error:
				push	rax					; save value of error in stack
				call	___error			; return pointer on errno
				pop		rcx					; value of error => rcx
                mov		[rax], rcx			; put value on adress of errno
				mov		rax, -1				; put -1 in rax
				ret