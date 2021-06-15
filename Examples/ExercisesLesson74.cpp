#include <iostream>
#include <string>
#include "Pair.h"
using namespace std;

int main()
{
	Pair<string, string> words[200];
	int size = 0;
	int choice = 0;
	do {
		cout << "=============== MENU ===============\n";
		cout << "1. Them cap song ngu moi.\n";
		cout << "2. Sua nghia cua tu.\n";
		cout << "3. Xoa cap song ngu.\n";
		cout << "4. Xem danh sach cac cap song ngu hien co.\n";
		cout << "0. Thoat chuong trinh\n";
		cout << "Ban chon? ";
		cin >> choice;
		switch (choice)
		{
		case 0:
			cout << "<== Cam on quy khach da su dung dich vu ==>\n";
			break;
		case 1: {
			string key, value;
			cout << "Nhap tu tieng Anh: ";
			cin >> key;
			cin.ignore();
			cout << "Nhap nghia tieng Viet: ";
			getline(cin, value);
			Pair<string, string> pair(key, value);
			words[size++] = pair;
			break;
		}
		case 2: {
			if (size == 0) {
				cout << "<== Danh sach rong. ==>\n";
			}
			else {
				bool isUpdated = false;
				string key, value;
				cout << "Nhap keyword can sua nghia: ";
				cin >> key;
				cout << "Nhap nghia cua tu: ";
				cin.ignore();
				getline(cin, value);
				for (int i = 0; i < size; i++)
				{
					if (words[i].getKey().compare(key) == 0) {
						words[i].setValue(value);
						isUpdated = true;
						break;
					}
				}
				if (isUpdated) {
					cout << "<== Cap nhat nghia cua tu thanh cong ==>\n";
				}
				else {
					cout << "<== Khong tim thay tu can sua nghia ==>\n";
				}
			}
			break;
		}
		case 3: {
			if (size == 0) {
				cout << "<== Danh sach rong. ==>\n";
			}
			else {
				bool isDeleted = false;
				string key;
				cout << "Nhap keyword can sua nghia: ";
				cin >> key;
				for (int i = 0; i < size; i++)
				{
					if (words[i].getKey().compare(key) == 0) {
						for (int j = i; j < size - 1; j++)
						{
							words[j] = words[j + 1];
						}
						size--;
						isDeleted = true;
						break;
					}
				}
				if (isDeleted) {
					cout << "<== Xoa thanh cong ==>\n";
				}
				else {
					cout << "<== Khong tim thay tu can xoa ==>\n";
				}
			}
			break;
		}
		case 4: {
			if (size == 0) {
				cout << "<== Danh sach rong. ==>\n";
			}
			else {
				cout << "<== Danh sach tu va nghia cua tu hien co ==>\n";
				for (int i = 0; i < size; i++)
				{
					cout << words[i].getKey() << " - " << words[i].getValue() << endl;
				}
			}
			break;
		}
		default:
			cout << "<== Sai chuc nang. Vui long chon lai ==>\n";
			break;
		}
	} while (choice != 0);

	return 0;
}
