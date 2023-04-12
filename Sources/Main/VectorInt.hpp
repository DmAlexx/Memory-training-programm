#pragma once
#include <iostream>
#include <vector>
#include <thread>

class VectorInt
{
public:
	VectorInt();
	VectorInt(int size);
	void consoleOutput();
	void setNewValues();
	int compareNumbers(const VectorInt& right);

private:
	int m_size = 0;
	std::vector<int> m_numbers;
};

