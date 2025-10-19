#include <iostream>
#include <Windows.h>

double* create_array(int size) {
	double* arr = static_cast<double*>(calloc(size, sizeof(double)));

	return arr;
}

void print_array(double* arr, int size) {
	std::cout << "Массив : ";
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << '\n';
}

void main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	int size;
	std::cout << "Введите размер массива : ";
	std::cin >> size;
	print_array(create_array(size), size);

}