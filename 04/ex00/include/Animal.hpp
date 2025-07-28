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
	Animal(Animal &copy);
	virtual ~Animal();

	Animal& operator=(const Animal& src);

	std::string		getType() const;
	virtual void	makeSound() const;
};


#endif