// My_first_cmake_prodject.cpp: определяет точку входа для приложения.
//

#include <iostream>
#include <Windows.h>


int main(){
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	std::string Name;
	std::cout << "Введите пожалуйста своё имя: ";
	std::cin >> Name;
	std::cout << "Здравствуйте, " << Name <<'\n';
	system("pause");


	return 0;
}
