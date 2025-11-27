#include <iostream>
#include <string>
#include <Windows.h>
 
struct adress { // структура адреса
	std::string City;
	std::string Street;
	int House;
	int Apartment;
	int index;
};

void print_adrss(adress adr) { // функция вывода структуры
	std::cout << "Город : "<< adr.City << '\n';
	std::cout << "Улица : "<< adr.Street << '\n';
	std::cout << "Номер дома : " << adr.House << '\n';
	std::cout << "Номер квартиры : " << adr.Apartment << '\n';
	std::cout << "Индекс : " << adr.index << '\n';
	std::cout << '\n';
}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	adress adres1 = {"Москва", "Арбат", 12, 8, 123456}; //создаём адрес 1
	adress adres2 = {"Ижевск", "Пушкина", 59, 143, 953769}; //создаём адрес 2
	adress adres3 = {"Казань", "Юлиуса Фучик", 36, 16, 420139 }; //создаём адрес 3
	print_adrss(adres1); //выводим адрес 1
	print_adrss(adres2); //выводим адрес 2
	print_adrss(adres3); //выводим адрес 3
}