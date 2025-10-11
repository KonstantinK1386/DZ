#include <iostream>
#include <Windows.h>

void print(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n';
		
}

void main() {

	int arr_1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int arr_2[] = {6, 5, 4, 8};
	int arr_3[] = {1, 4, 3, 7, 5};

	print(arr_1, (sizeof(arr_1) / sizeof(arr_1[0])));
	print(arr_2, (sizeof(arr_2) / sizeof(arr_2[0])));
	print(arr_3, (sizeof(arr_3) / sizeof(arr_3[0])));
}
