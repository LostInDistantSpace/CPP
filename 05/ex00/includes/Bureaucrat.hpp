#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
private:
	int	_grade;
	const std::string _name;
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

#endif