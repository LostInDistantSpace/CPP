#pragma once

# include <iostream>
# include <fstream>
# include "AForm.hpp"

class Form;

class ShrubberyCreationForm : public AForm
{
private:
	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& other);
	~ShrubberyCreationForm();

	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& other);

	void		execute(Bureaucrat const & executor) const;

	class NoOutFileException : public std::exception 
	{
		public:
			const char*	what() const throw();
	};
};

std::ostream& operator<<(std::ostream&os, const ShrubberyCreationForm& ref);
