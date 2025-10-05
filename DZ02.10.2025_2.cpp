#include <iostream>
#include <Windows.h>

namespace sum {
	int calc(int x, int y) {
		return x + y;
	}
}
namespace subtrac {
	int calc(int x, int y) {
		return x - y;
	}
}
namespace multiplic {
	int calc(int x, int y) {
		return x * y;
	}
}
namespace division {
	int calc(int x, int y) {
		return x / y;
	}
}

void main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	int x = 6, y = 9;
	std::cout << "x = " << x << " y = " << y << '\n';
	std::cout << "Сложение : " << sum::calc(x, y) << '\n';
	std::cout << "Вычитание : " << subtrac::calc(x, y) << '\n';
	std::cout << "Умножение : " << multiplic::calc(x, y) << '\n';
	std::cout << "Деление : " << division::calc(x, y) << '\n';



}



