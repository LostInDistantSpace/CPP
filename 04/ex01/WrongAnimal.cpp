#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
	std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::~WrongAnimal() { 
	std::cout << "WeirdAnimal default destructor" << std::endl; 
}

WrongAnimal::WrongAnimal(const WrongAnimal& ref)
{
	_type = ref.getType();
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& ref)
{
	_type = ref.getType();
	return *this;
}

std::string	WrongAnimal::getType() const { return (_type); }

void	WrongAnimal::makeSound() const {
	std::cout << "A weird animal screeches" << std::endl;
}