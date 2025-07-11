#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
protected:
	std::string	_name;

public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& src);
	~DiamondTrap();

	DiamondTrap& operator=(const DiamondTrap& src);

	void		attack(const std::string& target);
	void		whoAmI();
};

#endif