#include "Contact.hpp"

Contact::Contact() {
}

Contact::~Contact() {
}

void	Contact::display()
{
	std::cout	<<	"First name	: "	<<	_firstname	<< std::endl;
	std::cout	<<	"Last name	: "	<<	_lastname	<< std::endl;
	std::cout	<<	"Nickname	: "	<<	_nickname	<< std::endl;
	std::cout	<<	"Phone Number	: "	<<	_number	<< std::endl;
	std::cout	<<	"Darkest Secret	: "	<<	_secret	<< std::endl << std::endl;
}

std::string	Contact::truncate(std::string str)
{
	if (str.length() > WIDTH)
		return (str.substr(0, WIDTH - 1) + ".");
	return (str);
}

void	Contact::print_info(int index)
{
	std::cout	<<	"|";
	std::cout	<<	std::setw(10)	<<	index + 1				<< "|";
	std::cout	<<	std::setw(10)	<<	truncate(_firstname)	<< "|";
	std::cout	<<	std::setw(10)	<<	truncate(_lastname)		<< "|";
	std::cout	<<	std::setw(10)	<<	truncate(_nickname)		<< "|" << std::endl;
}

void Contact::set_firstname(std::string str)
{
	_firstname = str;
}

void Contact::set_lastname(std::string str)
{
	_lastname = str;
}

void Contact::set_nickname(std::string str)
{
	_nickname = str;
}
void Contact::set_number(std::string str)
{
	_number = str;
	
}
void Contact::set_secret(std::string str)
{
	_secret = str;
}
