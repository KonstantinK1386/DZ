#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>
#include <vector>

class Adress {
private: 
	std::string City;
	std::string Street;
	int House;
	int Apartments;
public:
	Adress(std::string city, std::string street, int house, int apartments) {
		City = city;
		Street = street;
		House = house;
		Apartments = apartments;
	}
	std::string get_output_adress() {
		std::string rows_adress = City + ", " + Street + ", " + std::to_string(House) + ", " + std::to_string(Apartments) + '\n';
		return rows_adress;
	}
};

int main () {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	std::string city;
	std::string street;
	int house;
	int apartments;
	int qantity;

	std::ifstream fil("in.txt");
	if (fil.is_open()) {
		fil >> qantity;
		std::vector<Adress> adress;
		for (int i = 0; i < qantity; i++) {
			fil >> city;
			fil >> street;
			fil >> house;
			fil >> apartments;
			adress.push_back(Adress(city, street, house, apartments));
		};
		fil.close();
		std::ofstream fil("out.txt");
		fil << qantity<<'\n';
		for (int i = (qantity-1); i >= 0; i--) {
			fil << adress[i].get_output_adress();
		};
		fil.close();
	}
	else std::cout << "Ошибка! Файл не открыт! \n";

	return 0;
}