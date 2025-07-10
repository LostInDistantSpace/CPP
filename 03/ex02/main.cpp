#include "ScavTrap.hpp"

int	main()
{
	// Test ClapTrap
	std::cout << "--- Testing ClapTrap ---" << std::endl;
	ClapTrap clap("a transphobe");
	clap.attack("NPC");
	clap.takeDamage(5);
	clap.beRepaired(3);

	// Test ScavTrap
	std::cout << "\n--- Testing ScavTrap ---" << std::endl;
	ScavTrap scav("Scav");
	scav.attack("a racist");	// Message d'attaque différent
	scav.takeDamage(20);	// Plus de points de vie
	scav.beRepaired(10);
	scav.guardGate();		// Nouvelle fonction

	// Test de copie
	std::cout << "\n--- Testing Copy ---" << std::endl;
	ScavTrap scav2(scav);
	scav2.guardGate();

	return (0);
}