#include "MyParallelogramm.h"
#include "MyExeptions.h"

Parallelogramm::Parallelogramm(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D) : Qadrangle(side_a, side_b, side_c, side_d, angle_A, angle_B, angle_C, angle_D) { // вызов конструктора четырёхугольник
	if (((side_a == side_c) && (side_b == side_d)) || ((side_a == side_b) && (side_c == side_d)) || ((side_a == side_d) && (side_b == side_c))) {
		if ((((angle_A == angle_C) && (angle_B == angle_D)) || ((angle_A == angle_B) && (angle_C == angle_D))) || (angle_A == angle_D) && (angle_B == angle_C)) {
			Name = "Параллелограмм ";
		}
		else {
			throw IrregularFigures("Ошибка создания фигуры! Причина: нет пары двух равных углов.");
		};
	}
	else {
		throw IrregularFigures("Ошибка создания фигуры! Причина: нет пары двух равных сторон.");
	};
}