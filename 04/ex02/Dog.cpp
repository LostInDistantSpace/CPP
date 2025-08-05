#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor" << std::endl;
	_brain = new(std::nothrow) Brain();
	_type = "Dog";
}

Dog::Dog(const Dog& ref)
{
	std::cout << "Dog copy constructor called" << std::endl;
	_brain = new(std::nothrow) Brain(*ref._brain);
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog default destructor" << std::endl;
}

Dog&	Dog::operator=(const Dog& ref)
{
	if (this != &ref) 
	{
		_type = ref.getType();
		_brain = new(std::nothrow) Brain(*ref._brain);
		if (_brain == NULL)
			std::cout << "Brain could not be created" << std::endl;
	}
	return *this;
}

void	Dog::makeSound() const 
{
	std::cout << "Wouf" << std::endl;
}

void	Dog::addIdea(std::string idea)
{
	_brain->newIdea(idea);
}

std::string	Dog::getIdea(int index)
{
	return _brain->getIdea(index);
}