#include "Bureaucrat.hpp"
#include "Intern.hpp"
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
		announce("Normal behavior");
		Bureaucrat	default_bureaucrat;
		Bureaucrat	good_boss(1, "boss");
		Bureaucrat	good_manager(30, "manager");
		Bureaucrat	good_intern(150, "intern");
		Intern		dude;
		AForm		*form = NULL;
		AForm		*form2 = NULL;
		form = dude.makeForm("Robotomy Request", "good_intern");
		form2 = dude.makeForm("Presidential Pardon", "good_intern");	
		form->beSigned(good_manager);
		form2->beSigned(good_boss);
		good_manager.executeForm(*form);
		good_boss.executeForm(*form2);
		delete form;
		delete form2;
	}
	catch (std::exception & e)
	{
		std::cout << BOLD RED << e.what() << RESET << std::endl;
	}
	try
	{
		announce("Nonexistant Form");
		Bureaucrat	default_bureaucrat;
		Bureaucrat	good_boss(1, "boss");
		Bureaucrat	good_manager(30, "manager");
		Bureaucrat	good_intern(150, "intern");
		Intern		dude;
		AForm		*form = NULL;
		AForm		*form2 = NULL;
		form = dude.makeForm("Robotomy Pardon", "good_intern");
		form2 = dude.makeForm("Presidential Pardon", "good_intern");	
		form->beSigned(good_manager);
		form2->beSigned(good_boss);
		good_manager.executeForm(*form);
		good_boss.executeForm(*form2);
		delete form;
		delete form2;
	}
	catch (std::exception & e)
	{
		std::cout << BOLD RED << e.what() << RESET << std::endl;
	}
	return (0);
}