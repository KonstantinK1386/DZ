#include "MyEquilateral_Triangle.h"
#include "MyExeptions.h"

Equilateral_Triangle::Equilateral_Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C) : Triangle(side_a, side_b, side_c, angle_A, angle_B, angle_C) {// вызов конструктора равностороннего треугольника
	if ((side_a==side_b)&&(side_a==side_c)&&(side_b==side_c)&&(angle_A==60)&&(angle_B==60)&&(angle_C==60)) {
		Name = "Равносторонний треугольник";
	}
	else {
		throw IrregularFigures("Ошибка создания фигуры! Причина: стороны не равны, углы не равны.");
	};
	}