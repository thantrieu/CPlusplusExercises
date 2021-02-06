#include <iostream>

using namespace std;

/**
 * @author braniumacademy
 * @version 2021.02
 * @website braniumacademy.net
 */

int main() {
    int n;
    cout << "Nhap vao so nguyen n: ";
    cin >> n;
    if(n < 2) {
        cout << "NO" << endl;
    } else {
        int upperBound = sqrt(n);
        bool isPrime = true;
        for (int i = 2; i <= upperBound; i++) {
            if(n % i == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime == true) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    cout << endl;
}
