#include "Harl.hpp"

Harl::Harl () {}

Harl::~Harl() {}

void Harl::debug( void )
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "Did you know that some monkeys and apes have amazing grip strength ?" << std::endl << std::endl;
}

void Harl::info( void )
{
	std::cout << "[ INFO ]\n";
	std::cout << "It's quite dangerous to be around chimpanzees for exemple !" << std::endl << std::endl;
}

void Harl::warning( void )
{
	std::cout << "[ WARNING ]\n";
	std::cout << "You risk a lot by going inside chimpanzee enlosure at the zoo." << std::endl << std::endl;
}

void Harl::error( void )
{
	std::cout << "[ ERROR ]\n";
	std::cout << "GET OUT OF THE CHIMPANZEE ENCLOSURE YOU FOOL" << std::endl << std::endl;
}

void Harl::complain( std::string level )
{
	void (Harl::*complaint[4])(void) = 
		{&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
		if (level == _level[i])
			return ((this->*complaint[i])());

	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
