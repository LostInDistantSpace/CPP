#pragma once

#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <climits>
#include <cmath>

class ScalarConverter
{
private:
	ScalarConverter(/* args */);
	ScalarConverter(const ScalarConverter&);
	~ScalarConverter();
	ScalarConverter& operator=(const ScalarConverter&);
	/* data */
public:

	static void convert(std::string);
};
