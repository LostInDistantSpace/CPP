#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm(72, 45, "Robotomy Request Form", "Default target") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(72, 45, "Robotomy Request Form", target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm(copy) {
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm&) {
    return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	AForm::execute(executor);
	// if (executor.getGrade() > this->getExecGrade())
	// 	throw GradeTooLowException();
	// if (this->isSigned() == false)
	// 	throw NotSignedException();
	// else
	// {
		std::cout << BOLD << "BRRRR... BZZZZ... BRRRR..." << RESET << std::endl;
		
		std::srand(std::time(NULL));
		std::cout << getTarget() << " ";
		if (std::rand() % 2)
			std::cout << "has been successfully robotomized" << std::endl;
		else
			std::cout << "'s robotomy failed" << std::endl;

	// }
}