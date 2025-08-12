#pragma once

#include <iomanip>
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	Form();
	bool _signed;
	const std::string _name;
	const int _sign_grade;
	const int _exec_grade;

	void	notSignable(Bureaucrat, std::string);
	/* data */
public:
	Form(int sign_grade, int exec_grade, std::string name);
	Form(const Form& other);
	~Form();

	Form&		operator=(const Form& other);
	bool		isSigned() const;
	int			getSignGrade() const;
	int			getExecGrade() const;
	std::string	getName() const;

	void		beSigned(Bureaucrat bur);

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

	class FormAlreadySigned : public std::exception 
	{
		public:
			const char*	what() const throw();
	};
};


std::ostream& operator<<(std::ostream&os, const Form& ref);