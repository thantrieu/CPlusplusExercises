/**
 * @author braniumacademy
 * @version 2021.02
 * @website braniumacademy.net
 */ 

#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cout << "Nhap vao ba so nguyen: ";
    cin >> a >> b >> c;
    // kiem tra va in ra ket qua
    if(a == b && b == c) {
        cout << "Khong co gia tri max" << endl;
    } else {
        int max = a;
        if(b > max) {
            max = b;
        }
        if(c > max) {
            max = c;
        }
        cout << "Gia tri max = " << max << endl;
    }
    cout << endl;
}
