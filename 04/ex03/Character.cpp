#include "Character.hpp"

Character::Character() : _name("")
{}

Character::Character(std::string name) : _name(name), _idx(0)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = 0;
	for (int i = 0; i < 100; i++)
		_floor[i] = 0;
}

Character::Character(const Character& other)
{
	*this = other;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
	
	for (int i = 0; i < _idx; i++)
		delete _floor[i];
}

Character& Character::operator=(const Character& other)
{
	if (this != &other)
	{
		_name = other.getName();
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			_inventory[i] = other._inventory[i]->clone();
		}
	}
	return *this;
}

const std::string& Character::getName() const
{
	return (_name);
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
	if (_idx < 100)
		_floor[_idx++] = _inventory[idx];
	else
	{
		std::cout << "Floor too cluttered, ";
		std::cout << _name << " cleaned up the floor before unequiping";
		std::cout << std::endl;
		for (int i =0; i < 100; i++)
			delete _floor[i];
		delete _inventory[idx];
		_idx = 0;
	}
	_inventory[idx] = 0;
}

void	Character::use(int idx, ICharacter& target)
{
	if (_inventory[idx])
		_inventory[idx]->use(target);
}
