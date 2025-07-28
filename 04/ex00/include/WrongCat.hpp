#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
	/* data */
public:
	WrongCat(/* args */);
	WrongCat(const WrongCat& ref);
	~WrongCat();

	WrongCat& operator=(const WrongCat& ref);
	void	makeSound() const;
};

#endif