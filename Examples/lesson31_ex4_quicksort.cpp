/**
 *@author Branium Academy
 *@website braniumacademy.net
 *@version 2021.03
*/

#include <iostream>

using namespace std;

// hàm nguyên mẫu:
int partition(int[], int, int);

// hàm đổi chỗ hai phần tử
void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}
// thuật toán quicksort:
void quicksort(int arr[], int leftIndex, int rightIndex) {
	if (leftIndex < rightIndex) {
		int p = partition(arr, leftIndex, rightIndex);
		quicksort(arr, leftIndex, p - 1);
		quicksort(arr, p + 1, rightIndex);
	}
}
// thuật toán phân mảnh và sắp xếp các phần tử
int partition(int arr[], int left, int right) {
	int pivot = arr[right];
	int i = left;
	for (int j = left; j <= right; j++) {
		if (arr[j] < pivot) {
			swap(arr[i], arr[j]);
			i = i + 1;
		}
	}
	swap(arr[i], arr[right]);
	return i;
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
	quicksort(arr, 0, n - 1);
	showArrayElements(arr, n);

	return 0;
}