#include <iostream>
#include <Windows.h>

enum class month {
	januar = 1, 
	february, 
	march, 
	april, 
	may, 
	june, 
	july, 
	august, 
	september, 
	october, 
	november, 
	december

};

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	int number;
	std::cout << "Введите номер месяца :";
	std::cin >> number;
	while (number != 0) {
		switch (number) {
		case static_cast<int>(month::januar): std::cout << "Январь \n"; break;
		case static_cast<int>(month::february): std::cout << "Февраль \n"; break;
		case static_cast<int>(month::march): std::cout << "Март \n"; break;
		case static_cast<int>(month::april): std::cout << "Апрель \n"; break;
		case static_cast<int>(month::may): std::cout << "Май \n"; break;
		case static_cast<int>(month::june): std::cout << "Июнь \n"; break;
		case static_cast<int>(month::july): std::cout << "Июль \n"; break;
		case static_cast<int>(month::august): std::cout << "Авгус \n"; break;
		case static_cast<int>(month::september): std::cout << "Сентябрь \n"; break;
		case static_cast<int>(month::october): std::cout << "Октябрь \n"; break;
		case static_cast<int>(month::november): std::cout << "Ноябрь \n"; break;
		case static_cast<int>(month::december): std::cout << "Декабрь \n"; break;
		default: std::cout << "Неправильный номер месяца! \n"; break;
		};
		std::cout << "Введите номер месяца :";
		std::cin >> number;
	};

	return 0;
}