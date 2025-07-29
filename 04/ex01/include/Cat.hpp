#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
private:
	Brain* _brain;
	/* data */
public:
	Cat(/* args */);
	Cat(const Cat& ref);
	~Cat();

	Cat& operator=(const Cat& ref);
	void	makeSound() const;
	void		addIdea(std::string idea);
	std::string	getIdea(int index);
};