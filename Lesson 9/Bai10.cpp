#include <iostream>

using namespace std;

/**
 * @author braniumacademy
 * @version 2021.02
 * @website braniumacademy.net
 */ 

int main() {
    float gpa; // diem trung binh mon hoc
    cout << "Nhap vao diem he 10 cua ban: ";
    cin >> gpa;
    // kiem tra va in ra ket qua
    if(gpa >= 0 && gpa <= 10.0f) {
        if(gpa >= 9.0f) {
            cout << 'A' << endl;
        } else if(gpa >= 7.0f) {
            cout << 'B' << endl;
        } else if(gpa >= 5.0f) {
            cout << 'C' << endl;
        } else if(gpa >= 4.0f) {
            cout << 'D' << endl;
        } else {
            cout << 'F' << endl;
        }
    } else {
        cout << "Diem khong hop le. Nhap diem trong khoang 0-10." << endl;
    }
}
