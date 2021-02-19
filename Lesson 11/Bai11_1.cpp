/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.02
 */

#include <iostream>

using namespace std;

int main() {
    double a, b;
    cout << "Nhap vao hai so thuc a, b: ";
    cin >> a >> b;
    int choice;
    cout << "================ MENU ================" << endl;
    cout << "1. a + b" << endl;
    cout << "2. a - b" << endl;
    cout << "3. a * b" << endl;
    cout << "4. a / b" << endl;
    cin >> choice;
    switch (choice) {
        case 1:
            cout << a + b << endl;
            break;
        case 2:
            cout << a - b << endl;
            break;
        case 3:
            cout << a * b << endl;
            break;
        case 4:
            cout << a / b << endl;
            break;
        default:
            cout << "INVALID OPTION" << endl;
            break;
    }
    cout << endl;
    return 0;
}
