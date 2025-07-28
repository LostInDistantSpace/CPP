#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "A fluffy dog appeared" << std::endl;
	_type = "Dog";
}

Dog::~Dog()
{
	std::cout << "A dog ran out" << std::endl;
}

Dog::Dog(const Dog &copy) 
{
	_type = copy._type;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &src)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	_type = src._type;
	return (*this);
}

void	Dog::makeSound() const 
{
	std::cout << "Wouf" << std::endl;
}