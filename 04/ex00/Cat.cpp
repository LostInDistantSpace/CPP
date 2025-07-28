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

Cat::Cat(const Cat &copy)
{
	_type = copy._type;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &src)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	_type = src._type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Mreow" << std::endl;
}