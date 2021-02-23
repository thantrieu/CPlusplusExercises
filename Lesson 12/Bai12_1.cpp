/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @ version 2021.02
 */ 

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    (n % 2 == 0) ? cout << n << " la so chan" : cout << n << " la so le";
    cout << endl << endl;
    
    return 0;
}
