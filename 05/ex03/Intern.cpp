#include "Intern.hpp"

const char* Intern::NoSuchFormException::what() const throw()
{
	return "Error: Intern does not know this form";
}

Intern::Intern() {}

Intern::Intern(const Intern&) {}

Intern::~Intern() {}

Intern&	Intern::operator=(const Intern&) {
	return *this;
}

AForm* Intern::makeForm(std::string form, std::string target) 
{
	std::string forms[3] = {"SHRUBBERY CREATION", "ROBOTOMY REQUEST", "PRESIDENTIAL PARDON"};
	
	for(size_t j = 0; j < form.length(); j++)
	{
		if (form[j] >= 'a' && form[j] <= 'z')
			form[j] -= 32;
	}

	int	i = 0;
	while (i < 3 && form.compare(forms[i]))
		i++;

	switch (i)
	{
	case 0:
		std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
		return new ShrubberyCreationForm(target);
	case 1:
		std::cout << "Intern creates RobotomyRequestForm" << std::endl;
		return new RobotomyRequestForm(target);
	case 2:
		std::cout << "Intern creates PresidentialPardonForm" << std::endl;
		return new PresidentialPardonForm(target);
	
	default:
		throw NoSuchFormException();
	}
}
