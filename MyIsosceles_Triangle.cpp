#include "MyIsosceles_Triangle.h"

Isosceles_Triangle::Isosceles_Triangle(int side_a, int side_b, int angle_A, int angle_B) : Triangle(side_a, side_b, side_a, angle_A, angle_B, angle_A) {// вызов конструктора треугольник
		Name = "Равнобедренный треугольник ";
	}