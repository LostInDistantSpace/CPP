#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# define RED "\033[1;31m"
# define RESET_COLOR "\033[0m"

class PhoneBook {

	private:
		int		_index;
		Contact	_contacts[8];
		void	add();
		void	search();
		void	display_contacts();

	public:
		PhoneBook();
		~PhoneBook();
		void	cmd_loop();
		
};

#endif