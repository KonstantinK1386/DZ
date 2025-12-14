#include <iostream>
#include <string>
#include "MyFigures.h"

	Figures::Figures() {
		NumbersSides = 0;
		Name = "Фигура";
	}
	void Figures::get_print() {
		std::cout << Name << ": \n";
		if (get_chek()) { std::cout << "Правильная \n"; }
		else std::cout << "Неправильная \n";
		std::cout << "Колличество сторон: " << NumbersSides << '\n';
	}
	bool Figures::get_chek() {
		if (NumbersSides == 0) {
			return true;
		}
		else return false;
	}