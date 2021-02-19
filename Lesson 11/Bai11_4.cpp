/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.02
 */

#include <iostream>

using namespace std;

int main() {
    char gpa;
    cout << "Nhap diem chu cua ban(a-f): ";
    cin >> gpa;
    switch (gpa) {
        case 'a':
        case 'A':
            cout << "Very Good" << endl;
            break;
        case 'b':
        case 'B':
            cout << "Good" << endl;
            break;
        case 'c':
        case 'C':
            cout << "Average" << endl;
            break;
        case 'd':
        case 'D':
            cout << "Low Average" << endl;
            break;
        case 'f':
        case 'F':
            cout << "Failed" << endl;
            break;
        default:
            cout << "VALUE IS NOT VALID" << endl;
            break;
    }
    cout << endl;
    
    return 0;
}
