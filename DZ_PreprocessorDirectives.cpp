#include <iostream>
#include <Windows.h>

#define MODE 1 

#ifdef MODE
double add(double a, double b);
int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

#if MODE == 0
	std::cout << "Работаю в режиме тренеровки. \n";
	return 0;
}
#elif MODE == 1
	std::cout << "Работаю в боевом режиме \n";
	std::cout << "Введите число 1: ";
	double a;
	std::cin >> a;
	std::cout << "Введите число 2: ";
	double b;
	std::cin >> b;
	std::cout << "Результат сложения: " << add(a, b);
	return 0;
}
	double add(double a, double b) {
		return a + b;
	};
#else
	std::cout << "Неизвестный режим. Завершение работы. \n";
	return 0;
	}
#endif
	

#endif // MODE

#ifndef MODE
#error MODE НЕ ОПРЕДЕЛЕНО
#endif