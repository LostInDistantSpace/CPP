#include "FragTrap.hpp"

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

FragTrap& FragTrap::operator=(const FragTrap& src)
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

void	FragTrap::attack(const std::string& target)
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
	std::cout << "FragTrap " << _name << " attacks " << target;
	std::cout << " frantically, causing " << _dmg << "DMG, and has ";
	std::cout << _ep << "EP left" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << _name << " is asking for a high five" << std::endl;
}
