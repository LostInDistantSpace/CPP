#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	robby("Robby");

	std::cout << "--- Turn 1 ---" << std::endl;
	robby.attack("Jimothy"); // Attack
	robby.takeDamage(9); // Take damage


	std::cout << std::endl << "--- Turn 2 ---" << std::endl;
	robby.beRepaired(8); // Repair itself
	robby.attack("Jimothy");
	robby.takeDamage(1);

	std::cout << std::endl << "--- Turn 3 ---" << std::endl;
	robby.beRepaired(1);
	robby.attack("Jimothy");
	robby.takeDamage(2);

	std::cout << std::endl << "--- Turn 4 ---" << std::endl;
	robby.beRepaired(1);
	robby.attack("Jimothy");
	robby.takeDamage(4);

	std::cout << std::endl << "--- Turn 5 ---" << std::endl;
	robby.beRepaired(2);
	robby.attack("Jimothy");
	robby.takeDamage(5);

	std::cout << std::endl << "--- Turn 6 ---" << std::endl;
	robby.beRepaired(4);
	robby.attack("Jimothy"); // no energy
	robby.takeDamage(5); // KO

	std::cout << std::endl << "--- Turn 8 ---" << std::endl;
	robby.beRepaired(1); // Can't heal
	robby.takeDamage(1); // Already KO


	return (0);
}