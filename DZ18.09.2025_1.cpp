#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int num, sum=0;
	do {
		std::cout << "¬ведите целое число или число '0', чтобы закончить: ";
		std::cin >> num;
		sum = sum + num;
	} while (num != 0);
	std::cout << "—умма всех введЄных чилер = " << sum << "\n";
	return 0;
}