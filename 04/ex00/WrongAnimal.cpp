#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
	std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::~WrongAnimal() { 
	std::cout << "WrongAnimal destructor" << std::endl; 
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) : _type(copy._type) {
	std::cout << "WrongAnimal copy constructor" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &src)
{
	std::cout << "WrongAnimal copy assignment operator" << std::endl;
	_type = src._type;
	return (*this);
}

std::string	WrongAnimal::getType() const { return (_type); }

void	WrongAnimal::makeSound() const {
	std::cout << "* WrongAnimal noises *" << std::endl;
}