section .data
    message db "Hello, World", 10
    length equ $ - message

section .text
    global main

main:
    mov rax, 1
    mov rdi, 1
    lea rsi, [rel message]
    mov rdx, length
    syscall

    xor eax, eax
    ret
