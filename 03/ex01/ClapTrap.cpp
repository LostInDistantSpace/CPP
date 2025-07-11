#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("ERROR"), _hp(0), _ep(0), _dmg(0) {}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _dmg(0) 
{
	std::cout << "ClapTrap " << _name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	*this = src;
	std::cout << "ClapTrap " << _name << " created by copy" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destroyed" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
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


void ClapTrap::attack(const std::string& target)
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

	std::cout << _name << " attacks " << target;
	std::cout << ", causing " << _dmg << "DMG (" << _ep << "EP)"  << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp <= 0)
	{
		std::cout << _name << " is already KO and cannot take damage" << std::endl;
		return;
	}
	if (amount >= _hp)
		_hp = 0;
	else
		_hp -= amount;

	std::cout << _name << " takes " << amount << "DMG, ";
	if (_hp == 0)
		std::cout << "and is now KO" << std::endl;
	else
		std::cout << _hp << "HP left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!_hp)
	{
		std::cout << _name << " is KO and cannot repair itself" << std::endl;
		return;
	}
	if (!_ep)
	{
		std::cout << _name << " has no energy left and cannot repair itself" << std::endl;
		return;
	}
	_hp += amount;
	_ep > 0 ? _ep-- : _ep = 0;

	std::cout << _name << " regains " << amount << "HP";
	std::cout << " (" << _hp << "HP | " << _ep << "EP)" << std::endl;
}

void		ClapTrap::setHP()	{ _hp = 10; }
void		ClapTrap::setEP()	{ _ep = 10; }
void		ClapTrap::setDMG()	{ _dmg = 0; }

uint		ClapTrap::getHP() const		{ return (_hp); }
uint		ClapTrap::getEP() const		{ return (_ep); }
uint		ClapTrap::getDMG() const	{ return (_dmg); }
std::string	ClapTrap::getName() const	{ return (_name); }
