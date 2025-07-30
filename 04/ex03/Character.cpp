#include "Character.hpp"

Character::Character()
{}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = 0;
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(const Character& other)
{
	std::cout << "Character copy constructor called" << std::endl;
	*this = other;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}

Character& Character::operator=(const Character& other)
{
	std::cout << "Character copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_name = other.getName();
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			_inventory[i] = other._inventory[i];
		}
	}
	return *this;
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == 0 && m != 0)
		{
			_inventory[i] = m;
			m = 0;
		}
	}
}

void	Character::unequip(int idx)
{
	/* manage ptr so no leaks */
	_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (_inventory[idx])
		_inventory[idx]->use(target);
}
