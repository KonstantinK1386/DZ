#include <iostream>

int main() {
	setlocale(LC_ALL, "RU");

	int a, b, c;
	std::cout << "������� ������ ����� ";
	std::cin >> a;
	std::cout << "������� ������ ����� ";
	std::cin >> b;
	std::cout << "������� ������ ����� ";
	std::cin >> c;

	a > b ?
		a > c ?
		b > c ? std::cout << "���������: " << a << ' ' << b << ' ' << c << '\n' :
		std::cout << "���������: " << a << ' ' << c << ' ' << b << '\n' :
		std::cout << "���������: " << c << ' ' << a << ' ' << b << '\n' :
		b > c ?
		a > c ? std::cout << "���������: " << b << ' ' << a << ' ' << c << '\n' :
		std::cout << "���������: " << b << ' ' << c << ' ' << a << '\n' :
		std::cout << "���������: " << c << ' ' << b << ' ' << a << '\n';
	
}