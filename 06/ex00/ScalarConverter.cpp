#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(/* args */) {}

ScalarConverter::ScalarConverter(const ScalarConverter&) {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter&)
{
	return *this;
}

static bool isChar(const std::string &str) 
{
	return str.length() == 1 && !isdigit(str[0]) && isprint(str[0]);
}

static bool isInt(const std::string& s)
{
	if (s.empty() || ((!std::isdigit(s[0])) && (s[0] != '-') && (s[0] != '+')))
		return false;

	char * p;
	long l;
	l = std::strtol(s.c_str(), &p, 10);

	return (*p == 0 && l <= INT_MAX && l >= INT_MIN);
}

static bool isFloat(const std::string &str) 
{
	if (str == "nanf" || str == "+inff" || str == "-inff")
		return true;
	char *p;
	std::strtof(str.c_str(), &p);
	return *p == 'f' && *(p + 1) == '\0' && *(p - 1) != '.';
}

static bool isDouble(const std::string &str) 
{
	if (str == "nan" || str == "+inf" || str == "-inf")
		return true;
		
	char *p;
	std::strtod(str.c_str(), &p);
	return *p == '\0' && *(p - 1) != '.';
}

static void printChar(const double &value)
{
    std::cout << "char: ";
	if (std::isnan(value) || value < 0 || value > 127)
		std::cout << "impossible" << std::endl;
	else if (!std::isprint(static_cast<char>(value)))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(value) << "'" << std::endl;
}

static void printInt(const double &value)
{
	std::cout << "int: ";
	if (std::isnan(value) || value < INT_MIN || value > INT_MAX)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(value) << std::endl;
}

static void printFloat(const double &value)
{
	std::cout << "float: ";
	std::cout << std::fixed << std::setprecision(1);
	std::cout << static_cast<float>(value) << "f" << std::endl; 
}

static void printDouble(const double &value)
{
	std::cout << "double: ";
	std::cout << static_cast<double>(value) << std::endl;
}

void	ScalarConverter::convert(std::string literal) 
{
	double value;
	if (isChar(literal))
		value = static_cast<double>(literal[0]);
	else if (isInt(literal))
		value = static_cast<int>(std::atoi(literal.c_str()));
	else if (isFloat(literal))
		value = static_cast<float>(std::strtof(literal.c_str(), NULL));
	else if (isDouble(literal))
		value = std::strtod(literal.c_str(), NULL);
	else 
	{
		std::cout << "char: impossible\n"
		"int: impossible\n"
		"float: impossible\n"
		"double: impossible" << std::endl;
		return ;
	}

	printChar(value);
	printInt(value);
	printFloat(value);
	printDouble(value);
}