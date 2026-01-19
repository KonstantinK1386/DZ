#pragma once
#include "MyTriangle.h"

class Equilateral_Triangle : public Triangle {// равносторонний треугольник
public:
	Equilateral_Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C);// вызов конструктора равностороннего треугольника
};