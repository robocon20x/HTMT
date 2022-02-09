#include"Header.h"

vector<int> dec_to_bin(int dec) {

	vector<int> bin;

	while (dec != 0) {
		bin.insert(bin.begin(), dec % 2);
		dec = dec / 2;
	}
	int k = 1;
	bool flag = true;
	while (flag) {
		if (4 * k >= bin.size()) {
			int i = bin.size();
			for (i; i < 4 * k; i++) {
				bin.insert(bin.begin(), 0);
			}
			flag = false;
		}
		else k++;
	}
	return bin;
}

vector<int> dec_to_bin_8bit(int dec) {

	vector<int> bin;
	if (dec >= 0) {

		while (dec != 0) {
			bin.insert(bin.begin(), dec % 2);
			dec = dec / 2;
		}
		int k = 2;
		bool flag = true;
		while (flag) {
			if (4 * k >= bin.size()) {
				int i = bin.size();
				for (i; i < 4 * k; i++) {
					bin.insert(bin.begin(), 0);
				}
				flag = false;
			}
			else k++;
		}
	}

	return bin;
}


void print_bin(vector<int> bin) {

	for (int i = 0; i < bin.size(); i++) {
		cout << bin[i];
	}
}

vector<string> dec_to_hex(int dec) {

	vector<string> hex;
	int temp = 0;
	while (dec != 0) {
		switch (dec % 16) {
		case 10:
			hex.insert(hex.begin(), "A");
			break;
		case 11:
			hex.insert(hex.begin(), "B");
			break;
		case 12:
			hex.insert(hex.begin(), "C");
			break;
		case 13:
			hex.insert(hex.begin(), "D");
			break;
		case 14:
			hex.insert(hex.begin(), "E");
			break;
		case 15:
			hex.insert(hex.begin(), "F");
			break;
		default:
			hex.insert(hex.begin(), to_string(dec % 16));
			break;
		}
		dec = dec / 16;
	}

	return hex;
}

void print_hex(vector<string> hex) {

	for (int i = 0; i < hex.size(); i++) {
		cout << hex[i];
	}
}


int bin_to_dec(vector<int> bin) {
	int dec = 0;
	int k = 0;
	while (k < bin.size()) {
		if (bin[k] == 1) dec += pow(2, bin.size() - 1 - k);
		k++;
	}
	return dec;
}

bool is_bin(vector<string> bin) {
	vector<string> temp = { "0","1" };

	for (int i = 0; i < bin.size(); i++) {
		int flag = 0;
		for (int j = 0; j < temp.size(); j++) {
			if (bin[i] == temp[j]) flag++;
		}
		if (flag == 0) return false;
	}

	return true;
}

vector<string> str_to_vector(string str) {
	vector<string> str_v;
	int n = 0;
	while (str[n] != NULL) {
		stringstream temp1;
		temp1 << str[n];
		string temp2;
		temp1 >> temp2;
		str_v.push_back(temp2);
		n++;
	}
	int k = 1;
	while (4 * k < str_v.size()) {
		k++;
	}
	while (4 * k > str_v.size()) {
		str_v.insert(str_v.begin(), "0");
	}

	return str_v;
}

int hex_to_dec(vector<string> hex) {
	int dec = 0;
	int k = 0;

	for (int i = hex.size() - 1; i >= 0; i--) {
		int temp = 0;
		if (hex[i] == "A") temp = 10;
		else if (hex[i] == "B") temp = 11;
		else if (hex[i] == "C") temp = 12;
		else if (hex[i] == "D") temp = 13;
		else if (hex[i] == "E") temp = 14;
		else if (hex[i] == "F") temp = 15;
		else temp = stoi(hex[i]);
		dec += temp * pow(16, k);
		k++;
	}
	return dec;
}

bool is_hex(vector<string> hex) {

	vector<string> temp = { "0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F" };

	for (int i = 0; i < hex.size(); i++) {
		int flag = 0;
		for (int j = 0; j < temp.size(); j++) {
			if (hex[i] == temp[j]) flag++;
		}
		if (flag == 0) return false;
	}

	return true;
}

// chua thay can dung 
vector<int> int_to_vector(int a) {
	vector<int> temp1;
	while (a != 0) {
		temp1.push_back(a % 10);
		a = a / 10;
	}
	int k = 1;
	bool flag = true;
	while (flag) {
		if (4 * k >= temp1.size()) {
			int i = temp1.size();
			for (i; i < 4 * k; i++) {
				temp1.push_back(0);
			}
			flag = false;
		}
		else k++;
	}
	vector<int>temp2;
	for (int i = temp1.size() - 1; i >= 0; i--) {
		temp2.push_back(temp1[i]);
	}

	return temp2;
}

vector<string> int_to_str(vector<int> bin) {

	vector<string> str;

	for (int i = 0; i < bin.size(); i++) {

		str.push_back(to_string(bin[i]));
	}
	return str;
}

vector<string> bin_to_hex(vector<string> bin) {
	vector<string> hex1;
	vector<string> bin_str = { "0000","0001", "0010", "0011", "0100","0101", "0110", "0111","1000","1001","1010","1011","1100","1101","1110","1111" };
	vector<string> hex_str = { "0","1","2","3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F" };

	for (int i = bin.size() - 1; i >= 0; i -= 4) {

		stringstream s1;

		for (int j = 3; j >= 0; j--) {
			s1 << bin[i - j];
		}

		string s3;
		s1 >> s3;

		for (int k = 0; k < bin_str.size(); k++) {
			if (s3 == bin_str[k]) hex1.insert(hex1.begin(), hex_str[k]);
		}
	}

	return hex1;
}

vector<int> str_to_int(vector<string> a) {

	vector<int> b;

	for (int i = 0; i < a.size(); i++) {
		int temp = stoi(a[i]);
		b.push_back(temp);
	}

	return b;
}


vector<int> sum_bin(vector<int> a, vector<int> b) {
	int temp = 0;
	vector<int> result;
	for (int i = a.size() - 1; i >= 0; i--) {
		temp = a[i] + b[i] + temp;
		if (temp % 2 == 1) result.insert(result.begin(), 1);
		else if (temp % 2 == 0) result.insert(result.begin(), 0);
		temp = temp / 2;
	}
	return result;
}

vector<int> bin_bu2(vector<int> bin) {

	vector<int> bin_1 = { 0,0,0,0,0,0,0,1 };
	vector<int> bu1;
	vector<int> bu2;

	for (int i = 0; i < bin.size(); i++) {
		if (bin[i] == 1) bu1.push_back(0);
		else if (bin[i] == 0)  bu1.push_back(1);//bu1.insert(bu1.begin(),1);
	}
	bu2 = sum_bin(bu1, bin_1);
	return bu2;
}


vector<int> sub_bin(vector<int>a, vector<int> b) { // a-b

	vector<int> sub;
	b = bin_bu2(b);
	sub = sum_bin(a, b);
	return sub;
}

int sign_bin_to_dec(vector<int> bu2) {
	int dec = (-1) * bu2[0] * pow(2, bu2.size() - 1);
	for (int i = 1; i < bu2.size(); i++) {
		dec += bu2[i] * pow(2, bu2.size() - 1 - i);
	}
	return dec;
}

void shift_right(vector<int>& A, vector<int>& Q, int& Q1) {

	Q1 = Q[Q.size() - 1];
	for (int i = Q.size() - 1; i > 0; i--) {
		Q[i] = Q[i - 1];
	}
	Q[0] = A[A.size() - 1];
	for (int i = A.size() - 1; i > 0; i--) {
		A[i] = A[i - 1];
	}

}

vector<int> multi_two_bin(vector<int> M, vector<int> Q) { // M * Q

	vector<int> multi;
	vector<int> A;

	for (int i = 0; i < Q.size(); i++) {
		A.push_back(0);
	}

	int Q1 = 0;
	int k = Q.size();
	while (k > 0) {
		if (Q[Q.size() - 1] == 1 && Q1 == 0) A = sub_bin(A, M);
		else if (Q[Q.size() - 1] == 0 && Q1 == 1) A = sum_bin(A, M);
		shift_right(A, Q, Q1);
		k--;

	}

	for (int i = 0; i < A.size(); i++) {
		multi.push_back(A[i]);
	}
	for (int i = 0; i < Q.size(); i++) {
		multi.push_back(Q[i]);
	}
	return multi;
}

void shift_left(vector<int>& A, vector<int>& Q) {
	for (int i = 0; i < 7; i++) {
		A[i] = A[i + 1];
	}
	A[7] = Q[0];
	for (int i = 0; i < 7; i++) {
		Q[i] = Q[i + 1];
	}
	Q[7] = 0;
}

void division_bin(vector<int> Q, vector<int> M, vector<int>& division, vector<int>& A) { // Q/M
	int flag1 = 0;
	int flag2 = 0;
	if (Q[0] == 1) {
		Q = bin_bu2(Q);
		flag1 = 1;
	}
	if (M[0] == 1) {
		M = bin_bu2(M);
		flag2 = 1;
	}

	for (int i = 0; i < Q.size(); i++) {
		A.push_back(0);
	}
	int k = Q.size();
	while (k > 0) {
		shift_left(A, Q);
		A = sub_bin(A, M);
		if (A[0] == 1) {
			A = sum_bin(A, M);
			Q[7] = 0;
		}
		else Q[7] = 1;
		k--;
	}

	for (int i = 0; i < Q.size(); i++) {
		division.push_back(Q[i]);
	}
	if (flag1 == 0 && flag2 == 0) {
		division = bin_bu2(division);
	}
	else if (flag1 == 0 && flag2 == 1) {
		division = bin_bu2(division);
	}
	else if (flag1 == 1 && flag2 == 0) {
		A = bin_bu2(A);
		division = bin_bu2(division);
	}
	else {
		A = bin_bu2(A);
	}
}