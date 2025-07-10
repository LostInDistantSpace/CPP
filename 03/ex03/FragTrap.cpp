#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() 
{
	_hp = 100;
	_ep = 100;
	_dmg = 30;
	std::cout << "FragTrap " << _name << " created" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) 
{
	_hp = 100;
	_ep = 100;
	_dmg = 30;
	std::cout << "FragTrap " << _name << " created" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src)
{
	*this = src;
	std::cout << "FragTrap " << _name << " created by copy" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " destroyed" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (!_ep)
	{
		std::cout << "FragTrap " << _name << " has no energy left and cannot attack" << std::endl;
		return;
	}
	if (!_hp)
	{
		std::cout << "FragTrap " << _name << " is KO and cannot attack" << std::endl;
		return;
	}
	_ep > 0 ? _ep-- : _ep = 0;
	std::cout << "FragTrap " << _name << " attacks " << target;
	std::cout << " frantically, causing " << _dmg << "DMG, and has ";
	std::cout << _ep << "EP left" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name << " : 'Let's a high five !'" << std::endl;
}

void	FragTrap::setHP()
{
	_hp = 100;
}

void	FragTrap::setEP()
{
	_ep = 100;
}

void	FragTrap::setDMG()
{
	_dmg = 30;
}
