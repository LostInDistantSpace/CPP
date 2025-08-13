#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Error: Grade too high, maximum grade : 1";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Error: Grade too low, minimum grade : 150";
}

Bureaucrat::Bureaucrat() : _name("Default bureaucrat"), _grade(150) {}

// Default Constructor
Bureaucrat::Bureaucrat(int grade, std::string name) :  _name(name), _grade(grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

// Copy Constructor
Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other.getName()) {
	*this = other;
}

// Copy Assignment Operator
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	if (this != &other)
		_grade = other.getGrade();
	return *this;
}

void	Bureaucrat::signForm(AForm& form) {
	form.beSigned(*this);
}

void	Bureaucrat::executeForm(const AForm& form) {
	try
	{
		std::cout << getName() << " executed " << form.getName() << std::endl;
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << getName() << " could not execute " << form.getName() << '\n';
		std::cerr << e.what() << std::endl;
	}
}

// Destructor
Bureaucrat::~Bureaucrat() {}

int	Bureaucrat::getGrade() const {
	return _grade;
}

std::string	Bureaucrat::getName() const {
	return _name;
}

std::ostream& operator<<(std::ostream&os, const Bureaucrat& ref) {
	std::cout << ref.getName() << ", grade " << ref.getGrade();
	return os;
}