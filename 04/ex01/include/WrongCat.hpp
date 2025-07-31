#pragma once

#include "WrongAnimal.hpp"
#include "Brain.hpp"

class WrongCat : public WrongAnimal
{
private:
	Brain* _brain;
	/* data */
public:
	WrongCat(/* args */);
	WrongCat(const WrongCat& ref);
	~WrongCat();

	WrongCat&	operator=(const WrongCat& ref);
	void		makeSound() const;
	void		addIdea(std::string idea);
	std::string	getIdea(int index);
};