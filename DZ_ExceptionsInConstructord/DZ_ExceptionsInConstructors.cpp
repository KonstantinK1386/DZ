#include <iostream>
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
#include "MyExeptions.h"






int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	try
	{
		Figures figures;
		figures.get_print();
		std::cout << '\n';
		Figures* triangle = new Triangle(10, 20, 30, 50, 60, 70); // объявление треугольника
		triangle->get_print();
		std::cout << '\n';
		Figures* right_triangle = new Right_Triangle(10, 20, 30, 50, 60); // объявление прямоугольный треугольник
		right_triangle->get_print();
		std::cout << '\n';
		Figures* isosceles_triangle = new Isosceles_Triangle(10, 20, 50, 60); // объявление равнобедренный треугольник
		isosceles_triangle->get_print();
		std::cout << '\n';
		Figures* eqilateral_triangle = new Equilateral_Triangle(30); // объявление равностороннего треугольника
		eqilateral_triangle->get_print();
		std::cout << '\n';
		Figures* qadrangler = new Qadrangle(10, 20, 30, 40, 50, 60, 70, 80);	// объявление четырёхугольник
		qadrangler->get_print();
		std::cout << '\n';
		Figures* square = new Square(20); // объявление квадрат
		square->get_print();
		std::cout << '\n';
		Figures* parallelogramm = new Parallelogramm(20, 30, 30, 40);// объявление параллелограмм
		parallelogramm->get_print();
		std::cout << '\n';
		Figures* rhombus = new Rhombus(30, 30, 40);// объявление ромб
		rhombus->get_print();
		std::cout << '\n';
		Figures* rectangle = new MyRectangle(10, 20); //объявление прямоугольник
		rectangle->get_print();
		std::cout << '\n';
	}
	catch (IrregularFigures& ex)
	{
		std::cout << ex.getMessage() << '\n';
	}
	

	return 0;
}