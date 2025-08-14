#include "Form.hpp"

const char* Form::GradeTooHighException::what() const throw()
{
	return "Error: Grade too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Error: Grade too low";
}

const char* Form::FormAlreadySigned::what() const throw()
{
	return "Error: Form already signed";
}

Form::Form() : _signed(false), _name("Default Form"), _sign_grade(150), _exec_grade(150) {}

Form::Form(int sign_grade, int exec_grade, std::string name) : _signed(false), _name(name), _sign_grade(sign_grade), _exec_grade(exec_grade) {
	if (_sign_grade > 150 || _exec_grade > 150)
		throw GradeTooLowException();
	else if (_sign_grade < 1 || _exec_grade < 1)
		throw GradeTooHighException();
}

Form::Form(const Form& other) : _signed(other.isSigned()), _name(other.getName()), _sign_grade(other.getSignGrade()), _exec_grade(other.getExecGrade()) {
	if (_sign_grade > 150 || _exec_grade > 150)
		throw GradeTooLowException();
	else if (_sign_grade < 1 || _exec_grade < 1)
		throw GradeTooHighException();
}

Form::~Form() {}

Form&		Form::operator=(const Form& other) {
	if (this != &other)
		_signed = other.isSigned();
	return *this;
}

bool		Form::isSigned() const {
	return _signed;
}

int			Form::getSignGrade() const {
	return _sign_grade;
}

int			Form::getExecGrade() const {
	return _exec_grade;
}

std::string	Form::getName() const {
	return _name;
}

void	Form::beSigned(Bureaucrat bur) {
	if (bur.getGrade() > getSignGrade())
		throw GradeTooLowException();
	else {
		if (_signed)
			throw FormAlreadySigned();
		else
			_signed = true;
	}
}

std::ostream& operator<<(std::ostream&os, const Form& form) {
	std::cout << form.getName() << ", form signed : " << form.isSigned();
	std::cout << ", required grade to sign " << form.getSignGrade() << ", required grade to execute " << form.getExecGrade() << std::endl;
	return os;
}
