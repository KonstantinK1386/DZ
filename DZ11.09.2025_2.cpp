#include <iostream>
#include <string>
#include <Windows.h>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	std::string str;
	std::cout << "������� ����� : \n";
	std::getline(std::cin >> std::ws, str);
	std::cout << "�� ����� : \n";
	std::cout << str;

	return 0;
}