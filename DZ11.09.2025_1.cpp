#include <iostream>

int main() {

	setlocale(LC_ALL, "RU");

	std::cout << "Введите число :\n";
	double num;
	std::cin >> num;
	std::cout << "Вы ввели : \n";
	std::cout << num;

	return 0;
}