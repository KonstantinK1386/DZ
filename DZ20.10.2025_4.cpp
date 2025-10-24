#include <iostream>
#include <fstream>
#include <Windows.h>

int** create_two_dim_array(int rows, int cols);
void delete_two_dim_array(int** arr, int rows, int cols);
void fill_tow_dim_array(int** arr, int rows, int cols, std::ifstream &fil);
void print_two_dim_array(int** arr, int rows, int cols);

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	int rows, cols;
	std::ifstream fil("in.txt");
	if (fil.is_open()) {
		fil >> rows;
		fil >> cols;
		int** arr =create_two_dim_array(rows, cols);
		fill_tow_dim_array(arr, rows, cols, fil);		
		print_two_dim_array(arr, rows, cols);
		delete_two_dim_array(arr, rows, cols);
		fil.close();
	}
	else {
		std::cout << "Файла не существует! \n";
	}
	
	return 0;
}

int** create_two_dim_array(int rows, int cols) {
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}
	return arr;
}

void delete_two_dim_array(int** arr, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}

void fill_tow_dim_array(int** arr, int rows, int cols, std::ifstream &fil) {
	for (int i = 0; i < rows; i++) {
		for (int j = cols; j > 0; j--) {
			fil >> arr[i][j-1];
		}
	}

}

void print_two_dim_array(int** arr, int rows, int cols) {
	std::cout << "Массив из файла : \n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			std::cout << arr[i][j] << '\t';
		}
		std::cout << '\n';
	}
}
