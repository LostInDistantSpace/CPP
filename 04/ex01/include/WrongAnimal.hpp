#pragma once

#include <iostream>

class WrongAnimal
{
protected:
	std::string	_type;
	/* data */
public:
	WrongAnimal(/* args */);
	WrongAnimal(const WrongAnimal& ref);
	~WrongAnimal();

	WrongAnimal& 	operator=(const WrongAnimal& ref);
	std::string		getType() const;
	void			makeSound() const;
};