#include <iostream>
#include <Windows.h>

int sum(int a, int b); // объявляем что есть функция сложения
int diff(int a, int b); // объявляем что есть функция вычитания
int multiplication(int a, int b); // объявляем что есть функция умножения
double division(int a, int b); // объявляем что есть функция деления

int main(int argc, char** argv)
{
	int a = 5, b = 10;
	
	int s = sum(a, b); // вызов функции сложения и присвоение значения функции переменной
	int dif = diff(a, b); // вызов функции вычитания и присвоение значения функции переменной
	int mult = multiplication(a, b); // вызов функции умножения и присвоение значения функции переменной
	double div = division(a, b); // вызов функции деления и присвоение значения функции переменной

	std::cout << a << " + " << b << " = " << s << std::endl;
	std::cout << a << " - " << b << " = " << dif << std::endl;
	std::cout << a << " * " << b << " = " << mult << std::endl;
	std::cout << a << " / " << b << " = " << div << std::endl;
	
	return 0;
}

int sum(int a, int b) { // тело функуции сложения
	return a + b;
}

int diff(int a, int b) { // тело функуции вычитания
	return a - b;
}

int multiplication(int a, int b) { // тело функуции умножения
	return a * b;
}

double division(int a, int b) { // тело функуции деления
	return static_cast<double>(a) / b; // приведение целого числа к типу числа с плавующей точкой иначе деление выдаст целое число = 0
}