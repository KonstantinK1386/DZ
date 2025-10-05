#include <iostream>
#include <Windows.h>

void counting_function() {
    static int counter = 0;
    counter++;
    std::cout << "Количество вызовов функции counting_function(): " << counter << '\n';
}
    
void main(){
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "RU");

    for (int i = 0; i < 15; i++)
    {
        counting_function();
    }
}