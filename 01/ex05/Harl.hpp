#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Harl {
private:
	Harl();

public:
	std::string getType();
	void		setType(std::string);
};

#endif