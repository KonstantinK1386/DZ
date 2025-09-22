#include <iostream>
#include <Windows.h>
#include <ctime>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");
	srand(time(0)); // создание случайного числа занова 

	int arr[10];
	int max, min;

	for (int i = 0; i < 10; i++) {
		arr[i] = -99 + rand() % ((99 + 1) - (-99)); // заполнение элементов массива случайными числами от -99 до 99
	};
	for (int i = 0; i < 9; i++) {
		std::cout << arr[i] << ", ";
	};
	std::cout << arr[9] << '\n'; // вывод последнего числа массива без запятой
	min = arr[0];
	max = arr[0];
	for (int i = 1; i < 9; i++) {
		if (min > arr[i])  min = arr[i] ;
		if (max < arr[i]) max = arr[i];
	};
	std::cout << "Минимальное число в массиве: " << min << '\n';
	std::cout << "Максимальное число в массиве: " << max << '\n';

	return 0;
}