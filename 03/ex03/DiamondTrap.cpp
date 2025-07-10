#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	this->_name = name;
	FragTrap::setHP();
	ScavTrap::setEP();
	FragTrap::setDMG();
	std::cout << "DiamondTrap " << this->_name << " created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src)
{
	*this = src;
	std::cout << "DiamondTrap " << _name << " created by copy" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " destroyed" << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "I'm : " << _name << " and my clap name is : " << ClapTrap::_name << std::endl;
}
