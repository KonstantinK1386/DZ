#include <iostream>﻿
#include <fstream>
#include <Windows.h>
#include <cstdlib>

char** create_universe(int rows, int cols); // создание вселенной
void delete_universe(char** arr, int rows, int cols); // удаление вселенной
char** inicilization_universe(char** arr, std::ifstream& fil); // запалнение вселенной из файла
char** evalution_universe(char** univers, char** ances, int rows, int cols); // эвалюция вселенной
void print_universe(char** arr, int rows, int cols); // вывод на экран вселенной
int living_cells_universe(char** arr, int rows, int cols);// счётчик живых клеток
bool comparison_of_generations(char** univers, char** ances, int rows, int cols);// сравнение старой и новой вселенной
char** save_ancestor_universe(char** univers, char** ances, int rows, int cols);// предидущая поколение


int main() { // начало тела программы
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	int rows, cols, level = 0;
	std::ifstream fil("Data.txt");
	if (fil.is_open()) {
		fil >> rows;
		fil >> cols;
		char** univers = create_universe(rows, cols); 
		char** ances = create_universe(rows, cols);
		level++;
		univers = inicilization_universe(univers, fil);
		print_universe(univers, rows, cols);
		std::cout << "Поколение : " << level << " Колличество живых клеток : " << living_cells_universe(univers, rows, cols) << '\n';
		Sleep(3000); // так успеваешь смотреть что происходит в консоле

		while ((living_cells_universe(univers, rows, cols) != 0) && comparison_of_generations(univers, ances, rows, cols)) {
			ances = save_ancestor_universe(univers, ances, rows, cols); //предидущее поколение
			univers = evalution_universe(univers, ances, rows, cols); // новое поколение - эволюция
			system("cls"); // очистка экрана
			print_universe(univers, rows, cols);
			level++; // увелечение счётчика поколения
			std::cout << "Поколение : " << level << " Колличество живых клеток : " << living_cells_universe(univers, rows, cols) << '\n';
			Sleep(3000);  // так успеваешь смотреть что происходит в консоле
		}
		if (living_cells_universe(univers, rows, cols) == 0) {
			std::cout << "Игра закончена. Вселенная умерла." << '\n';
		}
		else {
			std::cout << "Игра закончена. Вселенная стабильна." << '\n' ;
		};
		delete_universe(univers, rows, cols);
		delete_universe(ances, rows, cols);
		fil.close();
	}
	else {
		std::cout << "Файла не существует! \n";
	}

	return 0; // конец основного тела программы
}

char** create_universe(int rows, int cols) { // создание пустой вселенной
	char** arr = new char* [rows];
	for (int i = 0; i < rows; i++) {
		arr[i] = new char[cols];
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = '-';
		}
	}
	return arr;
}

void delete_universe(char** arr, int rows, int cols) { // удаление вселенной
	for (int i = 0; i < rows; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}

char** inicilization_universe(char** arr, std::ifstream& fil) {	// инициализация вселенной из файла
	int i, j;
	while (fil >> i) {
		fil >> j;
		arr[i][j] = '*';		
	}
	return arr;
}

void print_universe(char** arr, int rows, int cols) { // вывод на консоль вселенной
	std::cout << "Поле жизни : \n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			std::cout << arr[i][j] << ' ';
		}
		std::cout << '\n';
	}
}

char** evalution_universe(char** univers, char** ances, int rows, int cols) { // переход к новому поколению
	int count;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			count = 0;
			if ((i > 0) && (i < (rows - 1)) && (j > 0) && (j < (cols - 1))) { // если клетка не на краю
				if (ances[i - 1][j - 1] == '*') { count++; };
				if (ances[i - 1][j] == '*') { count++; };
				if (ances[i - 1][j + 1] == '*') { count++; };
				if (ances[i][j - 1] == '*') { count++; };
				if (ances[i][j + 1] == '*') { count++; };
				if (ances[i + 1][j - 1] == '*') { count++; };
				if (ances[i + 1][j] == '*') { count++; };
				if (ances[i + 1][j + 1] == '*') { count++; };
			}
			else { // если клетка на краю
				if ((i == 0) && (j == 0)) { // клетка в верхем левом углу
					if (ances[i + 1][j] == '*') { count++; };
					if (ances[i + 1][j + 1] == '*') { count++; };
					if (ances[i][j + 1] == '*') { count++; };
				}
				else {
					if ((i == 0) && (j == (cols - 1))) { // клетка в верхнем правом углу
						if (ances[i + 1][j] == '*') { count++; };
						if (ances[i + 1][j + 1] == '*') { count++; };
						if (ances[i][j - 1] == '*') { count++; };
					}
					else {
						if ((i == (rows - 1)) && (j == 0)) { // клетка в нижнем левом углу
							if (ances[i][j + 1] == '*') { count++; };
							if (ances[i - 1][j] == '*') { count++; };
							if (ances[i - 1][j + 1] == '*') { count++; };
						}
						else {
							if ((i == (rows - 1)) && (j == (cols - 1))) { // клетка в нижнем правом углу
								if (ances[i - 1][j - 1] == '*') { count++; };
								if (ances[i - 1][j] == '*') { count++; };
								if (ances[i][j - 1] == '*') { count++; };
							}
							else {
								if (i == 0) { // верхняя строка
									if (ances[i + 1][j] == '*') { count++; };
									if (ances[i][j - 1] == '*') { count++; };
									if (ances[i][j + 1] == '*') { count++; };
									if (ances[i + 1][j - 1] == '*') { count++; };
									if (ances[i + 1][j + 1] == '*') { count++; };
								};
								if (i == (rows - 1)) { // нижняя строка
									if (ances[i - 1][j] == '*') { count++; };
									if (ances[i - 1][j - 1] == '*') { count++; };
									if (ances[i - 1][j + 1] == '*') { count++; };
									if (ances[i][j - 1] == '*') { count++; };
									if (ances[i][j + 1] == '*') { count++; };
								};
								if (j == 0) { // первый столбец
									if (ances[i][j + 1] == '*') { count++; };
									if (ances[i - 1][j] == '*') { count++; };
									if (ances[i - 1][j + 1] == '*') { count++; };
									if (ances[i + 1][j] == '*') { count++; };
									if (ances[i + 1][j + 1] == '*') { count++; };
								};
								if (j == (cols - 1)) { // последний столбец
									if (ances[i][j - 1] == '*') { count++; };
									if (ances[i - 1][j] == '*') { count++; };
									if (ances[i - 1][j - 1] == '*') { count++; };
									if (ances[i + 1][j] == '*') { count++; };
									if (ances[i + 1][j - 1] == '*') { count++; };
								};
							};
						};
					};
				};				
			};
			if ((ances[i][j] == '-') && (count == 3)) { 
				univers[i][j] = '*';
			}
			else {
				if ((ances[i][j] == '*') && ((count > 3) || (count < 2)) ) {
				univers[i][j] = '-'; }
			};
		}
	}
	return univers;
}

int living_cells_universe(char** arr, int rows, int cols) { // счётчик живых клеток
	int liv = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (arr[i][j] == '*') {
				liv++;
			}
		}
	}
	return liv;
}

bool comparison_of_generations(char** univers, char** ances, int rows, int cols) { // сравнения нынешнего и предидущего поколения
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (univers[i][j] != ances[i][j]) {
				return true;
			}
		}
	}
	return false;
}

char** save_ancestor_universe(char** univers, char** ances, int rows, int cols) { // сохранение предидущего поколения
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			ances[i][j] = univers[i][j];
		}
	}
	return ances;
}