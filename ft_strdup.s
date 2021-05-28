section .text

global _ft_strdup
extern _malloc
extern _ft_strlen
extern _ft_strcpy

_ft_strdup:                         ; src = rdi
                xor     rax, rax
                push    rdi         ; put src on stack
                call    _ft_strlen  ;length of srs => rax
                mov     rdi, rax
                inc     rdi         ; \0
                call    _malloc     ; pass the number of bytes in rdi, get back pointer in rax 
                cmp     rax, 0      ; check malloc error
                je      error
                pop     rdi
                mov     rsi, rdi
                mov     rdi, rax
                call    _ft_strcpy  ; rdi = dst, rsi = src, ret =>rax
                ret

error:          
                pop     rdi
                ret

