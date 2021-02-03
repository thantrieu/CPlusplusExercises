#include <iostream>

using namespace std;

/**
 * @author braniumacademy
 * @version 2021.02
 * @website braniumacademy.net
 */ 

int main() {
    int n;
    cout << "Nhap so tu nhien n: ";
    cin >> n;
    if(n < 0) {
        cout << "INVALID" << endl;
    } else {
        for (int i = 0; i <= n; i += 2) {
            cout << i << " ";
        }
        cout << endl;
    }
}
