#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>
# include <limits>
# include <cstdio>

# define WIDTH 10

class Contact {

	private:
		std::string	_firstname;
		std::string	_lastname;
		std::string	_nickname;
		std::string	_number;
		std::string	_secret;
		std::string	truncate(std::string str);

	public:
		Contact();
		~Contact();
		void	print_info(int index); 
		void	display();
		void	set_firstname(std::string str); //if I don't want a full copy -> std::string& str
		void	set_lastname(std::string str);
		void	set_nickname(std::string str);
		void	set_number(std::string str);
		void	set_secret(std::string str);
		
};

#endif