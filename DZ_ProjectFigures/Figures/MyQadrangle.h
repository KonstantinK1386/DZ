#pragma once

#include <iostream>
#include "MyFigures.h"

class Qadrangle : public Figures {// четырёх угольник
protected:
	int Side_a;
	int Side_b;
	int Side_c;
	int Side_d;
	int Angle_A;
	int Angle_B;
	int Angle_C;
	int Angle_D;
public:
	Qadrangle(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D);// четырёх угольник конструктор
	void get_print() override;
};