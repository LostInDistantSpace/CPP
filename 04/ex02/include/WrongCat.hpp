#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
	/* data */
public:
	WrongCat(/* args */);
	WrongCat(const WrongCat& ref);
	~WrongCat();

	WrongCat&	operator=(const WrongAnimal& ref);
	void		makeSound() const;
};