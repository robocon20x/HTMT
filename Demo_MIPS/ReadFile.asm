#Doc du lieu tu file
.data
	fin: .asciiz "input.txt"
	str: .space 50
.text
	#openfile
	li $v0,13
	la $a0,fin
	li $a1,0
	li $a2,0
	syscall

	#Luu dia chi file vao $s0
	move $s0,$v0

	#Doc file
	li $v0,14
	move $a0,$s0
	la $a1,str
	li $a2,50
	syscall

	#xuat str
	li $v0,4
	la $a0,str
	syscall

	
	