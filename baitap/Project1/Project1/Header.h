#pragma once
#include<iostream>
#include<vector>
#include<iomanip>
#include<string>
#include<sstream>
#include<math.h>
using namespace std;

vector<int> dec_to_bin(int dec); // Thap phan sang nhi phan

vector<int> dec_to_bin_8bit(int dec); // thap phan sang nhi phan 8bit

void print_bin(vector<int> bin); // ham in so nhi phan

vector<string> dec_to_hex(int dec); // Thap phan sang thap luc phan

void print_hex(vector<string> hex); // in so thap luc phan 

int bin_to_dec(vector<int> bin); // nhi phan sang thap phan

bool is_bin(vector<string> bin); // kiem tra co phai so nhi phan khong

vector<string> str_to_vector(string str); // doi tu string sang vector string

int hex_to_dec(vector<string> hex); // doi tu hex sang dec

bool is_hex(vector<string> hex); // kiem tra chuoi hex co dung khong

vector<int> int_to_vector(int a); // doi so nguyen thanh mang vector 

vector<string> int_to_str(vector<int> bin); // doi vector int sang vector string

vector<string> bin_to_hex(vector<string> bin); // doi bin sang hex

vector<int> str_to_int(vector<string> a); // doi vector string sang vector int

vector<int> sum_bin(vector<int> a, vector<int> b); // tong 2 day bit

vector<int> bin_bu2(vector<int> bin); // bu 2

vector<int> sub_bin(vector<int>a, vector<int> b); // hieu 2 day bit

int sign_bin_to_dec(vector<int> bu2); // chuyen so nhi phan so dau sang thap phan

void shift_right(vector<int>& A, vector<int>& Q, int& Q1); // dich sang phai

vector<int> multi_two_bin(vector<int> M, vector<int> Q); // tich 2 day bit 

void shift_left(vector<int>& A, vector<int>& Q); // dich sang trai

void division_bin(vector<int> Q, vector<int> M, vector<int>& division, vector<int>& A); // chia 2 day bit

