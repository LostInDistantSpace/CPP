#include "DiamondTrap.hpp"

int	main()
{
	std::cout << "\n--- Testing ScavTrap ---" << std::endl;
	{
		ScavTrap scav("Scav");

		std::cout << "\n--- ScavTrap Stats ---" << std::endl;
		std::cout << "Hit points (HP) : " << scav.getHP() << std::endl;
		std::cout << "Energy (EP) : " << scav.getEP() << std::endl;
		std::cout << "Attack damage (DMG) : " << scav.getDMG() << std::endl;

		scav.attack("Enemy");		// Message d'attaque différent
		scav.takeDamage(20);		// Plus de points de vie
		scav.beRepaired(10);		// Plus d'énergie
		scav.guardGate();		   // Nouvelle fonction
	}

	// Test FragTrap
	std::cout << "\n--- Testing FragTrap ---" << std::endl;
	{
		FragTrap frag("Frag");

		std::cout << "\n--- FragTrap Stats ---" << std::endl;
		std::cout << "HP : " << frag.getHP() << std::endl;
		std::cout << "EP : " << frag.getEP() << std::endl;
		std::cout << "DMG : " << frag.getDMG() << std::endl;

		frag.attack("Enemy");
		frag.takeDamage(40);
		frag.beRepaired(60);
		frag.highFivesGuys();
	}

	// Test DiamondTrap
	std::cout << "\n--- Testing DiamondTrap ---" << std::endl;
	{
		DiamondTrap diamond("Jojo");

		std::cout << "\n--- DiamondTrap Stats ---" << std::endl;
		std::cout << "HP (FragTrap) : " << diamond.getHP() << std::endl;
		std::cout << "EP (ScavTrap) : " << diamond.getEP() << std::endl;
		std::cout << "DMG (FragTrap) : " << diamond.getDMG() << std::endl;

		diamond.attack("Dio"); //herite de ScavTrap
		diamond.takeDamage(30); //herite de ClapTrap
		diamond.beRepaired(60); //herite de ClapTrap
		diamond.guardGate(); //herite de ScavTrap
		diamond.highFivesGuys(); //herite de FragTrap
		diamond.whoAmI();

		std::cout << "\n--- Testing copy ---" << std::endl;
		DiamondTrap diamond2(diamond);
		diamond2.whoAmI();
	}

	return (0);
}