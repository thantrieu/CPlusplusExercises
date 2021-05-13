#include <iostream>
using namespace std;

// Minh họa tách từ trong chuỗi và in ra theo thứ tự xuất hiện trong câu

int main() {
	char str[200];
	cout << "Nhap vao chuoi ki tu: ";
	const char* delim = " ,.?:;!\t";
	cin.getline(str, 200);
	char* wordPtr = strtok(str, delim);
	while (wordPtr != nullptr) {
		cout << wordPtr << endl;
		wordPtr = strtok(nullptr, delim);
	}

	return 0;
}