section .text

global _ft_strcpy
											; rdi => dst    rsi => src
_ft_strcpy:
                xor		rdx, rdx
                xor		rax, rax
                cmp		rsi, 0
                je		return
                jmp		copy

copy:
                cmp		byte[rsi + rax], 0
                je		return
                mov		dl,	byte[rsi + rax]
                mov		byte[rdi +rax],	dl
                inc		rax
                jmp		copy
return:
                mov		byte[rdi + rax], 0
                mov		rax, rdi
                ret