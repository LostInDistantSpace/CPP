#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl harl;

	if (ac != 2)
	{
		std::cout << "Harl needs one argument" << std::endl;
		return (0);
	}
	harl.complain(av[1]);

	return (0);
}