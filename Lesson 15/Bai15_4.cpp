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
        double sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += 1.0 / i;
        }
        cout << sum << endl;
    }
    cout << endl;
}
