#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WeirdCat default constructor" << std::endl;
	_type = ("WrongCat");
}

WrongCat::~WrongCat()
{
	std::cout << "WeirdCat destructor" << std::endl;
}


WrongCat::WrongCat(const WrongCat &copy)
{
	_type = copy._type;
	std::cout << "WrongCat copy constructor" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &src)
{
	std::cout << "WrongCat copy assignment operator" << std::endl;
	_type = src._type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Mreow" << std::endl;
}