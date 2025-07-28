#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "A cat has arrived for headpats" << std::endl;
	_type = ("Cat");
}

Cat::~Cat()
{
	std::cout << "A cat left gracefully" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Mreow" << std::endl;
}