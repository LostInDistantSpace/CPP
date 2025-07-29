#include "Brain.hpp"

Brain::Brain(/* args */)
{
	_index = 0;
	std::cout << "Brian default constructor called" << std::endl;
}

Brain::Brain(const Brain& ref)
{
	_index = 0;
	std::cout << "Brian copy constructor called" << std::endl;
	/* copy loop lmao */
	*this = ref;
}

Brain::~Brain()
{
	std::cout << "Brian default destructor called" << std::endl;
	/* idk girl go eat shit and die or smth */
}

Brain& Brain::operator=(const Brain& ref)
{
	for (int i = 0; i < NB_IDEA; i++)
		_ideas[i] = ref._ideas[i];
	return *this;
}

void	Brain::newIdea(std::string idea)
{
	_ideas[_index] = idea;
	_index = (_index + 1) % NB_IDEA;
}

std::string	Brain::getIdea(int index)
{
	if (index < 0 || index >= NB_IDEA)
	{
		std::cout << "Invalid index for ideas" << std::endl; 
		return "";
	}
	return (_ideas[index]);
}