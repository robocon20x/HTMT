#include"Header.h"

int main() {

	/*cout << " Bai 1: ";
	int dec_test1;

	Nhaplai0:
	cout << "\nNhap so mot so Dec: ";
	cin >> dec_test1;
	if (dec_test1 < 0) {
		cout << "\nSo Dec nhap vao khong hop le, vui long nhap 1 so >=0 ";
		goto Nhaplai0;
	}

	vector<int> bin_test1 = dec_to_bin(dec_test1);
	cout << "\n 1. Chuyen qua so Bin la: ";
	print_bin(bin_test1);

	vector<string> hex_test1 = dec_to_hex(dec_test1);
	cout << " \n 2. Chuyen qua so Hex la:  ";
	print_hex(hex_test1);

	string bin_test2;
	Nhaplai1:
	cout << "\n 3.Nhap so Bin can chuyen qua Dec: ";
	cin >> bin_test2;

	vector<string> bin_test2_check = str_to_vector(bin_test2);
	if (is_bin(bin_test2_check) == false) {
		cout << "\n So nhi phan vua nhap vao khong hop le ";
		goto Nhaplai1;
	}

	vector<int> bin_test2_int = str_to_int(bin_test2_check);
	cout << "\nChuyen tu Bin sang Dec la: " << bin_to_dec(bin_test2_int);

	string hex_test2;
Nhaplai2:
	cout << "\n 4. Nhap so Hex can chuyen qua Dec: ";
	cin >> hex_test2;

	vector<string> hex_test2_check = str_to_vector(hex_test2);
	if (is_hex(hex_test2_check) == false) {
		cout << "\n So Hex vua nhap vao khong hop le, vui long ghi hoa chu cai ";
		goto Nhaplai2;
	}

	cout << "\n Chuyen tu Hex sang Dec la: " << hex_to_dec(hex_test2_check);

	string bin_test3;
Nhaplai3:
	cout << "\n 5.Nhap so Bin can chuyen qua Hex: ";
	cin >> bin_test3;

	vector<string> bin_test3_check = str_to_vector(bin_test3);
	if (is_bin(bin_test3_check) == false) {
		cout << "\n So nhi phan vua nhap vao khong hop le ";
		goto Nhaplai3;
	}

	vector<string> hex_test3 = bin_to_hex(bin_test3_check);
	cout << "\n Chuyen tu Bin sang Hex la: ";
	print_hex(hex_test3);*/

	cout << "\nBai 2: ";

	int dec1,  dec2 ;
Nhaplai_0:
	cout << "\nNhap so Dec thu nhat: ";
	cin >> dec1;
	if (dec1 < -128 || dec1 >127) {
		cout << "\n So thu nhat nhap sai, vui long nhap so trong khoang -128 den 127: ";
		goto Nhaplai_0;
	}
Nhaplai_1:
	cout << "\nNhap so Dec thu hai: ";
	cin >> dec2;
	if (dec2 < -128 || dec2 >127) {
		cout << "\n So thu hai nhap sai, vui long nhap so trong khoang -128 den 127: ";
		goto Nhaplai_1;
	}
	vector<int> bin1;
	vector<int> bin2;
	vector<int> bu2_1;
	vector<int> bu2_2;
	if (dec1 < 0) {
		int temp1 = abs(dec1);
		 bin1 = dec_to_bin_8bit(temp1);
		 bin1 = bin_bu2(bin1);
		cout << " \n1. Chuyen doi so thu nhat sang Bin la: " << endl;
		print_bin(bin1);
	}
	else {
		bin1 = dec_to_bin_8bit(dec1);
		cout << " \n1. Chuyen doi so thu nhat sang Bin la: " << endl;
		print_bin(bin1);
	}
	
	if (dec2 < 0) {
		int temp2 = abs(dec2);
		bin2 = dec_to_bin_8bit(temp2);
		bin2 = bin_bu2(bin2);
		cout << " \n1. Chuyen doi so thu hai sang Bin la: " << endl;
		print_bin(bin2);
	}
	else {
		bin2 = dec_to_bin_8bit(dec2);
		cout << " \n1. Chuyen doi so thu hai sang Bin la: " << endl;
		print_bin(bin2);
	}

	 bu2_1 = bin_bu2(bin1);
	cout << " \n So thu nhat doi qua Bu2 la: " << endl;
	print_bin(bu2_1);

	bu2_2 = bin_bu2(bin2);
	cout << " \n So thu hai doi qua Bu2 la: " << endl;
	print_bin(bu2_2);
	
	cout << "\n2.So bu 2 thu nhat doi qua lai thap phan la: " << sign_bin_to_dec(bu2_1);
	cout << "\n  So bu 2 thu hai doi qua lai thap phan la: " << sign_bin_to_dec(bu2_2);

	vector<int> tong = sum_bin(bin1, bin2);
	cout << " \n3.Tong hai day bit tren la: " << endl;
	print_bin(tong);

	vector<int> hieu = sub_bin(bin1, bin2);
	cout << " \n4. hieu hai day bit tren la: " << endl;
	print_bin(hieu);
	cout << "\n 5. Tich hai day bit tren la: " << endl;
	vector<int> multi = multi_two_bin(bin1, bin2);
	print_bin(multi);

	vector<int>division;
	vector<int> A;
	division_bin(bin1, bin2, division, A);
	cout << "\n 6. Thuong hai day bit tren la: " << endl;
	print_bin(division);
	cout << "\n So du la: " << endl;
	print_bin(A);

}

