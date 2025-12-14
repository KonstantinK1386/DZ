#pragma once
#include "MyTriangle.h"

class Isosceles_Triangle : public Triangle {// равнобедренный треугольник
public:
	Isosceles_Triangle(int side_a, int side_b, int angle_A, int angle_B);// вызов конструктора треугольник
};
