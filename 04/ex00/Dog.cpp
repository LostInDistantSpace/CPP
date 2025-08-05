#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor" << std::endl;
	_type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog default destructor" << std::endl;
}

Dog::Dog(const Dog &copy) 
{
	_type = copy._type;
	std::cout << "Dog copy constructor" << std::endl;
}

Dog	&Dog::operator=(const Dog &src)
{
	std::cout << "Dog copy assignment operator" << std::endl;
	_type = src._type;
	return (*this);
}

void	Dog::makeSound() const 
{
	std::cout << "Wouf" << std::endl;
}