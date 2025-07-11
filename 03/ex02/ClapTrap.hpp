#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

typedef unsigned int uint;

class ClapTrap
{
protected:
	ClapTrap();
	std::string		_name;
	unsigned int	_hp;
	unsigned int	_ep;
	unsigned int	_dmg;

public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& src);
	~ClapTrap();

	ClapTrap& operator=(const ClapTrap& src);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
	void		setHP();
	void		setEP();
	void		setDMG();
	uint		getHP() const;
	uint		getEP() const;
	uint		getDMG() const;
	std::string	getName() const;
};



#endif