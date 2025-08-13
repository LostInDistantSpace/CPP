#pragma once

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
private:
	/* data */
public:
	Intern(/* args */);
	Intern(const Intern&);
	~Intern();
	Intern&	operator=(const Intern& other);

	AForm* makeForm(std::string form, std::string target);

	class NoSuchFormException : public std::exception 
	{
		public:
			const char*	what() const throw();
	};
};