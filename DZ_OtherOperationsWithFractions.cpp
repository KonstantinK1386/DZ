#include <iostream>
#include <Windows.h>﻿

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}
	int SetNumerator() { return numerator_; }
	int SetDenomirater() { return denominator_; }
	Fraction& NOD() {
		int temp;
		if (numerator_ < denominator_) { temp = numerator_; }
		else { temp = denominator_; };
		while (temp > 1) {
			if ((numerator_ % temp == 0) && (denominator_ % temp == 0)) {
				numerator_ = numerator_ / temp;
				denominator_ = denominator_ / temp;
				break;
			}
			else {
				temp--;
			};
		}
		return *this;
	}
	Fraction operator+ (Fraction Input) { return Fraction((numerator_*Input.denominator_+Input.numerator_*denominator_),(denominator_*Input.denominator_)); }
	Fraction operator- (Fraction Input) { return Fraction((numerator_ * Input.denominator_ - Input.numerator_ * denominator_), (denominator_ * Input.denominator_)); }
	Fraction operator* (Fraction Input) { return Fraction((numerator_*Input.numerator_), (denominator_ * Input.denominator_)); }
	Fraction operator/ (Fraction Input) { return Fraction((numerator_ * Input.denominator_), (denominator_ * Input.numerator_)); }
	Fraction& operator++ () { numerator_ = numerator_ + denominator_; return *this; }
	Fraction operator++ (int) { Fraction temp(*this); ++(*this); return temp; }
	Fraction& operator-- () { numerator_ = numerator_ - denominator_; return *this; }
	Fraction operator-- (int) { Fraction temp(*this); --(*this); return temp; }
	
	friend std::ostream& operator<< (std::ostream& output, Fraction& Input) { return (output<<Input.numerator_ << "/" << Input.denominator_); }
	friend bool operator==(Fraction f1, Fraction f2) { return (f1.numerator_ * f2.denominator_) == (f2.numerator_ * f1.denominator_); }
	friend bool operator!=(Fraction f1, Fraction f2) { return !(f1 == f2); }
	friend bool operator<(Fraction f1, Fraction f2) { return (f1.numerator_ * f2.denominator_) < (f2.numerator_ * f1.denominator_); }
	friend bool operator>(Fraction f1, Fraction f2) { return !(f1 < f2); }
	friend bool operator<=(Fraction f1, Fraction f2) { return !(f1 >= f2); }
	friend bool operator>=(Fraction f1, Fraction f2) { return !(f1 < f2); }

};

int main(){
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	int numerator, denominator;
	std::cout << "Введите числитель дроби 1: ";
	std::cin >> numerator;
	std::cout << "Введите знаменатель дроби 1: ";
	std::cin >> denominator;
	Fraction f1(numerator, denominator);
	std::cout << "Введите числитель дроби 2: ";
	std::cin >> numerator;
	std::cout << "Введите знаменатель дроби 2: ";
	std::cin >> denominator;
	Fraction f2(numerator, denominator);
	Fraction Add = f1 + f2;
	Add.NOD();
	std::cout << f1 << " + " << f2 << " = " << Add << '\n';
	Fraction Sub = f1 - f2;
	Sub.NOD();
	std::cout << f1 << " - " << f2 << " = " << Sub << '\n';
	Fraction Mul = f1 * f2;
	Mul.NOD();
	std::cout << f1 << " * " << f2 << " = " << Mul << '\n';
	Fraction Div = f1 / f2;
	Div.NOD();
	std::cout << f1 << " / " << f2 << " = " << Div << '\n';
	Fraction Mul1 = ++f1 * f2;
	Mul1.NOD();
	std::cout << "++" << f1 << " * " << f2 << " = " << Mul1 << '\n';
	std::cout << "Значение доби 1: " << f1 << "\n";
	Fraction Mul2 = f1-- * f2;
	Mul2.NOD();
	std::cout << f1<<"--" << " * " << f2 << " = " << Mul2 << '\n';
	std::cout << "Значение доби 1: " << f1 << "\n";

	return 0;
}