#pragma once

#include <iomanip>
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	AForm();
	bool _signed;
	const std::string _name;
	const std::string _target;
	const int _sign_grade;
	const int _exec_grade;

	void	notSignable(Bureaucrat, std::string);
	/* data */
public:
	AForm(int sign_grade, int exec_grade, std::string name, std::string target);
	AForm(const AForm& other);
	virtual ~AForm();

	AForm&		operator=(const AForm& other);
	bool		isSigned() const;
	int			getSignGrade() const;
	int			getExecGrade() const;
	std::string	getName() const;
	std::string	getTarget() const;

	void		beSigned(Bureaucrat bur);

	virtual void	execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException : public std::exception 
	{
		public:
			const char*	what() const throw();
	};

	class GradeTooLowException : public std::exception 
	{
		public:
			const char*	what() const throw();
	};

	class AlreadySignedException : public std::exception 
	{
		public:
			const char*	what() const throw();
	};

	class NotSignedException : public std::exception 
	{
		public:
			const char*	what() const throw();
	};
};


std::ostream& operator<<(std::ostream&os, const AForm& ref);