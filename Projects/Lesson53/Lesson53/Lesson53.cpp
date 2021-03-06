#include <iostream>
#include <iomanip>
#include "Person.h"
using namespace std;

// nguyên mẫu hàm
Person addPersonInfo();
void showPersonInfo(Person person);
void showTableCollumnName();
Person* findPersonById(Person* people, const int size, string id);

int main()
{
	Person friends[100];
	int size = 0;
	int choice = 0;
	do
	{
		cout << "======================= MENU =======================\n";
		cout << "1. Them moi thong tin nguoi.\n2. Hien thi danh sach.\n";
		cout << "3. Tim nhan su theo ten.\n4. Sua nghe nghiep theo CC/HC.\n";
		cout << "0. Thoat.\nXin moi chon: ";
		cin >> choice;
		cin.ignore();
		switch (choice)
		{
		case 0:
			cout << "<== XIN CHAO VA HEN GAP LAI ==>\n";
			break;
		case 1: {
			friends[size++] = addPersonInfo();
			break;
		}
		case 2: {
			cout << "================ DANH SACH NHAN SU ================\n";
			if (size > 0) {
				showTableCollumnName();
				for (int i = 0; i < size; i++)
				{
					showPersonInfo(friends[i]);
				}
			}
			else {
				cout << "<== DANH SACH RONG. VUI LONG NHAP DU LIEU VAO TRUOC! ==>\n";
			}
			break;
		}
		case 3: {
			if (size > 0) {
				Person results[100];
				int resultCounter = 0;
				string firstName;
				cout << "Nhap ten can tim: ";
				getline(cin, firstName);
				cout << "========================== KET QUA TIM KIEM ==========================\n";
				for (int i = 0; i < size; i++)
				{
					if (friends[i].getFullName().getFirstName().compare(firstName) == 0) {
						results[resultCounter++] = friends[i];
					}
				}
				if (resultCounter == 0) {
					cout << "<== KHONG CO KET QUA ==>" << endl;
				}
				else {
					showTableCollumnName();
					for (int i = 0; i < resultCounter; i++)
					{
						showPersonInfo(results[i]);
					}
				}
			}
			else {
				cout << "<== DANH SACH RONG. VUI LONG NHAP DU LIEU VAO TRUOC! ==>\n";
			}
			break;
		}
		case 4: {
			if (size > 0) {
				string id;
				cout << "Nhap CMND/CC/HC: ";
				getline(cin, id);
				Person* person = findPersonById(friends, size, id);
				if (person == nullptr) {
					cout << "<== KHONG TIM THAY KET QUA. VUI LONG THU LAI ==>\n";
				}
				else {
					string occupation;
					cout << "Nhap nghe nghiep: ";
					getline(cin, occupation);
					person->setOccupation(occupation);
					cout << "<== CAP NHAT THANH CONG ==>\n";
					showTableCollumnName();
					showPersonInfo(*person);
				}
			}
			else {
				cout << "<== DANH SACH RONG. VUI LONG NHAP DU LIEU VAO TRUOC! ==>\n";
			}
			break;
		}
		default:
			cout << "Sai chuc nang. Vui long chon lai!\n";
			break;
		}
	} while (choice != 0);
}


void showTableCollumnName() {
	cout << left << setw(20) << "CMND/CC/HC" << setw(22) << "Ho va ten"
		<< setw(12) << "Ngay sinh" << setw(25) << "Email" << setw(15)
		<< "Dia chi" << setw(15) << "So dien thoai" << setw(20)
		<< "Nghe nghiep" << setw(12) << "Gioi tinh" << endl;
}

Person* findPersonById(Person* people, const int size, string id) {
	for (int i = 0; i < size; i++)
	{
		if (people[i].getId().compare(id) == 0) {
			return &people[i];
		}
	}
	return nullptr;
}

Person addPersonInfo() {
	string personId;
	string firstName;
	string lastName;
	string midName;
	string dob;
	string email;
	string city;
	string nation;
	string phoneNumber;
	string occupation;
	string gender;
	cout << "============== NHAP THONG TIN CA NHAN ==============\n";
	cout << "Nhap so CMND/CC/HC: ";
	getline(cin, personId);
	cout << "Nhap ho: ";
	getline(cin, lastName);
	cout << "Nhap ten dem: ";
	getline(cin, midName);
	cout << "Nhap ten: ";
	getline(cin, firstName);
	cout << "Nhap ngay sinh: ";
	getline(cin, dob);
	cout << "Nhap email: ";
	getline(cin, email);
	cout << "Nhap ten tinh: ";
	getline(cin, city);
	cout << "Nhap ten quoc gia: ";
	getline(cin, nation);
	cout << "Nhap so dien thoai: ";
	getline(cin, phoneNumber);
	cout << "Nhap nghe nghiep: ";
	getline(cin, occupation);
	cout << "Nhap gioi tinh: ";
	getline(cin, gender);
	Address address(city, nation);
	FullName fullName(firstName, lastName, midName);
	Person person(personId, fullName, address,
		dob, email, phoneNumber, occupation, gender);
	return person;
}

void showPersonInfo(Person person) {
	cout << left << setw(20) << person.getId() << setw(22) << person.getFullName().getFullName()
		<< setw(12) << person.getDateOfBirth() << setw(25) << person.getEmail() << setw(15)
		<< person.getAddress().getCity() << setw(15) << person.getPhoneNumber() << setw(20)
		<< person.getOccpation() << setw(12) << person.getGender() << endl;
}