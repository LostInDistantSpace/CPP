#include "Zombie.hpp"

Zombie::Zombie (std::string name) : _name(name) {}
Zombie::Zombie () {}
Zombie::~Zombie () 
{
	std::cout << _name << " died" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}