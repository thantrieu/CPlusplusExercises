/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @ version 2021.02
 */ 

#include <iostream>

using namespace std;

int main() {
    double a, b;
    cout << "Nhap he so a, b: ";
    cin >> a >> b;
    // xet va hien thi ket qua
    (a == 0 && b == 0) ? cout << "Phuong trinh co vo so nghiem"
    : (a == 0 && b != 0) ? cout << "Phuong trinh khong co nghiem"
    : cout << "Nghiem x = " << -b / a;
    cout << endl << endl;
    
    return 0;
}
