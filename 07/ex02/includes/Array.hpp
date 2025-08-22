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
		len = n;
		if (n == 0)
			array = NULL;
		else
			array = new T[n];
	}

	Array(const Array& other)
	{
		array = NULL;
		*this = other;
	}

	~Array()
	{
		if (array)
			delete[] array;
	}

	Array& operator=(const Array& other)
	{
		if (this != &other)
		{
			if (array)
				delete[] array;
			len = other.size();
			if (other.array)
			{
				array = new T[other.size()];
				for (size_t i = 0; i < other.size(); i++)
					array[i] = other.array[i];
			}
			else
				array = NULL;
		}
		return *this;
	}

	T& operator[](unsigned int index)
	{
		if (index >= len)
			throw std::out_of_range("Index out of array bounds\n") ;
		return array[index];
	}

	unsigned int	size() const
	{
		return len;
	}
};

#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
#define ORANGE "\033[38;5;208m"
#define VIOLET "\033[38;5;129m"
#define PINK   "\033[38;5;200m"
#define HOTPINK "\033[38;2;255;105;180m"
#define SKYBLUE "\033[38;2;135;206;235m"
#define LIME    "\033[38;2;50;205;50m"

#define BOLD     "\033[1m"
#define RESET   "\033[0m"