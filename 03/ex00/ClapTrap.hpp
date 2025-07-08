#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
private:
	ClapTrap();
	std::string		_name;
	unsigned int	_hp;
	unsigned int	_ep;
	unsigned int	_dmg;

public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& src);
	ClapTrap operator=(const ClapTrap& src);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};



#endif