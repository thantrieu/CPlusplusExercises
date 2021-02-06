#include <iostream>

using namespace std;

/**
 * @author braniumacademy
 * @version 2021.02
 * @website braniumacademy.net
 */

int main() {
    int n, k;
    cout << "Nhap so nguyen duong n, k != 0: ";
    cin >> n >> k;
    if(n >= 0 && k != 0) {
        // tinh tong chu so
        int sumOfDigits = 0;
        for (int i = n; i > 0; i /= 10) {
            sumOfDigits += i % 10;
        }
        // chia lay du sumOfDigits cho k
        int result = sumOfDigits % k;
        cout << result << endl;
    } else {
        cout << "INVALID" << endl;
    }
}
