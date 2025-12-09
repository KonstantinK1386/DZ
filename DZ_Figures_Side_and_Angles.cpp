#include <iostream>
#include <string>
#include <Windows.h>

class Figures {
protected:
	int NumbersSides;
public:
	Figures() {
		NumbersSides = 0;
	}
	int get_NumbersSide() {
		return NumbersSides;
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
	}
	std::string get_Length_of_sides() { //возвращение длинны сторон
		std::string LengthOfSsides = "Стороны : a= "+ std::to_string(Side_a) + " b= " + std::to_string(Side_b) + " c= " + std::to_string(Side_c);
			return LengthOfSsides;
	}
	std::string get_Size_of_angles() { // возвращение размера углов
		std::string SizeOfAngles = "Углы : A= " + std::to_string(Angle_A) + " B= " + std::to_string(Angle_B) + " C= " + std::to_string(Angle_C);;
		return SizeOfAngles;
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
	}
	std::string get_Length_of_sides() { // возврвщение длинны сторон
		std::string LengthOfSsides = "Стороны : a= " + std::to_string(Side_a) + " b= " + std::to_string(Side_b) + " c= " + std::to_string(Side_c) + " d= " + std::to_string(Side_d);
		return LengthOfSsides;
	}
	std::string get_Size_of_angles() { // возврвщения размеров углов
		std::string SizeOfAngles = "Углы : A= " + std::to_string(Angle_A) + " B= " + std::to_string(Angle_B) + " C= " + std::to_string(Angle_C) + " D= " + std::to_string(Angle_D);
		return SizeOfAngles;
	}
};
class Right_Triangle : public Triangle {// прямоугольный треугольник
public:
	Right_Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B) : Triangle(side_a, side_b, side_c, angle_A, angle_B, 90) {// вызов конструктора треугольник

	}
};
class Isosceles_Triangle : public Triangle {// равнобедренный треугольник
public:
	Isosceles_Triangle(int side_a, int side_b, int angle_A, int angle_B) : Triangle(side_a, side_b, side_a, angle_A, angle_B, angle_A) {// вызов конструктора треугольник

	}
};
class Equilateral_Triangle : public Triangle {// равносторонний треугольник
public:
	Equilateral_Triangle(int side_a) : Triangle(side_a, side_a, side_a, 60, 60, 60) {// вызов конструктора треугольник

	}
};
class Parallelogramm : public Qadrangle {//пароллограмм
public:
	Parallelogramm(int side_a, int side_b, int angle_A, int angle_B) : Qadrangle(side_a, side_b, side_a, side_b, angle_A, angle_B, angle_A, angle_B) { // вызов конструктора четырёхугольник

	}
};
class MyRectangle : public Parallelogramm {//прямоугольник
public:
	MyRectangle(int side_a, int side_b) : Parallelogramm(side_a, side_b, 90, 90) {//вызов конструктора пароллелограмм

	}
};
class  Rhombus : public Parallelogramm {// ромб
public:
	Rhombus(int side_a, int angle_A, int angle_B) : Parallelogramm(side_a, side_a, angle_A, angle_B) { // вызов конструктора параллелограмм

	}
};
class Square : public MyRectangle { // квадрат
public:
	Square(int side_a) : MyRectangle(side_a, side_a) { // вызов конструктора прямоугольник

	}
};

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	Triangle triangle(10, 20, 30, 50, 60, 70); // объявление треугольника
	Right_Triangle right_triangle(10, 20, 30, 50, 60); // объявление прямоугольный треугольник
	Isosceles_Triangle isosceles_triangle(10, 20, 50, 60); // объявление равнобедренный треугольник
	Equilateral_Triangle eqilateral_triangle(30); // объявление равностороннего треугольника
	Qadrangle qadrangler(10, 20, 30, 40, 50, 60, 70, 80);	// объявление четырёхугольник
	Square square(20); // объявление квадрат
	Parallelogramm parallelogramm(20, 30, 30,40);// объявление параллелограмм
	Rhombus rhombus(30, 30, 40);// объявление ромб
	MyRectangle rectangle(10, 20); //объявление прямоугольник
	std::cout << "Треугольник : \n";
	std::cout << triangle.get_Length_of_sides() << '\n';
	std::cout << triangle.get_Size_of_angles() << '\n';
	std::cout << std::endl;
	std::cout << "Прямоугольный треугольник : \n";
	std::cout << right_triangle.get_Length_of_sides() << '\n';
	std::cout << right_triangle.get_Size_of_angles() << '\n';
	std::cout << std::endl;
	std::cout << "Равнобедренный треугольник : \n";
	std::cout << isosceles_triangle.get_Length_of_sides() << '\n';
	std::cout << isosceles_triangle.get_Size_of_angles() << '\n';
	std::cout << std::endl;
	std::cout << "Равносторонний треугольник : \n";
	std::cout << eqilateral_triangle.get_Length_of_sides() << '\n';
	std::cout << eqilateral_triangle.get_Size_of_angles() << '\n';
	std::cout << std::endl;
	std::cout << "Четырёхугольник : \n";
	std::cout << qadrangler.get_Length_of_sides() << '\n';
	std::cout << qadrangler.get_Size_of_angles() << '\n';
	std::cout << std::endl;
	std::cout << "Прямоугольник : \n";
	std::cout << rectangle.get_Length_of_sides() << '\n';
	std::cout << rectangle.get_Size_of_angles() << '\n';
	std::cout << std::endl;
	std::cout << "Квадрат : \n";
	std::cout << square.get_Length_of_sides() << '\n';
	std::cout << square.get_Size_of_angles() << '\n';
	std::cout << std::endl;
	std::cout << "Параллелограмм : \n";
	std::cout << parallelogramm.get_Length_of_sides() << '\n';
	std::cout << parallelogramm.get_Size_of_angles() << '\n';
	std::cout << std::endl;
	std::cout << "Ромб : \n";
	std::cout << rhombus.get_Length_of_sides() << '\n';
	std::cout << rhombus.get_Size_of_angles() << '\n';
	std::cout << std::endl;

	return 0;
}




