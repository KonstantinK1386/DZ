#include "MyRhombus.h"
#include "MyExeptions.h"

Rhombus::Rhombus(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D) : Parallelogramm(side_a, side_b, side_c, side_d, angle_A, angle_B, angle_C, angle_D) { // Вызов конструктора ромб
	if ((side_a==side_b)&&(side_a==side_c)&&(side_a==side_d)) {
		Name = "Ромб ";
	}
	else {
		throw IrregularFigures("Ошибка создания фигуры! Причина: не все стороны равны.");
	};
	}