#include <iostream>
#include <Windows.h>

void numb_fibonachchi(unsigned int num, unsigned long long int a, unsigned long long int b) { // начало функции перечисления чисел Фибоначчи
	unsigned long long int temp; // формат unsigned long int - только целые длинное целое число позволяет хранитт 80 число Фибоначчи

	temp = a;
	a = b;
	b = b + temp;
	std::cout << b;
	num = num - 1;
	if (num > 0) {
		std::cout << ", ";
		numb_fibonachchi(num, a, b); // вызов функции из функции (рекурсия)
	}

}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	unsigned int num;
	std::cout << "Введите число : ";
	std::cin >> num; // ввод колличество выводимых чисел Фибоначчи
	if (num > 0) { // проверка ввода положительного числа
		if (num > 2) { // если число не первые 2
			std::cout << "Числа Фибоначи : 0, 1, ";
			numb_fibonachchi(num - 2, 0, 1); // вызов функции вывода чисел Фибоначчи
			std::cout << '\n';
		}
		else {
			switch (num) { // если число равно 1 или 2
			case 1: std::cout << "Числа Фибоначи : 0 \n ";
				break;
			case 2: std::cout << "Числа Фибоначи : 0, 1 \n ";
				break;
			}
		};
	}
	else std::cout << "Вы не ввели колличество чилел или оно равно 0 \n";
	
	return 0;
}