#include <string>
#include <Windows.h>
#include <fstream>
#include <vector>
#include <iostream>

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
	std::string get_adress_city() {
		return City;
	}
};

int main() {
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
		for (int i = 0; i < qantity; i++) {
			for (int j = 0; j < qantity - 1; j++) {
				if (adress[j].get_adress_city() > adress[j + 1].get_adress_city()) {
					Adress temp = adress[j];
					adress[j] = adress[j + 1];
					adress[j + 1] = temp;
				};
			};
		};		
		std::ofstream fil("out.txt");
		fil << qantity << '\n';
		for (int i = 0; i <qantity; i++) {
			fil << adress[i].get_output_adress();			
		};
		fil.close();
	}
	else std::cout << "Ошибка! Файл не открыт! \n";

	return 0;
}