#pragma once
#include <iostream>
#include "MyTriangle.h"

class Right_Triangle : public Triangle {// прямоугольный треугольник
public:
	Right_Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B); // вызов конструктора треугольник
};