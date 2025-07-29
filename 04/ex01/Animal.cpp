#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
	std::cout << "An Animal is born" << std::endl;
}

Animal::Animal(const Animal& ref)
{
	_type = ref.getType();
}

Animal::~Animal() { 
	std::cout << "An Animal has left the chat" << std::endl; 
}

Animal& Animal::operator=(const Animal& ref)
{
	_type = ref.getType();
}

std::string	Animal::getType() const { return (_type); }

void	Animal::makeSound() const {
	std::cout << "*animal sound*" << std::endl;
}