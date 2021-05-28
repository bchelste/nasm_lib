#libasm

the library libasm.a
The following functions were rewritten:
- strlen 
- strcpy
- strcmp
- write
- read
- strdup

* (call ___error - возвращает указатель на errno. Errno - переменнаяб
которая отвечает за ошибку, в адрес которой нужно положить значение,
которое нам вернул syscall, если случилась ошибка).

* call _malloc: It's a pretty straightforward function: pass the number of *BYTES* you want as the only parameter, in rdi.  "call malloc."  You'll get back a pointer to the allocated bytes returned in rax.  To clean up the space afterwards, copy the pointer over to rdi, and "call free"