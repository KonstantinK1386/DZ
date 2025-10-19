#include <iostream>
#include <Windows.h>
#include <cstring>

void main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	std::string Name = "";
	std::string Surname = "";
	std::cout << "Введите имя : ";
	std::cin >> Name;
	std::cout << "Введите фамилию : ";
	std::cin >> Surname;
	std::cout << "Здравствуйте " << (Name + " " + Surname) << '\n';

}