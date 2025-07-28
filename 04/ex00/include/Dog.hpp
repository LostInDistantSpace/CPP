#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
private:
	/* data */
public:
	Dog(/* args */);
	Dog(const Dog& ref);
	~Dog();

	Dog& operator=(const Dog& ref);
	void	makeSound() const;
};

#endif