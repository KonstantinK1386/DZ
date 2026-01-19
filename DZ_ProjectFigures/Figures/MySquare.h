#pragma once
#include "MyRectangle.h"

class Square : public MyRectangle { // квадрат
public:
	Square(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D); // вызов конструктора прямоугольник
};