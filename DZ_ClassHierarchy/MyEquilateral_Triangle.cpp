#include "MyEquilateral_Triangle.h"

Equilateral_Triangle::Equilateral_Triangle(int side_a) : Triangle(side_a, side_a, side_a, 60, 60, 60) {// вызов конструктора равностороннего треугольника
		Name = "Равносторонний треугольник";
	}