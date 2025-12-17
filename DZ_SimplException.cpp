#include <iostream>
#include <string>
#include <Windows.h>

class bad_length : public std::exception {
public:
	const char* what() const override { return "Вы ввели слово запретной длинны! Досвидания. \n"; }
};

int function(std::string str, int forbidden_length) {
	if (str.length() == forbidden_length) {
		throw bad_length();
	}
	else return str.length();
}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	int forbidden_length;
	std::string str;

	std::cout << "Введите запретную длинну: ";
	std::cin >> forbidden_length;
	try {
	while (true) {
		std::cout << "Введите слово: ";
		std::cin >> str;
		
			std::cout << "Длинна слова: " << function(str, forbidden_length) << '\n';
	};
	}
	catch (const bad_length& except) { std::cout << except.what() << '\n'; }
	catch (...) { std::cout << "Неизвестная ошибка. Завершение работы.\n"; }

	return 0;
}