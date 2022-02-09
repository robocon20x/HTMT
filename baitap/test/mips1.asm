#.data
#number : .word 10
#.text
#	lw $t1,number
#	li $t2,15
#	addi $t3, $zero,20

###################
#	.data
#	string: .asciiz "hello"
#	.text
#	la $t1,string	
#################
#.data
#.text
#	li $t1,20
#	li $t2,50
	#add $t3,$t1,$t2
	#sub $t4,$t1,$t2
#	mult $t1,$t2
	#div $t1,$t2
	
#	mflo $t6 
#	mfhi $t7
#################

#.data
#.text
	#addi $v0,$zero,5
	#syscall
	#move $t2,$v0 #copy
	
##################

#.data
#chuoi: .asciiz"chaoccccc"
#.text
#	addi $v0,$zero,8
#	syscall	
#	move $t1,$v0
#	la $a0,chuoi
#	li $a1,30
#	syscall
	#####################
#.data
#.text
#	li $v0,1
#	li $a0,5
#	syscall
	
	###############
.data
	chuoi: .asciiz "helllllllllllo"
.text
	li $v0,4
	la $a0,chuoi
	syscall
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	