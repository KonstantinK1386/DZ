#include <iostream>
#include "MyQadrangle.h"
#include "MyExeptions.h"

	Qadrangle::Qadrangle(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D) {// четырёх угольник конструктор
		NumbersSides = 4;
		if ((angle_A + angle_B + angle_C + angle_D) != 360) {
			throw IrregularFigures("Ошибка создания фигуры! Причина: сумма углов не равна 360.");
		}
		else {
			Side_a = side_a;
			Side_b = side_b;
			Side_c = side_c;
			Side_d = side_d;
			Angle_A = angle_A;
			Angle_B = angle_B;
			Angle_C = angle_C;
			Angle_D = angle_D;
			Name = "Четырёхугольник";
		};
	}
	void Qadrangle::get_print() {
		Figures::get_print();
		std::cout << "Стороны: a= " << Side_a << " b= " << Side_b << " c= " << Side_c << " d= " << Side_d << '\n';
		std::cout << "Углы: A= " << Angle_A << " B= " << Angle_B << " C= " << Angle_C << " D= " << Angle_D << '\n';
	}
	