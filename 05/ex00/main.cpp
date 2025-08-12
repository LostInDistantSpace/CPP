#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		std::cout << "----- Normal Behavior -----" << std::endl;
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
		std::cout << e.what() << std::endl;
		return (1);
	}
	
	try
	{
		std::cout << "\n----- Wrong parameters at creation -----" << std::endl;
//		Bureaucrat	bad_boss(-1, "bad boss");	
		Bureaucrat	bad_intern(151, "bad intern");
//		std::cout << bad_boss;
		std::cout << bad_intern;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "\n----- Wrong Promotion/Demotion -----" << std::endl;
		// Bureaucrat fired_intern(150, "fired_intern");
		Bureaucrat mega_boss(1, "mega_boss");

		// std::cout << fired_intern;
		std::cout << mega_boss;
		// fired_intern.demote();
		mega_boss.promote();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}