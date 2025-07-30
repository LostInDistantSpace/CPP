#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {}

MateriaSource::MateriaSource(const MateriaSource& ref)
{

}

MateriaSource::~MateriaSource() {}

void	MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (_database[i] == 0 && materia != 0)
		{
			_database[i] = materia;
			materia = 0;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i = 3; i >= 0; i--)
	{
		if (_database[i] && _database[i]->getType() == type)
			return _database[i]->clone();
	}
	return 0;
}