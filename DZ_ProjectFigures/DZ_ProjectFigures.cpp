#include <iostream>
#include <string>
#include <Windows.h>
#include "Figures/MyFigures.h"
#include "Figures/MyTriangle.h"
#include "Figures/MyQadrangle.h"
#include "Figures/MyRight_Triangle.h"
#include "Figures/MyIsosceles_Triangle.h"
#include "Figures/MyEquilateral_Triangle.h"
#include "Figures/MySquare.h"
#include "Figures/MyRhombus.h"
#include "Figures/MyExeptions.h"


int main(){
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	try
	{
		std::cout << "Создаём фигуру. \n";
		Figures figures;
		figures.get_print();
		std::cout << '\n';
		std::cout << "Создаём треугольник\n";
		Figures* triangle = new Triangle(10, 20, 30, 50, 60, 70); // объявление треугольника
		triangle->get_print();
		std::cout << '\n';
		std::cout << "Создаём прямоугольный треугольник\n";
		Figures* right_triangle = new Right_Triangle(10, 20, 30, 45, 45, 90); // объявление прямоугольный треугольник
		right_triangle->get_print();
		std::cout << '\n';
		std::cout << "Создаём равнобедренный треугольник\n";
		Figures* isosceles_triangle = new Isosceles_Triangle(10, 20, 20, 50, 80, 50); // объявление равнобедренный треугольник
		isosceles_triangle->get_print();
		std::cout << '\n';
		std::cout << "Создаём равносторонний треугольник\n";
		Figures* eqilateral_triangle = new Equilateral_Triangle(30, 30, 30, 60, 60, 60); // объявление равностороннего треугольника
		eqilateral_triangle->get_print();
		std::cout << '\n';
		std::cout << "Создаём четырёхугольник\n";
		Figures* qadrangler = new Qadrangle(10, 20, 30, 40, 75, 85, 95, 105);	// объявление четырёхугольник
		qadrangler->get_print();
		std::cout << '\n';
		std::cout << "Создаём квадрат\n";
		Figures* square = new Square(20, 20, 20, 20, 90, 90, 90, 90); // объявление квадрат
		square->get_print();
		std::cout << '\n';
		std::cout << "Создаём параллелограмм\n";
		Figures* parallelogramm = new Parallelogramm(20, 30, 30, 20, 120, 60, 60, 120);// объявление параллелограмм
		parallelogramm->get_print();
		std::cout << '\n';
		std::cout << "Создаём ромб\n";
		Figures* rhombus = new Rhombus(30, 30, 30, 30, 30, 150, 150, 30);// объявление ромб
		rhombus->get_print();
		std::cout << '\n';
		std::cout << "Создаём прямоугольник.\n";
		Figures* rectangle = new MyRectangle(10, 20, 10, 20, 90, 90, 90, 90); //объявление прямоугольник
		rectangle->get_print();
		std::cout << '\n';
		system("pause");
	}
	catch (IrregularFigures& ex)
	{
		std::cout << ex.getMessage() << '\n';
	}
	return 0;
}
