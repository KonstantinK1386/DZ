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

	std::cout << "Введите свой пол в виде символа 'ж' или 'м' ";
	std::cin >> pol;
	std::cout << "Введите свой знак зодиака : ";
	std::getline(std::cin >> std::ws, zodiac_sign);
	std::cout << "Введите свой возрост : ";
	std::cin >> age;	

	switch (pol) {
	case 'м':
	case 'М':
		if (age < 40) {
			if ((zodiac_sign == "рак") || (zodiac_sign == "РАК") || (zodiac_sign == "Рак") ||
				(zodiac_sign == "скорпион") || (zodiac_sign == "Скорпион") || (zodiac_sign == "СКОРПИОН") ||
				(zodiac_sign == "рыбы") || (zodiac_sign == "РЫБЫ") || (zodiac_sign == "Рыбы")) {
				std::cout << "Сегодя очень плодотворный день. Можно добиться того что прежде казалось почти невозможным. \n";
			}
			else std::cout << "Гороскоп для вас находится в разработке. Приходите чуточку по позже. \n";
		}
		else std::cout << "Гороскоп для вас находится в разработке. Приходите чуточку по позже. \n";

		break;
	case 'ж':
	case 'Ж':
		if ((age <= 30) && (age >= 15)) {
			if ((zodiac_sign == "телец") || (zodiac_sign == "ТЕЛЕЦ") || (zodiac_sign == "Телец") ||
				(zodiac_sign == "дева") || (zodiac_sign == "ДЕВА") || (zodiac_sign == "Дева") ||
				(zodiac_sign == "козерог") || (zodiac_sign == "КОЗЕРОГ") || (zodiac_sign == "Козерог")) {
				std::cout << "Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок. Будет не только весело, но и интересно : найдётся дело, которое увлечёт всех. \n";
			}
			else std::cout << "Гороскоп для вас находится в разработке. Приходите чуточку по позже. \n";
		}
		else std::cout << "Гороскоп для вас находится в разработке. Приходите чуточку по позже. \n";

		break;
	default:
		std::cout << "Введен не известный пол \n";
		break;

	}


	return 0;
}