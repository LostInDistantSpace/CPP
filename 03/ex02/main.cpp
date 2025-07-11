#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	 // Test ClapTrap
	std::cout << "--- Testing ClapTrap ---" << std::endl;
	{
		ClapTrap clap("Clap");
		clap.attack("Enemy");
		clap.takeDamage(5);
		clap.beRepaired(3);
	}

	// Test ScavTrap
	std::cout << "\n--- Testing ScavTrap ---" << std::endl;
	{
		ScavTrap scav("Scav");
		scav.attack("Enemy");		// Message d'attaque différent
		scav.takeDamage(20);		// Plus de points de vie
		scav.beRepaired(10);		// Plus d'énergie
		scav.guardGate();			// Nouvelle fonction
		ScavTrap scav2(scav);		// Copie
		scav2.guardGate();
	}

	   // Test FragTrap
	std::cout << "\n--- Testing FragTrap ---" << std::endl;
   	{
		FragTrap frag("Frag");
		frag.attack("Enemy");
		frag.takeDamage(40);
		frag.beRepaired(60);
		frag.highFivesGuys();
		FragTrap frag2(frag);
		frag2.highFivesGuys();
	}

	return (0);
}