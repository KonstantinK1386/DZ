#include <iostream>
#include <Windows.h>

void main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	short a1 = 1;
	int a2 = 2;
	long a3 = 3;
	long long a4 = 4;
	float a5 = 5.0F;
	double a6 = 6.0;
	long double a7 = 7.0;
	bool a8 = true;

	std::cout << "short : \t" << &a1 << ' ' << sizeof(a1) << std::endl;
	std::cout << "int : \t \t" << &a2 << ' ' << sizeof(a2) << std::endl;
	std::cout << "long : \t \t" << &a3 << ' ' << sizeof(a3) << std::endl;
	std::cout << "long long : \t" << &a4 << ' ' << sizeof(a4) << std::endl;
	std::cout << "float : \t" << &a5 << ' ' << sizeof(a5) << std::endl;
	std::cout << "double : \t" << &a6 << ' ' << sizeof(a6) << std::endl;
	std::cout << "long double : \t" << &a7 << ' ' << sizeof(a7) << std::endl;
	std::cout << "bool : \t \t" << &a8 << ' ' << sizeof(a8) << std::endl;



}