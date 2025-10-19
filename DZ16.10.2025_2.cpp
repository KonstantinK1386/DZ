#include <iostream>
#include <Windows.h>
#include <cstring>

void main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	std::string Word = "малина";
	std::string str = "";
	std::cout << "Угадайте слово : ";
	std::cin >> str;
	while ((Word == str) != 1) {
		std::cout << "Неправильно \n";
		std::cout << "Угадайте слово : ";
		std::cin >> str;
	}
	std::cout << "Правильно! Вы победили! загадонное слово - " << Word << '\n';
}