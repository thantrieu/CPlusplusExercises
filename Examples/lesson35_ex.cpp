/**
 *@author Branium Academy
 *@website braniumacademy.net
 *@version 2021.04
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
	int a = 300;
	int b = 260;
	int sum = a + b;
	string msg = "Hello";


	// khai báo con trỏ:
	int* aPtr = &a;
	long* otherPtr = nullptr;
	void* vPtr = nullptr;
	char* namePtr = nullptr;
	string* msgPtr = &msg;

	cout << "Nhap vao mot so nguyen: ";
	cin >> (*aPtr);
	cout << "Nhap vao mot loi nhan: ";
	cin.ignore();
	getline(cin, *msgPtr);

	cout << "Gia tri trong dia chi ma aPtr dang tro toi: " << *aPtr << endl;
	cout << "Gia tri trong dia chi ma msgPtr dang tro toi: " << *msgPtr << endl;
	cout << "Gia tri cua msg: " << msg << endl;

	return 0;
}