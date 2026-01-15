#include "MyRectangle.h"
#include "MyExeptions.h"

MyRectangle::MyRectangle(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D) : Parallelogramm(side_a, side_b, side_c, side_d, angle_A, angle_B, angle_C, angle_D) {//вызов конструктора пароллелограмм
	if ((angle_A==90)&&(angle_B==90)&&(angle_C==90)&&(angle_D==90)) {
		Name = "Прямоугольник ";
	}
	else {
		throw IrregularFigures("Ошибка создания фигуры! Причина: не все углы равны 90.");
	};
	}