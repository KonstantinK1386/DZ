#include <iostream>
#include "MyFunction.h"

double Addition(double x, double y) {
	return x + y;
};
double Subtraction(double x, double y) {
	return x - y;
};
double Multiplication(double x, double y) {
	return x * y;
};
double Division(double x, double y) {
	return x / y;
};
double Power(double x, int y) {
	if (y > 0) {
		if (y == 1) {
			return x;
		}
		else {
			for (int i = 1; i < y; i++) {
				x = x * x;
			};
			return x;
		};
	};
	if (y == 0) { return 1; }
	else {
		std::cout << "ERROR!!! Function Power ERROR!!!\n";
		return 0;
	};
};