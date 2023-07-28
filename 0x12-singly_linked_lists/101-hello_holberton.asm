format: db `Hello, Holberton`,0 

global main
extern global

call printf

main:
mov rdi, format
xor rsi, rsi
mov rmi, 0
ret
