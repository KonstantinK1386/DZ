#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	std::string str;
	std::ifstream fil("in.txt");
	if (fil.is_open()) {
		while (fil >> str) {
			std::cout << str << '\n';
		}
	}
	else {
		std::cout << "Файл не найден! \n";
	}
	fil.close();

	return 0;
}