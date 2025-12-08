#include <iostream>
#include <Windows.h>
#include <string>

class Figures {
protected:
	std::string Name;
	int NumbersSides;
public:
	Figures() {
		NumbersSides = 0;
		Name = "Фигура";
	}
	int get_NumbersSide() {
		return NumbersSides;
	}
	std::string get_Name() {
		return Name;
	}
};
class Triangle : public Figures {
public:
	Triangle() {
		NumbersSides = 3;
		Name = "Треугольник";
	}
};
class Qadrangle : public Figures {
public:
	Qadrangle() {
		NumbersSides = 4;
		Name = "Четырёхугольник";
	}
};

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	Figures figurs;
	Triangle triangle;
	Qadrangle qadrangle;
	std::cout << "Количество стророн : \n";
	std::cout << figurs.get_Name() << " : " << figurs.get_NumbersSide() << '\n';
	std::cout << triangle.get_Name() << " : " << triangle.get_NumbersSide() << '\n';
	std::cout << qadrangle.get_Name() << " : " << qadrangle.get_NumbersSide() << '\n';

	return 0;
}