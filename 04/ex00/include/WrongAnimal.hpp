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
	WrongAnimal(const WrongAnimal& ref);
	virtual ~WrongAnimal();

	WrongAnimal& operator=(const WrongAnimal& ref);
	std::string		getType() const;
	void	makeSound() const;
};


#endif