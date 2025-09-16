#include <iostream>

int main() {
	setlocale(LC_ALL, "RU");

	int a, b, c;
	std::cout << "Введите первое число ";
	std::cin >> a;
	std::cout << "Введите второе число ";
	std::cin >> b;
	std::cout << "Введите третье число ";
	std::cin >> c;

	a > b ?
		a > c ?
		b > c ? std::cout << "Результат: " << a << ' ' << b << ' ' << c << '\n' :
		std::cout << "Результат: " << a << ' ' << c << ' ' << b << '\n' :
		std::cout << "Результат: " << c << ' ' << a << ' ' << b << '\n' :
		b > c ?
		a > c ? std::cout << "Результат: " << b << ' ' << a << ' ' << c << '\n' :
		std::cout << "Результат: " << b << ' ' << c << ' ' << a << '\n' :
		std::cout << "Результат: " << c << ' ' << b << ' ' << a << '\n';
	
}