#include <iostream>
#include <Windows.h>

void print(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n';

}

void revers(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = arr[i] + arr[size - 1];
		arr[size - 1] = arr[i] - arr[size - 1];
		arr[i] = arr[i] - arr[size - 1];
		size--;
	}
}

void main() {

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	print(arr, (sizeof(arr) / sizeof(arr[0])));
	revers(arr, (sizeof(arr) / sizeof(arr[0])));
	print(arr, (sizeof(arr) / sizeof(arr[0])));

}