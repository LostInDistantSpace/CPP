#pragma once

#include <iostream>
#include "Brain.hpp"

class Animal
{
protected:
	std::string	_type;
	/* data */
public:
	Animal(/* args */);
	Animal(const Animal& ref);
	virtual ~Animal();

	Animal& operator=(const Animal& ref);
	std::string		getType() const;
	virtual void	makeSound() const = 0;
};