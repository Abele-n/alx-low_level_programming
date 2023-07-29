global main
extern printf

call printf

main:
mov edi, format
xor rdi, rdi
mov rdi, 0
ret

format: db`Hello, Holberton\n`,0
