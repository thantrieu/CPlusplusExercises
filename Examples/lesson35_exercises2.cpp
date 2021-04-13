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
	string msg = "Hello pointer, I'll love you soon.";

	int* aPtr = &a; // khởi tạo aPtr trỏ đến biến a
	string* msgPtr = &msg; // ok, msgPtr trỏ đến biến msg

	// ví dụ sử dụng toán tử &, *
	cout << "Gia tri tai noi aPtr dang tro toi: " 
           << *aPtr << endl;
	cout << "Gia tri tai noi msgPtr dang tro toi: " 
           << *msgPtr << endl;

	// nhập giá trị vào cho biến thông qua con trỏ:
	cout << "Nhap vao mot so nguyen: ";
	cin >> *aPtr;
	cout << "Nhap vao mot loi nhan: ";
	cin.ignore();
	getline(cin, *msgPtr);

	// hiển thị kết quả:
	cout << "Gia tri cua bien a: " << a << endl;
	cout << "Gia tri bien msg: " << msg << endl;

	return 0;
}
