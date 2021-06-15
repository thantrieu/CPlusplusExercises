#include <iostream>
using namespace std;

class Student {
	friend ostream& operator << (ostream&, const Student&);
	string name;
	string id;
public:
	Student() {}
	Student(string id, string name) : id(id), name(name) {}
};

ostream& operator << (ostream& os, const Student& student) {
	os << "Ma SV: " << student.id << " - Ten: " << student.name;
	return os;
}

template<class T> void showArrayElements(T* arr, const int size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;
}

int main()
{
	Student s1("B25DCCN100", "Tran Ba Nam");
	Student s2("B25DCCN110", "Nguyen Tuan Anh");
	Student s3("B25DCCN106", "Mai Thuy Phuong");
	Student s4("B25DCCN190", "Le Van Hung");
	Student students[10];
	students[0] = s1;
	students[1] = s2;
	students[2] = s3;
	students[3] = s4;
	int sizeOfStudent = 4;
	cout << "Danh sach sinh vien: \n";
	showArrayElements(students, sizeOfStudent);

	int numbers[10] = {0, 1, 3, 2, 4, 5, 8, 7, 6, 9};
	cout << "Danh sach cac so nguyen: \n";
	showArrayElements(numbers, 10);

	string names[5] = {"Phong", "Ba", "Bao", "To", "Mua"};
	cout << "Danh sach nhung nguoi ban cua Nang: \n";
	showArrayElements(names, 5);
	return 0;
}
