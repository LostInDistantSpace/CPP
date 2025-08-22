#pragma once

#include <iomanip>
#include <iostream>

template <typename T>
class Array {
private:
	T*		array;
	unsigned int	len;
public:
	Array() 
	{
		array = NULL;
		len = 0;
	}

	Array(unsigned int n)
	{
		array = new T[n];
		len = n;
	}

	Array(const Array& other)
	{
		*this = other;
	}

	Array& operator=(const Array& other)
	{
		if (array)
			delete[] array;
		array = new T[other.len];
		for (int i = 0; i < other.len; i++)
			array[i] = other.array[i];
	}

	T& operator[](unsigned int index)
	{
		if (index >= len)
			return ;
		return array[index];
	}

	unsigned int	size() const
	{
		return len;
	}
};