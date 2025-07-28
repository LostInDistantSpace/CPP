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

void	WrongCat::makeSound() const
{
	std::cout << "Wouf" << std::endl;
}