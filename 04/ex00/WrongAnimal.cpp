#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
	std::cout << "A weird animal came from your nightmares" << std::endl;
}

WrongAnimal::~WrongAnimal() { 
	std::cout << "A weird animal disappeared" << std::endl; 
}

std::string	WrongAnimal::getType() const { return (_type); }

void	WrongAnimal::makeSound() const {
	std::cout << "A weird animal screeches" << std::endl;
}