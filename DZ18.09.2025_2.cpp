#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int num, sum = 0;
	std::cout << "������� ����� ����� : ";
	std::cin >> num; 
	while (num != 0) {
		sum = sum + (num % 10); 
		num = num / 10;
	} 	
	std::cout << "����� ���� ���� ����� = " << sum;

	return 0;
}