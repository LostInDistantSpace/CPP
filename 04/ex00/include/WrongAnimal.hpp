#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string	_type;
	/* data */
public:
	WrongAnimal(/* args */);
	~WrongAnimal();

	std::string		getType() const;
	virtual void	makeSound() const;
};


#endif