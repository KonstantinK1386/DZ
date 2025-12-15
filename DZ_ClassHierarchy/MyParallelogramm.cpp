#include "MyParallelogramm.h"

Parallelogramm::Parallelogramm(int side_a, int side_b, int angle_A, int angle_B) : Qadrangle(side_a, side_b, side_a, side_b, angle_A, angle_B, angle_A, angle_B) { // вызов конструктора четырёхугольник
		Name = "Параллелограмм ";
	}