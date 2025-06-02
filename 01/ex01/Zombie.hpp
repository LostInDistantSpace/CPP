#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Zombie {
	private:
		std::string _name;

	public:
		Zombie (std::string name);
		Zombie ( void );
		~Zombie ( void );
		void	announce ( void );
		void	setName(std::string str);
};

Zombie*	zombieHorde( int N, std::string name );

#endif