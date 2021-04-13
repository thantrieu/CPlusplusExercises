/**
 *@author Branium Academy
 *@website braniumacademy.net
 *@version 2021.04
*/

#include <iostream>

using namespace std;

int main() {
	int a = 300;
	int b = 260;
	int sum = a + b;
	string msg = "Hello pointer, I'll love you soon.";

	int* aPtr = &a; // khởi tạo aPtr trỏ đến biến a
	int* sumPtr = nullptr; // khởi tạo sumPtr trỏ đến null
	long* otherPtr = nullptr; // ok, otherPtr trỏ đến null
	string* msgPtr = &msg; // ok, msgPtr trỏ đến biến msg

	// ví dụ sử dụng toán tử &, *
	cout << "Dia chi bien a: " << &a 
		<< ", gia tri: " << a << endl;
	cout << " Dia chi luu trong aPtr: " << aPtr 
		<< ", gia tri tai dia chi nay: " << *aPtr << endl;
	cout << "Dia chi bien msg: " << &msg 
		<< ", gia tri: " << msg << endl;
	cout << "Dia chi luu trong msgPtr: " << msgPtr 
		<< ", gia tri tai dia chi nay: " << *msgPtr << endl;

	return 0;
}
