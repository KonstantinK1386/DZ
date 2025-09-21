#include <iostream>
#include <string>
#include <Windows.h>

std::string int_in_string(int num) {
	std::string str;
	if (num < 0) str = "����� ";
	else str = " ";
	if (abs(num) < 20) {
		switch (abs(num)) {
		case 19:
			str = str + "������������ ";
			break;
		case 18:
			str = str + "������������ ";
			break;
		case 17:
			str = str + "���������� ";
			break;
		case 16:
			str = str + "����������� ";
			break;
		case 15:
			str = str + "���������� ";
			break;
		case 14:
			str = str + "������������ ";
			break;
		case 13:
			str = str + "���������� ";
			break;
		case 12:
			str = str + "���������� ";
			break;
		case 11:
			str = str + "���������� ";
			break;
		case 10:
			str = str + "������ ";
			break;
		case 0:
			str = str + "���� ";
			break;
		};
	}
	else
		switch (abs(num / 10)) {
		case 9:
			str = str + "��������� ";
			break;
		case 8:
			str = str + "����������� ";
			break;
		case 7:
			str = str + "�������� ";
			break;
		case 6:
			str = str + "��������� ";
			break;
		case 5:
			str = str + "��������� ";
			break;
		case 4:
			str = str + "����� ";
			break;
		case 3:
			str = str + "�������� ";
			break;
		case 2:
			str = str + "�������� ";
			break;

		};
	if ((abs(num) > 20) || (abs(num) < 10)) {
		switch (abs(num % 10)) {
		case 9:
			str = str + "������ ";
			break;
		case 8:
			str = str + "������ ";
			break;
		case 7:
			str = str + "���� ";
			break;
		case 6:
			str = str + "����� ";
			break;
		case 5:
			str = str + "���� ";
			break;
		case 4:
			str = str + "������ ";
			break;
		case 3:
			str = str + "��� ";
			break;
		case 2:
			str = str + "��� ";
			break;
		case 1:
			str = str + "���� ";
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

	std::cout << "������� ����� ����� : ";
	std::cin >> a;
	std::cout << "������� ����� ����� : ";
	std::cin >> b;

	if ((a < 100) && (a > -100) && (b < 100) && (b > -100)) {
		if (a > b) { std::cout << int_in_string(a) << " ������ ��� " << int_in_string(b) << "\n"; }
		else if (a < b) { std::cout << int_in_string(a) << " ������ ��� " << int_in_string(b) << "\n"; }
		else std::cout << int_in_string(a) << " ����� " << int_in_string(b) << "\n";
	}
	else std::cout << "������! ���� �� ����� ��� ���������! \n";

	return 0;
}