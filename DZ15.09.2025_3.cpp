#include <iostream>
#include <string>
#include <Windows.h>

int main() {
	setlocale(LC_ALL, "RU");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	unsigned int age;
	char pol;
	std::string zodiac_sign;

	std::cout << "������� ���� ��� � ���� ������� '�' ��� '�' ";
	std::cin >> pol;
	std::cout << "������� ���� ���� ������� : ";
	std::getline(std::cin >> std::ws, zodiac_sign);
	std::cout << "������� ���� ������� : ";
	std::cin >> age;	

	switch (pol) {
	case '�':
	case '�':
		if (age < 40) {
			if ((zodiac_sign == "���") || (zodiac_sign == "���") || (zodiac_sign == "���") ||
				(zodiac_sign == "��������") || (zodiac_sign == "��������") || (zodiac_sign == "��������") ||
				(zodiac_sign == "����") || (zodiac_sign == "����") || (zodiac_sign == "����")) {
				std::cout << "������ ����� ������������ ����. ����� �������� ���� ��� ������ �������� ����� �����������. \n";
			}
			else std::cout << "�������� ��� ��� ��������� � ����������. ��������� ������� �� �����. \n";
		}
		else std::cout << "�������� ��� ��� ��������� � ����������. ��������� ������� �� �����. \n";

		break;
	case '�':
	case '�':
		if ((age <= 30) && (age >= 15)) {
			if ((zodiac_sign == "�����") || (zodiac_sign == "�����") || (zodiac_sign == "�����") ||
				(zodiac_sign == "����") || (zodiac_sign == "����") || (zodiac_sign == "����") ||
				(zodiac_sign == "�������") || (zodiac_sign == "�������") || (zodiac_sign == "�������")) {
				std::cout << "����������� ����� �������� ��� ������� � ��������, ���������� �������� ���������� � ����������������� ���������. ����� �� ������ ������, �� � ��������� : ������� ����, ������� ������� ����. \n";
			}
			else std::cout << "�������� ��� ��� ��������� � ����������. ��������� ������� �� �����. \n";
		}
		else std::cout << "�������� ��� ��� ��������� � ����������. ��������� ������� �� �����. \n";

		break;
	default:
		std::cout << "������ �� ��������� ��� \n";
		break;

	}


	return 0;
}