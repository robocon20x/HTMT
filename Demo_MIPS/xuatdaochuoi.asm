.data
input:	.space	256
output:	.space 256

	.text
	.globl main
main:
	#Nhập chuỗi
	li 	$v0,8
	la 	$a0,input
	li	$a1,256
	syscall
		
	#Tìm chiều dài của chuỗi
	li	$t0,0	#Khởi tạo biến lưu chiều dai chuỗi
strlen_loop:
	add	$t2,$a0,$t0 #Lấy địa chỉ của kí tự thứ i
	lb	$t1,0($t2)
	beq	$t1,'\n',get_len
	addi	$t0,$t0,1
	j	strlen_loop
get_len:
	sub	$t0,$t0,1
	
	li	$t1,0	#phần từ đầu tiên của chuỗi kết quả
	la	$s0,output #Địa chỉ của chuỗi output
reverse_loop:
	#lấy kí tự của chuỗi input
	add	$t2,$a0,$t0
	lb	$t3,0($t2)
	#lấy địa chuỗi của kí tự chuỗi output
	add	$t4,$s0,$t1
	sb	$t3,0($t4)
	beq	$t0,0,exit_reverse
	addi	$t1,$t1,1
	subi	$t0,$t0,1
	j	reverse_loop
exit_reverse:


	li $v0,4
	la $a0,output
	syscall

