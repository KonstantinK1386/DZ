#include <iostream>
#include <Windows.h>

void numb_fibonachchi(int num, long long int a, long long int b) {
	long long int temp;

	temp = a;
	a = b;
	b = b + temp;
	std::cout << b;
	num = num - 1;
	if (num > 0) {
		std::cout << ", ";
		numb_fibonachchi(num, a, b);
	}

}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	int num;
	std::cout << "Введите число : ";
	std::cin >> num;
	std::cout << "Числа Фибоначи : 0, 1, ";
	numb_fibonachchi(num - 2, 0, 1);
	std::cout << '\n';

	return 0;
}