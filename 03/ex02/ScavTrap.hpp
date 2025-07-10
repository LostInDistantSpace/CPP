#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <string>
# include <iostream>

class ScavTrap : public ClapTrap
{
protected:

public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& src);
	ScavTrap operator=(const ScavTrap& src);
	~ScavTrap();
	void	attack(const std::string& target);
	void	guardGate();
};



#endif