#include "PhoneBook.hpp"
#include <limits>

PhoneBook::PhoneBook() { _index = 0; }

PhoneBook::~PhoneBook() {}

void	PhoneBook::display_contacts(void)
{
	std::cout	<<	"|-------------------------------------------|" << std::endl;
	std::cout	<<	"|";
	std::cout	<<	std::setw(10)	<<	"Index" 		<< "|";
	std::cout	<<	std::setw(10)	<<	"First name"	<< "|";
	std::cout	<<	std::setw(10)	<<	"Last name"		<< "|";
	std::cout	<<	std::setw(10)	<<	"Nickname"		<< "|" << std::endl;
	std::cout	<<	"|-------------------------------------------|" << std::endl;
	for (int i = 0; i < 8; i++)
		_contacts[i].print_info(i);
	std::cout	<<	"|-------------------------------------------|" << std::endl;
}

bool	is_printable(std::string str)
{
	for (std::string::iterator it = str.begin(); it != str.end(); it++)
	{
		if (!std::isprint(*it))
			return (false);
	}
	return (true);
}

std::string	get_input(std::string prompt)
{
	std::string	input;

	std::cout << prompt;
	std::getline(std::cin, input);
	if (std::cin.eof())
		exit(1);
	while (input.empty() || !is_printable(input))
	{
		if (input.empty())
			std::cout << RED << "Field can not be empty, try again" << RESET_COLOR << std::endl;
		else if (!is_printable(input))
			std::cout << RED << "Input contains non printable characters, try again" << RESET_COLOR << std::endl;
		std::cout << prompt;
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(1);
	}
	return (input);
}

void	PhoneBook::add(void)
{
	_contacts[_index % 8].set_firstname(get_input("First Name : "));
	_contacts[_index % 8].set_lastname(get_input("Last Name : "));
	_contacts[_index % 8].set_nickname(get_input("Nickname : "));
	_contacts[_index % 8].set_number(get_input("Phone Number : "));
	_contacts[_index % 8].set_secret(get_input("Darkest Secret : "));
	_index++;
	std::cout << "Contact added !" << std::endl << std::endl;
}

void	PhoneBook::search()
{
	std::string	input;
	int			index;

	display_contacts();
	input = get_input("Index : ");
	index = std::atoi(input.c_str());
	if (index > 8 || index <= 0)
		std::cout << "Error: Invalid index" << std::endl << std::endl;
	else if (_index < index)
		std::cout << "Error: Contact doesn't exist" << std::endl << std::endl;
	else
		_contacts[index - 1].display();
}

void	PhoneBook::cmd_loop()
{
	std::string	cmd;

	std::cout << "Welcome to PhoneBook !" << std::endl;
	std::cout << "You can :" << std::endl;
	std::cout << "- ADD new contacts" <<std::endl;
	std::cout << "- SEARCH a contact in your contact list" << std::endl;
	std::cout << "- EXIT the program" << std::endl << std::endl;
	while (std::getline(std::cin, cmd))
	{
		if (!cmd.compare("ADD"))
			add();
		else if (!cmd.compare("SEARCH"))
			search();
		else if (!cmd.compare("EXIT"))
		{
			std::cout << "Program closing, contacts deleted." << std::endl;
			return ;
		}
	}
}