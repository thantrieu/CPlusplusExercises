/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @ version 2021.02
 */ 

#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cout << "Nhap ba so nguyen: ";
    cin >> a >> b >> c;
    int max = a;
    max = (max < b) ? b : max;
    max = (max < c) ? c : max;
    (a == b && b == c) ? cout << "Khong co gia tri max"
    : cout << "Gia tri max = " << max;
    cout << endl << endl;
    
    return 0;
}
