#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

void	announce(std::string msg) {
	std::cout << BOLD << "\n----- " << msg << " -----\n" << RESET <<  std::endl;
}

int	main(void)
{
	try
	{
		Bureaucrat	default_bureaucrat;
		Bureaucrat	boss(1, "Boss");
		Bureaucrat	manager(30, "Manager");
		Bureaucrat	intern(150, "Intern");
		std::cout << default_bureaucrat << std::endl;
		std::cout << boss << std::endl;
		std::cout << manager << std::endl;
		std::cout << intern << std::endl;
	
		ShrubberyCreationForm	shrub_form("Manager");
		RobotomyRequestForm		robo_form("Intern");
		PresidentialPardonForm	pres_form("Boss");

		announce("Form not signed");
		boss.executeForm(robo_form);
		
		announce("Successful Robotomy");
		boss.signForm(robo_form);
		boss.executeForm(robo_form);

		announce("Grade too low");
		boss.signForm(pres_form);
		manager.executeForm(pres_form);

		announce("Successful Presidential Pardon");
		boss.executeForm(pres_form);

		announce("Grade too low");
		intern.executeForm(shrub_form);

		announce("Successful Shrubbery");
		manager.signForm(shrub_form);
		manager.executeForm(shrub_form);
	}
	catch (std::exception & e)
	{
		std::cout << BOLD RED << e.what() << RESET << std::endl;
	}
	return (0);
}