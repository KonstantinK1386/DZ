#include <iostream>
#include <Windows.h>
#include <ctime>

void output_array(int arr[], int size) { // процедура вывода масива в консоль
	for (int i = 0; i < size - 1; i++) {
		std::cout << arr[i] << ", ";
	};
	std::cout << arr[9] << '\n'; // вывод последнего числа массива без запятой
}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");
	srand(time(0)); // создание случайного числа занова 

	int arr[10];
	int size, temp;

	size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < 10; i++) {
		arr[i] = -99 + rand() % ((99 + 1) - (-99)); // заполнение элементов массива случайными числами от -99 до 99
	};
	std::cout << "Изначальный массив: \n";
	output_array(arr, size); // вызов процедуры вывода массива в консоль

	for (int i = 0; i < size - 1; i++) {
		for (int j = size - 1; j > 0 + i; j--) { //методом пузырька сортируем с конца массива переносим минимальный элемент в начало массива
			if (arr[j] < arr[j - 1]) {
				temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			};
		};
	};
	std::cout << "Отсартированный массив: \n";
	output_array(arr, size); // вызов процедуры вывода массива в консоль после сортировки

	return 0;
}