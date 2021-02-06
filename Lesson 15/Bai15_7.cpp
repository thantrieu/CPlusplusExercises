#include <iostream>

using namespace::std;

/**
 * @author braniumacademy
 * @version 2021.02
 * @website braniumacademy.net
 */

int main() {
    int n, k;
    cout << "Nhap so nguyen duong n, k!= 0: ";
    cin >> n >> k;
    if(n <= 0 || k == 0) {
        cout << "INVALID" << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            if(i % k == 0) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
}
