/**
 * @author braniumacademy
 * @version 2021.02
 * @website braniumacademy.net
 */ 

#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cout << "Nhap vao ba so a, b, c: ";
    cin >> a >> b >> c;
    // kiem tra va in ra ket qua
    if(a == b && b == c) {
        cout << "Khong co gia tri min" << endl;
    } else {
        int min = a;
        if(min > b) {
            min = b;
        }
        if(min > c) {
            min = c;
        }
        cout << "Gia tri min = " << min << endl;
    }
    cout << endl;
}
