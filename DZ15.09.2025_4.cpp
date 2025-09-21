#include <iostream>
#include <string>
#include <Windows.h>

std::string int_in_string(int num) {
	std::string str;
	if (num < 0) str = "минус ";
	else str = " ";
	if (abs(num) < 20) {
		switch (abs(num)) {
		case 19:
			str = str + "девятнадцать ";
			break;
		case 18:
			str = str + "восемнадцать ";
			break;
		case 17:
			str = str + "семнадцать ";
			break;
		case 16:
			str = str + "шестнадцать ";
			break;
		case 15:
			str = str + "пятнадцать ";
			break;
		case 14:
			str = str + "четырнадцать ";
			break;
		case 13:
			str = str + "тринадцать ";
			break;
		case 12:
			str = str + "двенадцать ";
			break;
		case 11:
			str = str + "одинадцать ";
			break;
		case 10:
			str = str + "десять ";
			break;
		case 0:
			str = str + "ноль ";
			break;
		};
	}
	else
		switch (abs(num / 10)) {
		case 9:
			str = str + "девяносто ";
			break;
		case 8:
			str = str + "восемьдесят ";
			break;
		case 7:
			str = str + "семдесят ";
			break;
		case 6:
			str = str + "шестдесят ";
			break;
		case 5:
			str = str + "пятьдесят ";
			break;
		case 4:
			str = str + "сорок ";
			break;
		case 3:
			str = str + "тридцать ";
			break;
		case 2:
			str = str + "двадцать ";
			break;

		};
	if ((abs(num) > 20) || (abs(num) < 10)) {
		switch (abs(num % 10)) {
		case 9:
			str = str + "девять ";
			break;
		case 8:
			str = str + "восемь ";
			break;
		case 7:
			str = str + "семь ";
			break;
		case 6:
			str = str + "шесть ";
			break;
		case 5:
			str = str + "пять ";
			break;
		case 4:
			str = str + "четыре ";
			break;
		case 3:
			str = str + "три ";
			break;
		case 2:
			str = str + "два ";
			break;
		case 1:
			str = str + "один ";
			break;
		};
	};
	return str;
}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");
	int a, b;

	std::cout << "Введите целое число : ";
	std::cin >> a;
	std::cout << "Введите целое число : ";
	std::cin >> b;

	if ((a < 100) && (a > -100) && (b < 100) && (b > -100)) {
		if (a > b) { std::cout << int_in_string(a) << " больше чем " << int_in_string(b) << "\n"; }
		else if (a < b){ std::cout << int_in_string(a) << " меньше чем " << int_in_string(b) << "\n"; }
			else std::cout << int_in_string(a) << " равно " << int_in_string(b) << "\n";
	}
	else std::cout << "Ошибка! Одно из чисел вне диапазона! \n";

	return 0;
}