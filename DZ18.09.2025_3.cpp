#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int num;
	std::cout << "¬ведите целое число : ";
	std::cin >> num;
	for (int i = 1; i <= 10; i++) {
		std::cout << num << " x " << i << " = " << num * i << '\n';
	}
	return 0;
}