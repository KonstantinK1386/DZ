#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int num, sum = 0;
	std::cout << "Введите целое число : ";
	std::cin >> num; 
	while (num != 0) {
		sum = sum + (num % 10); 
		num = num / 10;
	} 	
	std::cout << "Сумма всех цифр числа = " << sum;

	return 0;
}