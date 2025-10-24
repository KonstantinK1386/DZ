#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	std::ifstream fil("in.txt");
	int size, number;
	if (fil.is_open()) {
		fil >> size;
		std::cout << size << '\n';
		int* arr = new int[size];
		for (int i = 0; i < size; i++) {
			fil >> arr[i];
		}
		for (int i = size; i > 0; i--) {
			std::cout << arr[i-1] << ' ';
		}
		std::cout << '\n';
		delete[] arr;
	}
	else {
		std::cout << "Файл не найден!!! \n";
	}
	
	fil.close();

	return 0;
}