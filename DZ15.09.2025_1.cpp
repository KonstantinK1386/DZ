#include <iostream>

int main() {
	setlocale(LC_ALL, "RU");

	bool t = true, f = false;
	std::cout.setf(std::cout.boolalpha);

	std::cout << "Оператор: || \n";
	std::cout << t << '\t' << t << '\t' << (t || t) << '\n';
	std::cout << f << '\t' << t << '\t' << (f || t) << '\n';
	std::cout << t << '\t' << f << '\t' << (t || f) << '\n';
	std::cout << f << '\t' << f << '\t' << (f || f) << '\n';
	std::cout << std::endl;

	std::cout << "Оператор: && \n";
	std::cout << t << '\t' << t << '\t' << (t && t) << '\n';
	std::cout << f << '\t' << t << '\t' << (f && t) << '\n';
	std::cout << t << '\t' << f << '\t' << (t && f) << '\n';
	std::cout << f << '\t' << f << '\t' << (f && f) << '\n';
	std::cout << std::endl;

	return 0;
}