#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
private:
	/* data */
public:
	Ice(/* args */);
	Ice(const Ice& ref);
	~Ice();

	Ice& operator=(const Ice& ref);
	Ice* clone() const;
	void use(ICharacter& target);
};