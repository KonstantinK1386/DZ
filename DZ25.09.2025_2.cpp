#include <iostream>
#include <Windows.h>

void rassing_to_a_power(int value, int power, int result) { // функция возведения в степень
	for (int i = 0; i < power; i++) {
		result *= value;
	}
	std::cout << value << "  в степени " << power << " = " << result << std::endl; // вывод значения на экран
	
}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	int value = 5, power = 2, result = 1;

	rassing_to_a_power(value, power, result); // вызов функции возведения в степень и вывода значения на экран

	value = 3;
	power = 3;
	result = 1;

	rassing_to_a_power(value, power, result); // вызов функции возведения в степень и вывода значения на экран

	value = 4;
	power = 4;
	result = 1;

	rassing_to_a_power(value, power, result); // вызов функции возведения в степень и вывода значения на экран

	return 0;

}