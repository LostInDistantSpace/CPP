#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor" << std::endl;
	_brain = new(std::nothrow) Brain();
	_type = ("Cat");
}

Cat::Cat(const Cat& ref)
{
	std::cout << "Cat copy constructor called" << std::endl;
	_brain = new(std::nothrow) Brain(*ref._brain);
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat default destructor" << std::endl;
}

Cat&	Cat::operator=(const Cat& ref)
{
	std::cout << "Cat copy assignement operator called" << std::endl;
	if (this != &ref) 
	{
		_type = ref.getType();
		_brain = new(std::nothrow) Brain(*ref._brain);
		if (_brain == NULL)
			std::cout << "Brain could not be created" << std::endl;
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Mreow" << std::endl;
}

void	Cat::addIdea(std::string idea)
{
	_brain->newIdea(idea);
}

std::string	Cat::getIdea(int index)
{
	return _brain->getIdea(index);
}