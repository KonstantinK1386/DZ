#include <iostream>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "RU");

		unsigned int size ;
		std::cout << "Ввведите размер массива : ";
		std::cin >> size;
		int* arr = new int[size];
		for (int i = 0; i < size; i++) {
			std::cout << "arr [ " << i << " ] = ";
			std::cin >> arr[i];
		};
		std::cout << "Введёный массив : ";
		for (int i = 0; i < size; i++) {
			std::cout << arr[i] << ' ';
		};
		std::cout << '\n';

		delete[] arr;


}