#include "Zombie.hpp"

Zombie::Zombie () {}
Zombie::~Zombie () 
{
	std::cout << _name << " died" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string str)
{
	_name = str;
}