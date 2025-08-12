#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string _name;
	int	_grade;
public:
	Bureaucrat();
	Bureaucrat(int grade, std::string name);
	Bureaucrat(const Bureaucrat& other);
	~Bureaucrat();

	Bureaucrat&	operator=(const Bureaucrat& other);
	int			getGrade() const;
	std::string	getName() const;
	void		promote();
	void		demote();
	void		signForm(Form& form);

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
};

std::ostream& operator<<(std::ostream&os, const Bureaucrat& ref);

#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
#define ORANGE "\033[38;5;208m"
#define VIOLET "\033[38;5;129m"
#define PINK   "\033[38;5;200m"
#define HOTPINK "\033[38;2;255;105;180m"
#define SKYBLUE "\033[38;2;135;206;235m"
#define LIME    "\033[38;2;50;205;50m"

#define BOLD     "\033[1m"
#define RESET   "\033[0m"

#endif