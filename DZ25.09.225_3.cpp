#include <iostream>
#include <Windows.h>

void numb_fibonachchi(unsigned int num, unsigned long long int a, unsigned long long int b) { // ������ ������� ������������ ����� ���������
	unsigned long long int temp; // ������ unsigned long int - ������ ����� ������� ����� ����� ��������� ������� 80 ����� ���������

	temp = a;
	a = b;
	b = b + temp;
	std::cout << b;
	num = num - 1;
	if (num > 0) {
		std::cout << ", ";
		numb_fibonachchi(num, a, b); // ����� ������� �� ������� (��������)
	}

}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	unsigned int num;
	std::cout << "������� ����� : ";
	std::cin >> num; // ���� ����������� ��������� ����� ���������
	if (num > 0) { // �������� ����� �������������� �����
		if (num > 2) { // ���� ����� �� ������ 2
			std::cout << "����� �������� : 0, 1, ";
			numb_fibonachchi(num - 2, 0, 1); // ����� ������� ������ ����� ���������
			std::cout << '\n';
		}
		else {
			switch (num) { // ���� ����� ����� 1 ��� 2
			case 1: std::cout << "����� �������� : 0 \n ";
				break;
			case 2: std::cout << "����� �������� : 0, 1 \n ";
				break;
			}
		};
	}
	else std::cout << "�� �� ����� ����������� ����� ��� ��� ����� 0 \n";
	
	return 0;
}