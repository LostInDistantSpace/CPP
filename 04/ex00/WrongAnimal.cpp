#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
	std::cout << "A weird animal came from your nightmares" << std::endl;
}

WrongAnimal::~WrongAnimal() { 
	std::cout << "A weird animal disappeared" << std::endl; 
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) : _type(copy._type) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &src)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	_type = src._type;
	return (*this);
}

std::string	WrongAnimal::getType() const { return (_type); }

void	WrongAnimal::makeSound() const {
	std::cout << "A weird animal screeches" << std::endl;
}