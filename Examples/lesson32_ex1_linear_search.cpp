/**
 *@author Branium Academy
 *@website braniumacademy.net
 *@version 2021.03
*/

#include <iostream>

using namespace std;

void showArrayElements(int arr[], int n);
int linearSearch(int arr[], int n, int x);
void showResult(int x, int index);

int main() {
	int n = 11;
	int arr[] = { 72, 3, 0, 91, 34, 15, 62, 9, 77, 68, 8 };
	cout << "Mang ban dau: " << endl;
	showArrayElements(arr, n);
	int x = 72;
	int y = 8;
	int z = 100;
	int xIndex = linearSearch(arr, n, x);
	int yIndex = linearSearch(arr, n, y);
	int zIndex = linearSearch(arr, n, z);

	showResult(x, xIndex);
	showResult(y, yIndex);
	showResult(z, zIndex);

	return 0;
}

int linearSearch(int arr[], int n, int x) {
	for (int i = 0; i < n; i++) {
		if (arr[i] == x) {
			return i;
		}
	}
	return -1;
}

void showArrayElements(int arr[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void showResult(int x, int index) {
	if (index == -1) {
		cout << x << " not found in the array." << endl;
	}
	else {
		cout << "Found " << x << " at index " << index << "." << endl;
	}
}