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
// thuật toán sắp xếp nổi bọt nổi phẩn tử nhỏ hơn trước
void bubbleSortASC(int arr[], int n) {
	for (int i = 0; i <= n - 2; i++) {
		for (int j = n - 1; j >= i + 1; j--) {
			if (arr[j - 1] > arr[j]) {
				swap(arr[j - 1], arr[j]);
			}
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
	bubbleSortASC(arr, n);
	showArrayElements(arr, n);

	return 0;
}