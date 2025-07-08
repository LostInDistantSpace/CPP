#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	robby("Robby");

	robby.attack("Jimothy");

	robby.takeDamage(9);
	robby.beRepaired(8);

	robby.takeDamage(1);
	robby.beRepaired(1);

	robby.takeDamage(2);
	robby.attack("Jimothy");

	robby.takeDamage(4);
	robby.beRepaired(5);

	robby.takeDamage(7);
	robby.beRepaired(2);

	robby.takeDamage(1);
	robby.attack("Jimothy");

	robby.takeDamage(2);
	robby.beRepaired(10);

	return (0);
}