global _ft_strlen

section .text

_ft_strlen:
                xor rax, rax
                jmp number
number:
                cmp byte[rdi + rax], 0
                je return
                inc rax
                jmp number
return:
                ret