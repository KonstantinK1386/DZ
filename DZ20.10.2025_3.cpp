#include <iostream>
#include <Windows.h>
#include <fstream>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	int size;
	std::cout << "Введите размер массива :";
	std::cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		std::cout << "arr [ " << i << " ] = ";
		std::cin >> arr[i];
	}
	std::ofstream fil("out.txt");
	fil << size << std::endl;
	for (int i = size; i > 0; i--) {
		fil << arr[i - 1] << ' ';
	}
	fil.close();
	delete[] arr;
	return 0;
}