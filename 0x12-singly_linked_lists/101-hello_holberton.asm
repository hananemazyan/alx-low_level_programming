section .data
message db 'Hello, Holberton!' , 0x0A, 0x00

section .text
global main 
extern printf

main: 
; prepare argument for printf function
push rbp
mov rbp,rsp

; prepare argument for printf function
lea rdi, [message]
xor eax, eax

; call printf function
call printf

;restore stack and exit program

mov rsp, rbp
pop rbp
xor eax, eax
ret
