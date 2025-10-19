#include <iostream>
#include <Windows.h>

int** create_two_dim_array(int rows, int cols); // принимает на вход количество строк и столбцов. 
//Создаёт целочисленный двумерный динамический массив заданной размерности и возвращает указатель на него

void fill_tow_dim_array(int** arr, int rows, int cols); // принимает на вход указатель на двумерный целочисленный массив, 
//количество строк и столбцов в нём. Заполняет полученный массив значениями из таблицы умножения. 
// Таблица не ограничена 10 строками или 10 столбцами. Не возвращает ничего.

void print_two_dim_array(int** arr, int rows, int cols); // принимает на вход указатель на двумерный целочисленный массив, 
//количество строк и столбцов в нём. Выводит полученный массив на консоль. Не возвращает ничего.

void delete_two_dim_array(int** arr, int rows, int cols); //принимает на вход указатель на двумерный целочисленный массив, 
//количество строк и столбцов в нём. Очищает полученный массив. Не возвращает ничего.


void main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");
	int rows, cols;
	std::cout << "Введите количество строк : ";
	std::cin >> rows;
	std::cout << "Введите количество столбцов : ";
	std::cin >> cols;
	fill_tow_dim_array(create_two_dim_array(rows, cols), rows, cols);
	
}

int** create_two_dim_array(int rows, int cols) {
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}
	return arr;
}

void fill_tow_dim_array(int** arr, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = (i + 1) * (j + 1);
		}
	}
	print_two_dim_array(arr, rows, cols);
	delete_two_dim_array(arr, rows, cols);

}

void print_two_dim_array(int** arr, int rows, int cols) {
	std::cout << "Таблица умнажения : \n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			std::cout << arr[i][j] << '\t';
		}
		std::cout << '\n';
	}
}

void delete_two_dim_array(int** arr, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}