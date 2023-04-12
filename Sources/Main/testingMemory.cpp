#include "VectorInt.hpp"
#include <iostream>

namespace
{
    const int SIZE = 12;
}

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(0));
    int input = 0;

    std::cout << "На 20 секунд будуть виведені цілі числа, які вам потрібно запам'тати та відтворити\n";
    std::cout << "якщо готові, натисніть ENTER\n";
    std::cin.get();

    VectorInt testingMemory(SIZE);
    testingMemory.consoleOutput();
    std::cout << "Згадайте та введіть числа з клавіатури, \n";
    
    VectorInt rememberNumbers;
    rememberNumbers.setNewValues();
    std::cout<< "Кількість правильно згаданих чисел = " << rememberNumbers.compareNumbers(testingMemory);
    
    return 0;
}
