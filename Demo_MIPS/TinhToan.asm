.data
	tb1: .asciiz "Nhap a: "
	tb2: .asciiz "Nhap b: "
	tb3: .asciiz "Tong la: "
	tb4: .asciiz "\nHieu la: "
	tb5: .asciiz "\nTich la: "
	tb6: .asciiz "\nThuong la: "
	tb7: .asciiz "  Du la: "

.text
	#Xuat tb1
	li $v0,4
	la $a0,tb1
	syscall


	#Nhap so nguyen a 
	li $v0,5
	syscall
	
	move $s0,$v0  # $s0 = $v0 = a


	#Xuat tb2
	li $v0,4
	la $a0,tb2
	syscall


	#Nhap so nguyen b 
	li $v0,5
	syscall
	
	move $s1,$v0  # $s0 = $v0 = a

	#Tinh tong
	add $s2,$s0,$s1 # s2 = s0 + s1

	#Xuat ket qua 
	li $v0,4
	la $a0,tb3
	syscall

	#xuat s2
	li $v0,1
	move $a0,$s2
	syscall
	
	#Tinh hieu
	sub $s3,$s0,$s1 #s3 = s0 - s1

	#xuat tb4
	li $v0,4
	la $a0,tb4
	syscall

	#Xuat s3
	li $v0,1
	move $a0,$s3
	syscall


	#Phep nhan
	mult $s0,$s1 # ket qua duoc chua trong(lo,hi)
	
	#lay ket qua luu $s4
	mflo $s4
	

	#xuat tb5
	li $v0,4
	la $a0,tb5
	syscall

	#Xuat s4
	li $v0,1
	move $a0,$s4
	syscall
	


	#Phep chia
	div $s0,$s1 # ket qua lo = thuong, hi = du
	
	#lay ket qua thuong luu $s5
	mflo $s5

	#lay ket qua du luu $s6
	mfhi $s6

	#xuat tb6
	li $v0,4
	la $a0,tb6
	syscall

	#Xuat s5
	li $v0,1
	move $a0,$s5
	syscall
	
	#xuat tb7
	li $v0,4
	la $a0,tb7
	syscall

	#Xuat s7
	li $v0,1
	move $a0,$s6
	syscall
	

	
	
	


	
	