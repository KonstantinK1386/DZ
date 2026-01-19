#pragma once
#include "MyParallelogramm.h"

class MyRectangle : public Parallelogramm {//прямоугольник
public:
	MyRectangle(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D); //вызов конструктора пароллелограмм
};