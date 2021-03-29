/**
 *@author Branium Academy
 *@website braniumacademy.net
 *@version 2021.03
*/

#include <iostream>

using namespace std;

// hàm đổi chỗ hai phần tử
void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void bubbleSortOpt(int arr[], int n) {
	bool isSwapped = true;
	int i = n - 1;
	while (i > 0) {
		isSwapped = false;
		for (int j = 0; j <= i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				isSwapped = true;
			}
		}
		if (isSwapped == false) {
			break;
		}
		else {
			i--;
		}
	}
}


void showArrayElements(int arr[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	int  n = 10;
	int arr[] = { 2, 3, 0, 1, 4, 5, 6, 9, 7, 8 };

	cout << "Truoc khi sap xep: " << endl;
	showArrayElements(arr, n);

	cout << "Sau khi sap xep: " << endl;
	bubbleSortOpt(arr, n);
	showArrayElements(arr, n);

	return 0;
}