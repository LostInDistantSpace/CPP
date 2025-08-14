#include "Bureaucrat.hpp"

void	announce(std::string msg) {
	std::cout << BOLD << "\n----- " << msg << " -----\n" << RESET <<  std::endl;
}

int	main(void)
{
	try
	{
		announce("Normal Behavior");
		Bureaucrat	default_bureaucrat;
		Bureaucrat	boss(1, "Boss");
		Bureaucrat	manager(70, "Manager");
		Bureaucrat	intern(150, "Intern");
		std::cout << default_bureaucrat;
		std::cout << boss;
		std::cout << manager;
		std::cout << intern;
		manager.promote();
		std::cout << manager;
		boss.demote();
		std::cout << boss;
	}
	catch (std::exception & e)
	{
		std::cout << BOLD RED << e.what() << RESET << std::endl;
	}
	
	try
	{
		announce("Wrong parameters at creation");
//		Bureaucrat	bad_boss(-1, "bad boss");	
		Bureaucrat	bad_intern(151, "bad intern");
//		std::cout << bad_boss;
		std::cout << bad_intern;
	}
	catch (std::exception & e)
	{
		std::cout << BOLD RED << e.what() << RESET << std::endl;
	}
	try
	{
		announce("Wrong Promotion");
		Bureaucrat mega_boss(1, "mega_boss");
		// Bureaucrat fired_intern(150, "fired_intern");

		std::cout << mega_boss;
		mega_boss.promote();
		std::cout << mega_boss;
		// std::cout << fired_intern;
		// fired_intern.demote();
		// std::cout << fired_intern;
	}
	catch (std::exception & e)
	{
		std::cout << BOLD RED << e.what() << RESET << std::endl;
	}
	try
	{
		announce("Wrong Demotion");
		Bureaucrat fired_intern(150, "fired_intern");

		std::cout << fired_intern;
		fired_intern.demote();
		std::cout << fired_intern;
	}
	catch (std::exception & e)
	{
		std::cout << BOLD RED << e.what() << RESET << std::endl;
	}
	return (0);
}