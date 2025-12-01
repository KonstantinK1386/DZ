#include <iostream>
#include <Windows.h>

class Calculator {
public:
	double num1;
	double num2;
	bool set_num1(double num1) {
		if (num1 > 0) {
			this->num1 = num1;
			return true;
		}
		else return false;
	};
	bool set_num2(double num2) {
		if (num2 > 0) {
			this->num2 = num2;
			return true;
		}
		else return false;
	};
	double add() { return (num1 + num2); };
	double multiply() { return (num1 * num2); };
	double subtract_1_2() { return (num1 - num2); };
	double subtract_2_1() { return (num2 - num1); };
	double divide_1_2() { return (num1 / num2); };
	double divide_2_1() { return (num2 / num1); };
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "RU");

	Calculator Simpl;
	double num1, num2;
	while (true) {
		std::cout << "Введите num1 : ";
		std::cin >> num1;
		while (!Simpl.set_num1(num1)) {
			std::cout << "Неверный ввод! \n";
			std::cout << "Введите num1 : ";
			std::cin >> num1;
		};
		std::cout << "Введите num2 : ";
		std::cin >> num2;
		while (!Simpl.set_num2(num2)) {
			std::cout << "Неверный ввод! \n";
			std::cout << "Введите num2 : ";
			std::cin >> num2;
		};
		std::cout << "num1 + num2 = " << Simpl.add() << '\n';
		std::cout << "num1 - num2 = " << Simpl.subtract_1_2() << '\n';
		std::cout << "num2 - num1 = " << Simpl.subtract_2_1() << '\n';
		std::cout << "num1 * num2 = " << Simpl.multiply() << '\n';
		std::cout << "num1 / num2 = " << Simpl.divide_1_2() << '\n';
		std::cout << "num1 / num2 = " << Simpl.divide_2_1() << '\n';
	};
	return 0;
};