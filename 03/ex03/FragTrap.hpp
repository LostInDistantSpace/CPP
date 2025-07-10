#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
protected:

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& src);
	~FragTrap();

	FragTrap& operator=(const FragTrap& src);
	
	void	attack(const std::string& target);
	void	highFivesGuys();
	void	setHP();
	void	setEP();
	void	setDMG();
};

#endif