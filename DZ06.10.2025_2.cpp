#include <iostream>
#include <Windows.h>

void swap(int* a, int* b) {

	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void main() {
	int a = 5, b = 8;
	int* p_a = &a;
	int* p_b = &b;

	std::cout << "a = " << *p_a << ", b = " << *p_b << std::endl;

	swap(p_a, p_b);

	std::cout << "a = " << *p_a << ", b = " << *p_b << std::endl;

}