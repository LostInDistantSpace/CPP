#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string	_type;
	/* data */
public:
	Animal(/* args */);
	virtual ~Animal();

	std::string		getType() const;
	virtual void	makeSound() const;
};


#endif