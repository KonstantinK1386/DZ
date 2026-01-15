#pragma once
#include "MyTriangle.h"

class Isosceles_Triangle : public Triangle {// равнобедренный треугольник
public:
	Isosceles_Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C);// вызов конструктора треугольник
};
