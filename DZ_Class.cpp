#include <iostream>
#include <string>
#include <Windows.h>
#include "MyClass.h"

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	int count;
	std::string consol;
	char con;
	Counter counter; // создание одбекта класса
	std::cout << "Вы хотите ввести начальное значение счётчика? введите да или нет : "; // в примере всё на русском я сделал так же
	std::cin >> consol;
	if (consol == "да") { // в задаче не описано что вариант кроме "да" и "нет" должен закрывать программу
		std::cout << "Введите начальное значение счётчика : ";
		std::cin >> count;
		counter = Counter(count); // запуск конструктора с начальным параметром счётчика
	}
	else counter = Counter(); // запуск конструктора по умолчанию со значением 1

	std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
	std::cin >> con;
	while (con != 'х') { // 'х' русская 
		switch (con) {
		case '+': counter.increase_the_counter(); break;
		case '-': counter.lower_the_counter(); break;
		case '=': counter.print_count(); break;
		};
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> con;
	};
	std::cout << "До свидания! \n";
	return 0;
};