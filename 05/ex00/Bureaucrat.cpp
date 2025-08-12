#include "Bureaucrat.hpp"

// Default Constructor
Bureaucrat::Bureaucrat() : _grade(150), _name("Default Bureaucrat") {}

Bureaucrat::Bureaucrat(int grade, std::string name) : _grade(grade), _name(name)
{
	if (grade > 150)
	{
		_grade = 150;
		throw Bureaucrat::GradeTooLowException();
	}
	else if (grade < 1)
	{
		_grade = 1;
		throw Bureaucrat::GradeTooHighException();
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other.getName()) {
	*this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	if (this != &other)
		_grade = other.getGrade();
	return *this;
}

// Destructor
Bureaucrat::~Bureaucrat() {}

int	Bureaucrat::getGrade() const {
	return _grade;
}

std::string	Bureaucrat::getName() const {
	return _name;
}


void		Bureaucrat::promote()
{
	if (getGrade() == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
}

void		Bureaucrat::demote()
{
	if (getGrade() == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;
}

std::ostream& operator<<(std::ostream&os, const Bureaucrat& ref) {
	std::cout << ref.getName() << ", bureaucrat grade " << ref.getGrade() << std::endl;
	return os;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Error: Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Error: Grade too low";
}