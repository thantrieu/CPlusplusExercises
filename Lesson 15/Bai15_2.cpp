#include <iostream>

using namespace std;

/**
 * @author braniumacademy
 * @version 2021.02
 * @website braniumacademy.net
 */ 

int main() {
    int n, k;
    cout << "Nhap so tu nhien n > 0 va k < n: ";
    cin >> n;
    if(n <= 0) {
        cout << "INVALID" << endl;
    } else {
        cin >> k;
        if(k < 0 || k >= n) {
            cout << "INVALID" << endl;
        } else {
            for (int i = k; i <= n; i++) {
                if(i % 2 != 0) {
                    cout << i << " ";
                }
            }
            cout << endl;
        }
    }
    cout << endl;
}
