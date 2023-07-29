section .data
    hello db 'Hello, Holberton', 10, 0
section .text
    global _start
    extern printf
_start:
    ; call printf
    push rbp
    mov rbp, rsp
    mov edi, hello
    xor eax, eax
    call printf
    ; exit program
    xor edi, edi
    mov eax, 60
    syscall