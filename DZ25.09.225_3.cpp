#include <iostream>
#include <Windows.h>

void numb_fibonachchi(unsigned int num, unsigned long long int a, unsigned long long int b) { // тело функции посчёта и вывода чисел Фибоначчи
	unsigned long long int temp; // вид unsigned long long int - позволяет считать и выводить числа Фибоначчи до  80 и больше

	temp = a;
	a = b;
	b = b + temp;
	std::cout << b;
	num = num - 1;
	if (num > 0) {
		std::cout << ", ";
		numb_fibonachchi(num, a, b); // повторный вызов функции с изменёными параметрами (рекурсия)
	}

}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	unsigned int num;
	std::cout << "Введите число : ";
	std::cin >> num; // ввод количество чисел Фибоначчи
	if (num > 0) { // проверка что введино положительное число
		if (num > 2) { // если количество чисел больше 2
			std::cout << "Числа Фибоначчи : 0, 1, ";
			numb_fibonachchi(num - 2, 0, 1); // вызов вункции подсчёта и вывода чисел Фибоначчи
			std::cout << '\n';
		}
		else {
			switch (num) { // если число 1 или 2
			case 1: std::cout << "Числа Фибоначчи : 0 \n ";
				break;
			case 2: std::cout << "Числа Фибоначчи : 0, 1 \n ";
				break;
			}
		};
	}
	else std::cout << "Число равно 0 или отрицательное, попробуйте снова. \n";
	
	return 0;
}