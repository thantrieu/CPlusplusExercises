/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @ version 2021.02
 */ 

#include <iostream>

using namespace std;

int main() {
    double a, b, c;
    cout << "Nhap vao ba so thuc: ";
    cin >> a >> b >> c;
    
    (a + b > c && b + c > a && c + a > b)
    ? (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
    ? cout << "CO" : cout << "KHONG" : cout << "KHONG";
    cout << endl << endl;
    
    return 0;
}
