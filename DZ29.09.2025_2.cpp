#include <iostream>
#include <Windows.h>

void swap(int& a, int& b) {

	a = a + b;
	b = a - b;
	a = a - b;
}

void main() {
	int a = 5, b = 8;

	std::cout << "a = " << a << ", b = " << b << std::endl;

	swap(a, b);

	std::cout << "a = " << a << ", b = " << b << std::endl;

}