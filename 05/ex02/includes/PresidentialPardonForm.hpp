#pragma once

# include <iostream>
# include "AForm.hpp"

class Form;

class PresidentialPardonForm : public AForm
{
private:
	PresidentialPardonForm();
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& other);
	~PresidentialPardonForm();

	PresidentialPardonForm&	operator=(const PresidentialPardonForm& other);

	void		execute(Bureaucrat const & executor) const;
};

std::ostream& operator<<(std::ostream&os, const PresidentialPardonForm& ref);
