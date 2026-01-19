#include <iostream>
#include <string>
#include <Windows.h>
#include "MyRight_Triangle.h"
#include "MyExeptions.h"

Right_Triangle::Right_Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C) : Triangle(side_a, side_b, side_c, angle_A, angle_B, angle_C) {// вызов конструктора треугольник
	if ((angle_C == 90) || (angle_A == 90) || (angle_B == 90)) {
		Name = "Прямоугольный треугольник ";
	}
	else { throw IrregularFigures("Ошибка создания фигуры! Причина: нет ни одного угла равеного 90."); };
}