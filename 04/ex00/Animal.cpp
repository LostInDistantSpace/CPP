#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
	std::cout << "Animal default constuctor called" << std::endl;
}

Animal::Animal(Animal &copy) : _type(copy._type) {
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal() { 
	std::cout << "Animal default destructor" << std::endl; 
}

Animal	&Animal::operator=(const Animal &src)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	_type = src._type;
	return (*this);
}

std::string	Animal::getType() const { return (_type); }

void	Animal::makeSound() const {
	std::cout << "*animal sound*" << std::endl;
}