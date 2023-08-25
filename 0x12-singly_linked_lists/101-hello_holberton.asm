section .data
    hello db "Hello, Holberton", 0
    nl db 10, 0  ; New line character

section .text
    global main

extern printf

main:
    push rdi         ; Preserve rdi register
    lea rdi, [hello] ; Load address of the hello string into rdi
    xor rax, rax    ; Clear rax register (for the printf return value)
    call printf     ; Call the printf function

    lea rdi, [nl]   ; Load address of the new line character into rdi
    call printf     ; Call the printf function to print the new line
    pop rdi          ; Restore rdi register

    xor eax, eax     ; Return 0 (exit code) from main
    ret
