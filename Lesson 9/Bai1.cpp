/**
 * @author braniumacademy
 * @version 2021.02
 * @website braniumacademy.net
 */ 

#include <iostream>

using namespace std;

int main() {
    int number; // bien luu gia tri so nguyen n
    cout << "Enter an integer number: ";
    cin >> number;
    // check and print result
    if(number % 2 == 0) {
        cout << number << " is an even number" << endl;
    } else {
        cout << number << " is an odd number" << endl;
    }
}
