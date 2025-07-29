#pragma once

#include <string>
#include <iostream>
#define NB_IDEA 100

class Brain
{
private:
	/* data */
	unsigned int	_index;
	std::string		_ideas[NB_IDEA];
	
public:
	Brain(/* args */);
	Brain(const Brain& ref);
	~Brain();

	Brain& operator=(const Brain& ref);
	void	newIdea(std::string idea);
	std::string	getIdea(int index);
};