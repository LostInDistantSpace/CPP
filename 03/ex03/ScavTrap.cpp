#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() 
{
	_hp = 100;
	_ep = 50;
	_dmg = 20;
	std::cout << "ScavTrap created with default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) 
{
	_hp = 100;
	_ep = 50;
	_dmg = 20;
	std::cout << "ScavTrap " << _name << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src)
{
	*this = src;
	std::cout << "ScavTrap " << _name << " created by copy" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " destroyed" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src)
{
	if (this != &src)
	{
		_name = src.getName();
		_hp = src.getHP();
		_ep = src.getEP();
		_dmg = src.getDMG();
	}
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (!_hp || !_ep)
	{
		if (!_hp)
			std::cout << _name << " is KO and cannot attack" << std::endl;
		if (!_ep)
			std::cout << _name << " has no energy left and cannot attack" << std::endl;
		return;
	}
	_ep > 0 ? _ep-- : _ep = 0;
	std::cout << "ScavTrap " << _name << " attacks " << target;
	std::cout << " strongly, causing " << _dmg << "DMG" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::setHP()
{
	_hp = 100;
}

void	ScavTrap::setEP()
{
	_ep = 50;
}

void	ScavTrap::setDMG()
{
	_dmg = 20;
}