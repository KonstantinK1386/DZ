#pragma once

class Counter {
private: int count;
public:
	Counter();
	Counter(int count);
	void print_count();
	void increase_the_counter();
	void lower_the_counter();
};