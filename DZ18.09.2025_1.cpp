#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int num, sum=0;
	do {
		std::cout << "������� ����� ����� ��� ����� '0', ����� ���������: ";
		std::cin >> num;
		sum = sum + num;
	} while (num != 0);
	std::cout << "����� ���� ������� ����� = " << sum << "\n";
	return 0;
}