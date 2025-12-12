#include<iostream>﻿
#include<string>
#include<Windows.h>


class Figures {
protected:
	std::string Name;
	int NumbersSides;
public:
	Figures() {
		NumbersSides = 0;
		Name = "Фигура";
	}
	virtual void get_print() {
		std::cout << Name << ": \n";
		if (get_chek()) { std::cout << "Правильная \n"; }
		else std::cout << "Неправильная \n";
		std::cout << "Колличество сторон: " << NumbersSides <<'\n';
	}
	virtual bool get_chek() {
		if (NumbersSides == 0) {
			return true;
		}
		else return false;
	}
};
class Triangle : public Figures {// треугольник
protected:
	int Side_a;
	int Side_b;
	int Side_c;
	int Angle_A;
	int Angle_B;
	int Angle_C;
public:
	Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C) {// треугольник конструктор
		NumbersSides = 3;
		Side_a = side_a;
		Side_b = side_b;
		Side_c = side_c;
		Angle_A = angle_A;
		Angle_B = angle_B;
		Angle_C = angle_C;
		Name = "Треугольник";
	}
	void get_print() override {
		Figures::get_print();
		std::cout << "Стороны: a= " << Side_a << " b= " << Side_b << " c= " << Side_c << '\n';
		std::cout << "Углы: A= " << Angle_A << " B= " << Angle_B << " C= " << Angle_C << '\n';
	}
	bool get_chek() override {
		if ((Angle_A+Angle_B+Angle_C) == 180) {
			return true;
		}
		else return false;
	}
};
class Qadrangle : public Figures {// четырёх угольник
protected:
	int Side_a;
	int Side_b;
	int Side_c;
	int Side_d;
	int Angle_A;
	int Angle_B;
	int Angle_C;
	int Angle_D;
public:
	Qadrangle(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D) {// четырёх угольник конструктор
		NumbersSides = 4;
		Side_a = side_a;
		Side_b = side_b;
		Side_c = side_c;
		Side_d = side_d;
		Angle_A = angle_A;
		Angle_B = angle_B;
		Angle_C = angle_C;
		Angle_D = angle_D;
		Name = "Четырёхугольник";
	}
	void get_print() override {
		Figures::get_print();
		std::cout << "Стороны: a= " << Side_a << " b= " << Side_b << " c= " << Side_c << " d= " << Side_d << '\n';
		std::cout << "Углы: A= " << Angle_A << " B= " << Angle_B << " C= " << Angle_C << " D= "<< Angle_D << '\n';
	}
	bool get_chek() override {
		if ((Angle_A + Angle_B + Angle_C + Angle_D) == 360) {
			return true;
		}
		else return false;
	}
};
class Right_Triangle : public Triangle {// прямоугольный треугольник
public:
	Right_Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B) : Triangle(side_a, side_b, side_c, angle_A, angle_B, 90) {// вызов конструктора треугольник
		Name = "Прямоугольный треугольник ";
	}
};
class Isosceles_Triangle : public Triangle {// равнобедренный треугольник
public:
	Isosceles_Triangle(int side_a, int side_b, int angle_A, int angle_B) : Triangle(side_a, side_b, side_a, angle_A, angle_B, angle_A) {// вызов конструктора треугольник
		Name = "Равнобедренный треугольник ";
	}
};
class Equilateral_Triangle : public Triangle {// равносторонний треугольник
public:
	Equilateral_Triangle(int side_a) : Triangle(side_a, side_a, side_a, 60, 60, 60) {// вызов конструктора треугольник
		Name = "Равносторонний треугольник ";
	}
};
class Parallelogramm : public Qadrangle {//параллелограмм
public:
	Parallelogramm(int side_a, int side_b, int angle_A, int angle_B) : Qadrangle(side_a, side_b, side_a, side_b, angle_A, angle_B, angle_A, angle_B) { // вызов конструктора четырёхугольник
		Name = "Параллелограмм ";
	}
};
class MyRectangle : public Parallelogramm {//прямоугольник
public:
	MyRectangle(int side_a, int side_b) : Parallelogramm(side_a, side_b, 90, 90) {//вызов конструктора пароллелограмм
		Name = "Прямоугольник ";
	}
};
class  Rhombus : public Parallelogramm {// ромб
public:
	Rhombus(int side_a, int angle_A, int angle_B) : Parallelogramm(side_a, side_a, angle_A, angle_B) { // вызов конструктора параллелограмм
		Name = "Ромб ";
	}
};
class Square : public MyRectangle { // квадрат
public:
	Square(int side_a) : MyRectangle(side_a, side_a) { // вызов конструктора прямоугольник
		Name = "Квадрат ";
	}
};

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	Figures figures; 
	Figures* triangle= new Triangle(10, 20, 30, 50, 60, 70); // объявление треугольника
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