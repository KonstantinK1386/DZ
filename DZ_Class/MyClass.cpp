#include <iostream>
#include "MyClass.h"

	Counter::Counter() { count = 1; };
	Counter::Counter(int count) {
		this->count = count;
	};
	void Counter::print_count() {
		std::cout << count << '\n';
	};
	void Counter::increase_the_counter() { count++; };
	void Counter::lower_the_counter() { count--; };