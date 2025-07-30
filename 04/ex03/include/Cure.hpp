#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
private:
	/* data */
public:
	Cure(/* args */);
	Cure(const Cure& ref);
	~Cure();

	Cure& operator=(const Cure& ref);
	Cure* clone() const;
	void use(ICharacter& target);
};