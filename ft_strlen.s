section .text

global _ft_strlen

_ft_strlen:
                xor rax, rax                ; i = 0
                jmp number
number:
                cmp byte[rdi + rax], 0      ; if *str + i = 0
                je  return                 ; jump equal
                inc rax                     ; i++
                jmp number
return:
                ret                         ; return rax