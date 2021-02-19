/**
 * @author Branium Academy
 * @website braniumacademy.net
 * @version 2021.02
 */

#include <iostream>

using namespace std;

int main() {
    int dayOfWeek;
    cout << "Nhap so nguyen 1-7: ";
    cin >> dayOfWeek;
    switch (dayOfWeek) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "VALUE IS NOT VALID" << endl;
            break;
    }
    
    cout << endl;
    return 0;
}
