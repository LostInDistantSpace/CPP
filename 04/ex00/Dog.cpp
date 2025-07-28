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

void	Dog::makeSound() const 
{
	std::cout << "Wouf" << std::endl;
}