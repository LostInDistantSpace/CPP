#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Zombie {
	private:
		Zombie ( void );
		std::string _name;

	public:
		Zombie (std::string name);
		~Zombie ( void );
		void	announce ( void );
};

void 	randomChump ( std::string name );
Zombie* newZombie ( std::string name );

#endif