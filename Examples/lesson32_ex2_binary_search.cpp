/**
 *@author Branium Academy
 *@website braniumacademy.net
 *@version 2021.03
*/

#include <iostream>

using namespace std;

void showArrayElements(int arr[], int n);
int binarySearch(int arr[], int left, int right, int x);
void quicksort(int arr[], int leftIndex, int rightIndex);
void showResult(int x, int index);

int main() {
	int n = 11;
	int arr[] = { 72, 3, 0, 91, 34, 15, 62, 9, 77, 68, 8 };
	quicksort(arr, 0, n - 1);
	cout << "Mang sau khi sap xep: " << endl;
	showArrayElements(arr, n);
	int x = 0;
	int y = 8;
	int z = 100;
	int xIndex = binarySearch(arr, 0, n - 1, x);
	int yIndex = binarySearch(arr, 0, n - 1, y);
	int zIndex = binarySearch(arr, 0, n - 1, z);

	showResult(x, xIndex);
	showResult(y, yIndex);
	showResult(z, zIndex);

	return 0;
}

int binarySearch(int arr[], int left, int right, int x) {
	if (left <= right) {
		int mid = left + (right - left) / 2;
		if (arr[mid] == x) {
			return mid;
		}
		else if (arr[mid] < x) {
			return binarySearch(arr, mid + 1, right, x);
		}
		else {
			return binarySearch(arr, left, mid - 1, x);
		}
	}
	return -1;
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
	return i;
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