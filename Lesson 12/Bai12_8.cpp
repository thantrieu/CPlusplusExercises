/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @ version 2021.02
 */ 

#include <iostream>

using namespace std;

int main() {
    double a, b, c;
    cout << "Nhap vao ba so can kiem tra: ";
    cin >> a >> b >> c;
    
    (a + b > c && b + c > a && c + a > b) ? cout << "Co" : cout << "Khong";
    cout << endl << endl;
    
}
