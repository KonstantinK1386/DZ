#include <iostream>
#include <string>
#include <Windows.h>
#include "MyTriangle.h"
#include "MyExeptions.h"

	Triangle::Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C) {// Конструктор треугольника
		NumbersSides = 3;
		if ((angle_A + angle_B + angle_C) != 180) {
			throw IrregularFigures("Ошибка создания фигуры! Причина: сумма углов не равна 180.");
		}
		else {
			Side_a = side_a;
			Side_b = side_b;
			Side_c = side_c;
			Angle_A = angle_A;
			Angle_B = angle_B;
			Angle_C = angle_C;
			Name = "Треугольник";
		};
	}
	void Triangle::get_print() {
		Figures::get_print();
		std::cout << "Стороны: a= " << Side_a << " b= " << Side_b << " c= " << Side_c << '\n';
		std::cout << "Углы: A= " << Angle_A << " B= " << Angle_B << " C= " << Angle_C << '\n';
	}
	