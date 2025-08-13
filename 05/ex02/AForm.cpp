#include "AForm.hpp"

const char* AForm::GradeTooHighException::what() const throw()
{
	return "Error: Grade too high";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "Error: Grade too low";
}

const char* AForm::AlreadySignedException::what() const throw()
{
	return "Error: Form already signed";
}

const char* AForm::NotSignedException::what() const throw()
{
	return "Error: Form not signed";
}

AForm::AForm() : _signed(false), _name("Default AForm"), _sign_grade(150), _exec_grade(150) {}

AForm::AForm(int sign_grade, int exec_grade, std::string name, std::string target) : _signed(false), _name(name), _target(target), _sign_grade(sign_grade), _exec_grade(exec_grade) {
	if (_sign_grade > 150 || _exec_grade > 150)
		throw GradeTooLowException();
	else if (_sign_grade < 1 || _exec_grade < 1)
		throw GradeTooHighException();
}

AForm::AForm(const AForm& other) : _signed(other.isSigned()), _name(other.getName()), _target(other.getTarget()), _sign_grade(other.getSignGrade()), _exec_grade(other.getExecGrade()) {
	if (_sign_grade > 150 || _exec_grade > 150)
		throw GradeTooLowException();
	else if (_sign_grade < 1 || _exec_grade < 1)
		throw GradeTooHighException();
}

AForm::~AForm() {}

AForm&		AForm::operator=(const AForm& other) {
	if (this != &other)
		_signed = other.isSigned();
	return *this;
}

bool		AForm::isSigned() const {
	return _signed;
}

int			AForm::getSignGrade() const {
	return _sign_grade;
}

int			AForm::getExecGrade() const {
	return _exec_grade;
}

std::string	AForm::getName() const {
	return _name;
}

std::string	AForm::getTarget() const {
	return _target;
}

void	AForm::notSignable(Bureaucrat bur, std::string error) {
	std::cout << bur.getName() << " couldn't sign " << getName();
	std::cout << " because " << error << std::endl;
}

void	AForm::beSigned(Bureaucrat bur) {
	if (bur.getGrade() > getSignGrade()) {
		notSignable(bur, "their bureacrat grade is too low");
		throw GradeTooLowException();
	}
	else {
		if (_signed) {
			notSignable(bur, "it was already signed");
			throw AlreadySignedException();
		}
		else {
			_signed = true;
			std::cout << bur.getName() << " signed " << getName() << std::endl;
		}
	}
}

void	AForm::execute(Bureaucrat const & executor) const  {
	if (executor.getGrade() > getExecGrade())
		throw GradeTooLowException();
	if (isSigned() == false)
		throw NotSignedException();
}

std::ostream& operator<<(std::ostream&os, const AForm& form) {
	std::cout << form.getName() << ", form signed : " << form.isSigned();
	std::cout << ", required grade to sign " << form.getSignGrade() << ", required grade to execute " << form.getExecGrade() << std::endl;
	return os;
}
