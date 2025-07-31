#include "Ice.hpp"

// type = "ice" in lowercase

Ice::Ice()
{
	_type = "ice";
}

Ice::Ice(const Ice& ref)
{
	*this = ref;
}

Ice::~Ice() { std::cout << "Deleted ice" << std::endl; }

Ice& Ice::operator=(const Ice& ref)
{
	_type = ref.getType();
	return *this;
}

void	Ice::use(ICharacter& ref)
{
	std::cout << "* shoots an ice bolt at " << ref.getName() << " *" << std::endl;
}

Ice* Ice::clone() const
{
	return (new Ice(*this));
}