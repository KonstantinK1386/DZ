#include <iostream>
#include <Windows.h>
#include <string>

struct account { //структура с именем владельца, номером счёта, балансом счёта
	std::string name;
	int number_account;
	double account_balance;
};

void print_account(account blank) { // функция вывода в консоль данных счёта
	std::cout << blank.name << " ваш счёт № : " << blank.number_account << " с балансом : " << blank.account_balance << '\n';
}
account input_accaunt() { // функция создания счёта
	account blank;
	std::cout << "Введите имя : ";
	std::cin >> blank.name;
	std::cout << "Введите номер счёта : ";
	std::cin >> blank.number_account;
	std::cout << "Введите балан счёта : ";
	std::cin >> blank.account_balance;
	return blank;
}
void changes_balance_account(account& blank, double new_balance) { // функция изменения баланса счёта
	blank.account_balance = new_balance;
}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	double new_balance;

	account persons = input_accaunt(); //создание счёта
	print_account(persons);  //вывод счёта
	std::cout << "Ввведите новый баланс : ";
	std::cin >> new_balance;
	changes_balance_account(persons, new_balance); // изменение баланса счёта
	print_account(persons); // вывод данных счёта

	return 0;
}