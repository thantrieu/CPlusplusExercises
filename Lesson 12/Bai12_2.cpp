/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @ version 2021.02
 */ 

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Nhap vao so nguyen n: ";
    cin >> n;
    (n == 0) ? cout << n << " khong am khong duong"
             : (n > 0) ? cout << n << " la so duong"
             : cout << n << " la so am";
    cout << endl << endl;
    
    return 0;
}
