.data
	str: .asciiz "Hello asm !"
.text
	.globl main
main:

	addi $v0, $0, 4 
	la $a0, str 
	syscall
