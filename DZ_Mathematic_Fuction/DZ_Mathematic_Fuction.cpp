#include <iostream>
#include <Windows.h>
#include "MyFunction.h"

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	double number1, number2;
	char action;
	std::cout << "Введите первое число :";
	std::cin >> number1;
	std::cout << "Введите второе число :";
	std::cin >> number2;
	std::cout << "Выберите операцию (+ сложение; - вычитание; * умножение; / деление; ^ возведение в степень): ";
	std::cin >> action;
	switch (action) {
	case '+': { std::cout << number1 << " + " << number2 << " = " << Addition(number1, number2) << '\n'; break; }
	case '-': { std::cout << number1 << " - " << number2 << " = " << Subtraction(number1, number2) << '\n'; break; }
	case '*': { std::cout << number1 << " * " << number2 << " = " << Multiplication(number1, number2) << '\n'; break; }
	case '/': { std::cout << number1 << " / " << number2 << " = " << Division(number1, number2) << '\n'; break; }
	case '^': { std::cout << number1 << "в степени " << number2 << " = " << Power(number1, static_cast<int>(number2)) << '\n'; break; }
	default: std::cout << "Ошибка вводв действия! \n";
	}

	return 0;
}

