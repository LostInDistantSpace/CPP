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
		Bureaucrat	good_boss(1, "boss");
		Bureaucrat	good_manager(30, "manager");
		Bureaucrat	good_intern(150, "intern");
		std::cout << default_bureaucrat << std::endl;
		std::cout << good_boss << std::endl;
		std::cout << good_manager << std::endl;
		std::cout << good_intern << std::endl;
	
		ShrubberyCreationForm	shrub_form("good_manager");
		RobotomyRequestForm		robo_form("good_intern");
		PresidentialPardonForm	pres_form("good_boss");

		announce("Form not signed");
		good_boss.executeForm(robo_form);
		
		announce("Successful Robotomy");
		robo_form.beSigned(good_boss);
//		robo_form.beSigned(good_boss);
		good_boss.executeForm(robo_form);
//		pres_form.beSigned(good_manager);

		announce("Grade too low");
		pres_form.beSigned(good_boss);
		good_manager.executeForm(pres_form);

		announce("Successful Presidential Pardon");
		good_boss.executeForm(pres_form);

		announce("Grade too low");
		good_intern.executeForm(shrub_form);

		announce("Successful Shrubbery");
		shrub_form.beSigned(good_manager);
		good_manager.executeForm(shrub_form);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}