#pragma once

#include <algorithm>
#include <vector>
#include <iostream>

template <typename T>
typename T::const_iterator easyfind(const T& list, int ref)
{
	typename T::const_iterator it = std::find(list.begin(), list.end(), ref);
	return it;
}