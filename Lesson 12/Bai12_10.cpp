/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @ version 2021.02
 */ 

#include <iostream>

using namespace std;

int main() {
    double gpa;
    cout << "Nhap vao diem cua ban: ";
    cin >> gpa;
    
    gpa >= 9.0 ? cout << "A"
    : gpa >= 7.0 ? cout << "B"
    : gpa >= 5 ? cout << "C"
    : gpa >= 4 ? cout << "D"
    : cout << "F";
    cout << endl << endl;
    
}
