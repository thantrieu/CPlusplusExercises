#include <iostream>

using namespace std;

/**
 * @author braniumacademy
 * @version 2021.02
 * @website braniumacademy.net
 */ 

int main() {
    int month;
    cout << "Nhap mot so nguyen la thang cua nam: ";
    cin >> month;
    if(month < 1 || month > 12) {
        cout << "VALUE IS NOT INVALID" << endl;
    } else {
        if(month == 1) {
            cout << "January" << endl;
        } else if(month == 2) {
            cout << "February" << endl;
        } else if(month == 3) {
            cout << "March" << endl;
        } else if(month == 4) {
            cout << "April" << endl;
        } else if(month == 5) {
            cout << "May" << endl;
        } else if(month == 6) {
            cout << "June" << endl;
        } else if(month == 7) {
            cout << "July" << endl;
        } else if(month == 8) {
            cout << "August" << endl;
        } else if(month == 9) {
            cout << "September" << endl;
        } else if(month == 10) {
            cout << "October" << endl;
        } else if(month == 11) {
            cout << "November" << endl;
        } else {
            cout << "December" << endl;
        }
    }
    cout << endl;
}
