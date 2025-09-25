#include <iostream>
#include <Windows.h>

void rassing_to_a_power(int value, int power, int result) {
	for (int i = 0; i < power; i++) {
		result *= value;
	}
	std::cout << value << "  в степени " << power << " = " << result << std::endl;
	
}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	int value = 5, power = 2, result = 1;

	rassing_to_a_power(value, power, result);

	value = 3;
	power = 3;
	result = 1;

	rassing_to_a_power(value, power, result);

	value = 4;
	power = 4;
	result = 1;

	rassing_to_a_power(value, power, result);

	return 0;

}