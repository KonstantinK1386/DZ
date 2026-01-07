#include <iostream>
#include <string>
#include "MyFigures.h"
#include "MyExeptions.h"

	Figures::Figures() {
		NumbersSides = 0;
		if (NumbersSides != 0) { throw IrregularFigures("Ошибка создания фигуры! Причина: количество сторон больше 0."); }
		else { Name = "Фигура"; };
	}
	void Figures::get_print() {
		std::cout << Name << ": \n";
		std::cout << "Колличество сторон: " << NumbersSides << '\n';
	}