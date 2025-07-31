#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i=0; i<4; i++)
		_database[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource& ref)
{
	*this = ref;
}

MateriaSource::~MateriaSource()
{
	for (int i=0; i<4; i++)
	{
		if (_database[i])
			delete _database[i];
	}
}

void	MateriaSource::learnMateria(AMateria* materia)
{
	if (!materia)
	{
		std::cout << "Materia doesn't exist" << std::endl;
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (_database[i] == 0)
		{
			_database[i] = materia;
			return;
		}
	}
	delete materia;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& ref)
{
	for (int i = 0; i < 4; i++)
		_database[i] = ref._database[i]->clone();
	return *this;
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i = 3; i >= 0; i--)
	{
		// std::cout << "Materia source " << i << " : ";
		// if (_database[i])
		// 	std::cout << _database[i]->getType() << std::endl;
		// else
		// 	std::cout << "Empty" << std::endl;
		if (_database[i] && _database[i]->getType() == type)
			return _database[i]->clone();
	}
	return 0;
}