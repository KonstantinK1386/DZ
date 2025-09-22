#include <iostream>
#include <Windows.h>
#include <ctime>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");
	srand(time(0)); // создание случайного числа занова 

	int array_mas[10];
	 
	for (int i = 0; i < 10; i++) {
		array_mas[i] = -99 + rand() % ((99 + 1) - (-99)); // заполнение элементов массива случайными числами от -99 до 99
	};
	for (int i = 0; i < 9; i++) {
		std::cout << array_mas[i] <<", ";
	};
	std::cout << array_mas[9] << '\n'; // вывод последнего числа массива без запятой

	return 0;
}