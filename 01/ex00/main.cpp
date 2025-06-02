#include "Zombie.hpp"

void	outsideFunction(Zombie *zombie)
{
	zombie->announce();
}

int	main (void)
{
	Zombie* allan;
	Zombie	jeremy("Jeremy");
	
	jeremy.announce();
	allan = newZombie("Allan");
	outsideFunction(allan);
	randomChump("Timothy");

	delete (allan);
}