#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WeirdCat default constructor" << std::endl;
	_type = ("WrongCat");
}

WrongCat::~WrongCat()
{
	std::cout << "WeirdCat default destructor" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Mreow" << std::endl;
}