#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria* _database[4];
	/* data */
public:
	MateriaSource(/* args */);
	MateriaSource(const MateriaSource& ref);
	~MateriaSource();

	MateriaSource& operator=(const MateriaSource& ref);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};
