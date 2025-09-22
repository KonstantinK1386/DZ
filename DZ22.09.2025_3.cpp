#include <iostream>
#include <Windows.h>
#include <ctime>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");
	srand(time(0)); // создание случайного числа занова 

	int arr[3][6];
	int max, min, line_index_min, colum_index_min, line_index_max, colum_index_max;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			arr[i][j] = -99 + rand() % ((99 + 1) - (-99)); // заполнение элементов массива случайными числами от -99 до 99
		};
	};
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			std::cout << arr[i][j] << "\t";
		};
		std::cout << arr[i][5] << '\n'; // вывод последнего числа массива без запятой
	};
	
	min = arr[0][0];
	line_index_min = 0;
	colum_index_min = 0;
	max = arr[0][0];
	line_index_max = 0;
	colum_index_max = 0;
	for (int i = 1; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			if (min > arr[i][j]) {
				min = arr[i][j];
				line_index_min = i;
				colum_index_min = j;
			};
			if (max < arr[i][j]) {
				max = arr[i][j];
				line_index_max = i;
				colum_index_max = j;
			};
		};
	};
	std::cout << "Индекс минимального элемента: " << line_index_min << " " << colum_index_min << '\n';
	std::cout << "Индекс максимального элемента: " << line_index_max << " " << colum_index_max << '\n';


	return 0;
}