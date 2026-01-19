#include "MyIsosceles_Triangle.h"
#include "MyExeptions.h"

Isosceles_Triangle::Isosceles_Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C) : Triangle(side_a, side_b, side_c, angle_A, angle_B, angle_C) {// вызов конструктора треугольник
	if (((side_a == side_b) || (side_b == side_c) || (side_a == side_c)) && ((angle_A == angle_B) || (angle_B == angle_C) || (angle_A == angle_C))) {
		Name = "Равнобедренный треугольник ";
	}
	else {
		throw IrregularFigures("Ошибка создания фигуры! Причина: нет двух равных сторон и углов.");
	};
}