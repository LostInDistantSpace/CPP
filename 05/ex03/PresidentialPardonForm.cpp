#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm(25, 5, "Presidential Pardon Form", "Default target") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(25, 5, "Presidential Pardon Form", target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm(copy) {
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm&) {
    return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const  {
	AForm::execute(executor);
	// if (executor.getGrade() > this->getExecGrade())
	// 	throw GradeTooLowException();
	// if (this->isSigned() == false)
	// 	throw NotSignedException();
	// else
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}