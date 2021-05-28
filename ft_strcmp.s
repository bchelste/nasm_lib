global _ft_strcmp

section .text

_ft_strcmp:
                xor rax, rax
                xor rdx, rdx
                xor rcx, rcx
                jmp compare

compare:
                mov dl, byte[rdi + rax]
                mov cl, byte[rsi + rax]
                cmp dl, 0
                je  return
                cmp cl, 0
                je  return
                cmp dl, cl
                jne return
                inc rax
                jmp compare

return:
                movzx rdx, dl
                movzx rcx, cl
                sub rdx, rcx
                mov rax, rdx
                ret