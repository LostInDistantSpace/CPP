#pragma once

#include "ICharacter.hpp"
#include <string>
#include <iostream>

class AMateria
{
protected:
	AMateria();
	/*...*/
	std::string	_type;
public:
	AMateria(std::string const & type);
	AMateria(const AMateria& ref);
	virtual ~AMateria();

	AMateria& operator=(const AMateria& ref);

	std::string const & getType() const; //Returns the materia type

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};