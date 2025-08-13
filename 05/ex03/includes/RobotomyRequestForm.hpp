#pragma once

# include <iostream>
# include <cstdlib>
# include <ctime>
# include "AForm.hpp"

class Form;

class RobotomyRequestForm : public AForm
{
private:
	RobotomyRequestForm();
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& other);
	~RobotomyRequestForm();

	RobotomyRequestForm&	operator=(const RobotomyRequestForm& other);

	void		execute(Bureaucrat const & executor) const;
};

std::ostream& operator<<(std::ostream&os, const RobotomyRequestForm& ref);
