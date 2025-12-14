#include<iostream>﻿
#include<string>
#include<Windows.h>
#include "MyFigures.h"
#include "MyTriangle.h"
#include "MyQadrangle.h"
#include "MyRight_Triangle.h"
#include "MyIsosceles_Triangle.h"
#include "MyEquilateral_Triangle.h"
#include "MySquare.h"
#include "MyRhombus.h"






int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	Figures figures;
	Figures* triangle = new Triangle(10, 20, 30, 50, 60, 70); // объявление треугольника
	Figures* right_triangle = new Right_Triangle(10, 20, 30, 50, 60); // объявление прямоугольный треугольник
	Figures* isosceles_triangle = new Isosceles_Triangle(10, 20, 50, 60); // объявление равнобедренный треугольник
	Figures* eqilateral_triangle = new Equilateral_Triangle(30); // объявление равностороннего треугольника
	Figures* qadrangler = new Qadrangle(10, 20, 30, 40, 50, 60, 70, 80);	// объявление четырёхугольник
	Figures* square = new Square(20); // объявление квадрат
	Figures* parallelogramm = new Parallelogramm(20, 30, 30, 40);// объявление параллелограмм
	Figures* rhombus = new Rhombus(30, 30, 40);// объявление ромб
	Figures* rectangle = new MyRectangle(10, 20); //объявление прямоугольник
	figures.get_print();
	std::cout << '\n';
	triangle->get_print();
	std::cout << '\n';
	right_triangle->get_print();
	std::cout << '\n';
	isosceles_triangle->get_print();
	std::cout << '\n';
	eqilateral_triangle->get_print();
	std::cout << '\n';
	qadrangler->get_print();
	std::cout << '\n';
	rectangle->get_print();
	std::cout << '\n';
	square->get_print();
	std::cout << '\n';
	parallelogramm->get_print();
	std::cout << '\n';
	rhombus->get_print();

	return 0;
}