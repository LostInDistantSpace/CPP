#pragma once

#include <iomanip>
#include <iostream>

template <typename T, typename U>
void iter(T* address, size_t len, U f)
{
	for (size_t i = 0; i < len; i++)
		f(address[i]);
}