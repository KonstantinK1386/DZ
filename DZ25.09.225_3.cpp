#include <iostream>
#include <Windows.h>

void numb_fibonachchi(int num, unsigned long int a, unsigned long int b) { // начало функции перечисления чисел Фибоначчи
	unsigned long int temp; // формат unsigned long int - только целые длинное целое число позволяет хранитт 80 число Фибоначчи

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

	int num;
	std::cout << "Введите число : ";
	std::cin >> num; // ввод колличество выводимых чисел Фибоначчи
	std::cout << "Числа Фибоначи : 0, 1, ";
	numb_fibonachchi(num - 2, 0, 1); // вызов функции вывода чисел Фибоначчи
	std::cout << '\n';

	return 0;
}