/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @ version 2021.02
 */ 

#include <iostream>

using namespace std;

int main() {
    double a, b, c;
    cout << "Nhap vao he so a, b, c: ";
    cin >> a >> b >> c;
    // a = b = c = 0 : vo so nghiem
    // a = b = 0, c != 0: vo nghiem
    // a != 0, tinh delta -> ket qua:
    // - delta == 0: nghiem kep x = -b / 2a
    // - delta < 0: pt vo nghiem
    // - delta > 0: 2 nghiem
    if(a == 0) { // giai phuong trinh bac nhat
        (b == 0 && c == 0) ? cout << "Phuong trinh vo so nghiem"
        : (b == 0 && c != 0) ? cout << "Phuong trinh vo nghiem"
        : cout << "x = " << -c / b;
    } else { // giai phuong trinh bac hai
        auto delta = b * b - 4 * a * c;
        delta == 0 ? cout << "Phuong trinh co nghiem kep x = " << -b / (2 * a)
        : delta < 0 ? cout << "Phuong trinh vo nghiem"
        : cout << "x1 = " << (-b - sqrt(delta)) / (2 * a) << endl
               << "x2 = " << (-b + sqrt(delta)) / (2 * a);
    }
    cout << endl << endl;
    
    return 0;
}
