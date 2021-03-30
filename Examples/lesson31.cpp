/**
 *@author Branium Academy
 *@website braniumacademy.net
 *@version 2021.03
*/

#include <iostream>

using namespace std;

void showArrayElements(int arr[], int n);

// hàm đổi chỗ hai phần tử
void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void bubbleSort(int arr[], int n) {
	for (int i = 0; i <= n - 2; i++)
	{
		for (int j = n - 1; j >= i + 1; j--)
		{
			if (arr[j - 1] > arr[j]) {
				swap(arr[j - 1], arr[j]);
			}
		}
		cout << "i = " << i << endl;
		showArrayElements(arr, n);
	}
}

void bubbleSortOpt(int arr[], int n) {
	bool isSwapped = true;
	int i = n - 1;
	while (i > 0) {
		isSwapped = false;
		for (int j = 0; j <= i - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				isSwapped = true;
			}
		}
		cout << "i = " << i << endl;
		showArrayElements(arr, n);
		if (isSwapped == false) {
			break;
		}
		else {
			i--;
		}
	}
}

void showElementsInRange(int arr[], int left, int right) {
	cout << "left = " << left << ", right = " << right << endl;
	for (int i = left; i <= right; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void quicksort(int arr[], int leftIndex, int rightIndex) {
	int partition(int[], int, int);
	if (leftIndex < rightIndex) {
		int p = partition(arr, leftIndex, rightIndex);
		quicksort(arr, leftIndex, p - 1);
		quicksort(arr, p + 1, rightIndex);
	}
}

int partition(int arr[], int left, int right) {
	int pivot = arr[right];
	int i = left;
	for (int j = left; j <= right; j++)
	{
		if (arr[j] < pivot) {
			swap(arr[i], arr[j]);
			i++;
		}
	}
	swap(arr[i], arr[right]);
	showElementsInRange(arr, left, right);
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
	int n = 10;
	int arr[] = { 2, 3, 0, 1, 4, 5, 6, 9, 7, 8 };

	cout << "Truoc khi sap xep: " << endl;
	showArrayElements(arr, n);

	quicksort(arr, 0, n - 1);
	cout << "Sau khi sap xep: " << endl;
	showArrayElements(arr, n);

	return 0;
}