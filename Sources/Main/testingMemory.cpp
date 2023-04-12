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

    std::cout << "�� 20 ������ ������ ������� ��� �����, �� ��� ������� �����'���� �� ���������\n";
    std::cout << "���� �����, �������� ENTER\n";
    std::cin.get();

    VectorInt testingMemory(SIZE);
    testingMemory.consoleOutput();
    std::cout << "�������� �� ������ ����� � ���������, \n";
    
    VectorInt rememberNumbers;
    rememberNumbers.setNewValues();
    std::cout<< "ʳ������ ��������� �������� ����� = " << rememberNumbers.compareNumbers(testingMemory);
    
    return 0;
}
