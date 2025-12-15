#pragma once

#include <iostream>
#include "MyFigures.h"

class Triangle : public Figures {// Треугольник
protected:
	int Side_a;
	int Side_b;
	int Side_c;
	int Angle_A;
	int Angle_B;
	int Angle_C;
public:
	Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C);// Конструктор треугольника
	void get_print() override;
	bool get_chek() override;
};