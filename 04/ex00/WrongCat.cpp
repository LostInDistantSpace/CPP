#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "A weird fluffy cat appeared" << std::endl;
	_type = ("WrongCat");
}

WrongCat::~WrongCat()
{
	std::cout << "A weird cat melted to goop on the ground" << std::endl;
}


WrongCat::WrongCat(const WrongCat &copy)
{
	_type = copy._type;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &src)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	_type = src._type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}