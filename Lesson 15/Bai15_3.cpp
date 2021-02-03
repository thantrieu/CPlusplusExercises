#include <iostream>

using namespace std;

/**
 * @author braniumacademy
 * @version 2021.02
 * @website braniumacademy.net
 */ 

int main() {
    int n;
    cout << "Nhap so tu nhien n > 0: ";
    cin >> n;
    if(n > 0) {
        long long sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        cout << sum << endl;
    } else {
        cout << "INVALID" << endl;
    }
}
