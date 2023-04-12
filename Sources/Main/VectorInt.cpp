#include "VectorInt.hpp"

VectorInt::VectorInt()
	: m_size(12)
{
	m_numbers.resize(m_size);
}

VectorInt::VectorInt(int size)
	: m_size(size)
{
	for (int i = 0; i < m_size; ++i)
	{
		m_numbers.push_back(10 + rand() % 90);
	}
}

void VectorInt::consoleOutput()
{
	for (int i = 0; i < m_size; ++i)
	{		
		std::cout << m_numbers[i] << " ";
		if (i == m_size / 4 || i == 2 * m_size / 4 + 1)
		{
			std::cout << std::endl;
		}
	}
	std::cout << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(20));
	for (int i = 0; i < 50; ++i)
	{
		std::cout << "\033[2J\033[1;1H";
	}
	
}

void VectorInt::setNewValues()
{
	for (int i = 0; i < m_size; ++i)
	{
		std::cin >> m_numbers[i];
	}
}

int VectorInt::compareNumbers(const VectorInt& right)
{
	int counter = 0;
	for (int i = 0; i < m_size; ++i)
	{
		for (int j = 0; j < m_size; ++j)
		{
			if (m_numbers[i] == right.m_numbers[j])
			{
				++counter;
			}
		}
	}
	return counter;
}