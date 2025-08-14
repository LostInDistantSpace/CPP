#include "Bureaucrat.hpp"
#include "Form.hpp"

void	announce(std::string msg) {
	std::cout << BOLD << "\n----- " << msg << " -----\n" << RESET <<  std::endl;
}

int	main(void)
{
	try
	{
		announce("Out of bounds Form Grade");
		Bureaucrat	default_bureaucrat;
		Bureaucrat	good_boss(1, "boss");
		Bureaucrat	good_manager(70, "manager");
		Bureaucrat	good_intern(150, "intern");
		std::cout << default_bureaucrat;
		std::cout << good_boss;
		std::cout << good_manager;
		std::cout << good_intern;
		Form		bad_form(-1, 1, "bad_form");
	}
	catch (std::exception & e) {
		std::cout << BOLD RED << e.what() << RESET << std::endl;
	}

	try
	{
		announce("Already Signed Form No Exception");
		Form	boss_form(2, 15, "boss_form");
		Bureaucrat	boss(1, "boss");
		
		std::cout << CYAN << boss_form << RESET;
		boss.signForm(boss_form);
		std::cout << GREEN << boss_form << RESET;
		boss.signForm(boss_form);
		// boss_form.beSigned(boss);
	}
	catch (std::exception & e) {
		std::cout << BOLD RED << e.what() << RESET << std::endl;
	}

	try
	{
		announce("Already Signed Exception");
		Form	manager_form(75, 100, "important_form");
		Bureaucrat	manager(70, "manager");
		Bureaucrat	senior(75, "senior bureaucrat");
		
		std::cout << CYAN << manager_form << RESET;
		manager_form.beSigned(senior);
		manager_form.beSigned(manager);
	}
	catch (std::exception & e) {
		std::cout << BOLD RED << e.what() << RESET << std::endl;
	}

	try
	{
		announce("Bureaucrat Grade too low to sign Form");
		Form	boss_form(2, 15, "boss_form");
		Bureaucrat	intern(150, "intern");
		
		std::cout << CYAN << boss_form << RESET;
		boss_form.beSigned(intern);
	}
	catch (std::exception & e) {
		std::cout << BOLD RED << e.what() << RESET << std::endl;
	}
	return (0);
}