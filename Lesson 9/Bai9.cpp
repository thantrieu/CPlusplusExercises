#include <iostream>

using namespace std;

/**
 * @author braniumacademy
 * @version 2021.02
 * @website braniumacademy.net
 */ 

int main() {
    double a, b, c;
    cout << "Nhap ba canh a, b, c: ";
    cin >> a >> b >> c;
    // kiem tra dk tao thanh tam giac
    if(a + b > c && b + c > a && a + c > b) {
        // kiem tra dk tao tam giac vuong
        if((a * a + b * b == c * c)
           || (a * a + c * c == b * b)
           || (a * a == b * b + c * c)) {
            cout << "CO" << endl;
        } else {
            cout << "KHONG" << endl;
        }
    } else {
        cout << "KHONG" << endl;
    }
}
