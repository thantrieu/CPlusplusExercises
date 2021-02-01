/**
 * @author braniumacademy
 * @version 2021.02
 * @website braniumacademy.net
 */ 

#include <iostream>

using namespace std;

int main() {
    float a, b, c;
    cout << "Nhap vao ba so thuc a, b, c: ";
    cin >> a >> b >> c;
    if(a + b > c && b + c > a && c + a > b) {
        cout << "Co" << endl;
    } else {
        cout << "Khong" << endl;
    }
}
