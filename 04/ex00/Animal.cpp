#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
	std::cout << "An Animal is born" << std::endl;
}

Animal::~Animal() { 
	std::cout << "An Animal has left the chat" << std::endl; 
}

std::string	Animal::getType() const { return (_type); }

void	Animal::makeSound() const {
	std::cout << "*animal sound*" << std::endl;
}