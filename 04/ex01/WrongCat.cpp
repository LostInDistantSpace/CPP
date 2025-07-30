#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WeirdCat default constructor" << std::endl;
	_type = ("WrongCat");
}

WrongCat::~WrongCat()
{
	std::cout << "WeirdCat default destructor" << std::endl;
}
WrongCat::WrongCat(const WrongCat& ref)
{
	_brain = new(std::nothrow) Brain(*ref._brain);
	std::cout << "WrongCat copy constructor called" << std::endl;
}
WrongCat&	WrongCat::operator=(const WrongCat& ref)
{
	std::cout << "WrongCat copy assignement operator called" << std::endl;
	if (this != &ref) 
	{
		_type = ref.getType();
		_brain = new(std::nothrow) Brain(*ref._brain);
		if (_brain == NULL)
			std::cout << "Brain could not be created" << std::endl;
	}
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "Mreow" << std::endl;
}