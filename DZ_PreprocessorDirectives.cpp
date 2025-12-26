#include <iostream>
#include <Windows.h>

#define MODE 1

#ifdef MODE


#if MODE == 0 // усли MODE определено как 0 то выполняется этот код
int main(){ 
	std::cout << "Работаю в режиме тренеровки. \n";
	return 1;
}
#elif MODE == 1 //если MODE определено как 1 то выполняется этот код

double add(double a, double b) {
	return a + b;
}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");
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

#else
int main() { // если MODE определён но не является ни 0 ни 1 то выполняется этот код
	std::cout << "Неизвестный режим. Завершение работы. \n";
	return 404;
}
#endif
	

#endif // MODE

#ifndef MODE // Если MODE не определено то выводится ошибка
#error MODE НЕ ОПРЕДЕЛЕНО
#endif