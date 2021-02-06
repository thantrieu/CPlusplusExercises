#include <iostream>

using namespace std;

/**
 * @author braniumacademy
 * @version 2021.02
 * @website braniumacademy.net
 */

int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    if(n <= 0) {
        cout << "INVALID" << endl;
    } else {
        int sumOfDigits = 0;
        for (int i = n; i > 0; i /= 10) {
            sumOfDigits += i % 10;
        }
        cout << sumOfDigits << endl;
    }
}
