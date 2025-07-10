#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <string>
# include <iostream>

class FragTrap : public ClapTrap
{
protected:

public:
	FragTrap(std::string name);
	FragTrap(const FragTrap& src);
	FragTrap operator=(const FragTrap& src);
	~FragTrap();
	void	attack(const std::string& target);
	void	highFivesGuys();
};

#endif