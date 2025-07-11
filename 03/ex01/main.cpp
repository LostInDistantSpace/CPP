#include "ScavTrap.hpp"

int	main()
{
	// Test ClapTrap
	std::cout << "--- Testing ClapTrap ---" << std::endl;
	ClapTrap clap("Pedro Pascal");
	clap.attack("a racist");
	clap.takeDamage(5);
	clap.beRepaired(3);

	// Test ScavTrap
	std::cout << "\n--- Testing ScavTrap ---" << std::endl;
	ScavTrap scav("Spiderman");
	scav.attack("a transphobe");	// Message d'attaque différent
	scav.takeDamage(10);	// Plus de points de vie
	scav.beRepaired(10);
	scav.guardGate();		// Nouvelle fonction

	// Test de copie
	std::cout << "\n--- Testing Copy ---" << std::endl;
	ScavTrap scav2(scav);
	scav2.guardGate();

	return (0);
}