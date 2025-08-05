#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor" << std::endl;
	_type = ("Cat");
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	_type = copy._type;
	std::cout << "Cat copy constructor" << std::endl;
}

Cat	&Cat::operator=(const Cat &src)
{
	std::cout << "Cat copy assignment operator" << std::endl;
	_type = src._type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Mreow" << std::endl;
}