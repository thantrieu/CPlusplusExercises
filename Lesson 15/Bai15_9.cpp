#include <iostream>

using namespace std;

/**
 * @author braniumacademy
 * @version 2021.02
 * @website braniumacademy.net
 */

int main() {
    int n;
    int m;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    if(n <= 0) {
        cout << "INVALID" << endl;
    } else {
        m = n;
        int reversedN = 0;
        while (m > 0) {
            reversedN = reversedN * 10 + m % 10;
            m /= 10;
        }
        if(reversedN == n) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
