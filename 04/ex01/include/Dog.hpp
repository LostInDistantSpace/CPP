#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
private:
	Brain* _brain;
	/* data */
public:
	Dog(/* args */);
	Dog(const Dog& ref);
	~Dog();

	Dog& operator=(const Dog& ref);
	void		makeSound() const;
	void		addIdea(std::string idea);
	std::string	getIdea(int index);
};