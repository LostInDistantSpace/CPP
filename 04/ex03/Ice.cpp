#include "Ice.hpp"

// type = "ice" in lowercase

Ice::Ice() {}

Ice::Ice(const Ice& ref)
{
	*this = ref;
}

Ice::~Ice() {}

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
	Ice* clone = new Ice(*this);
	return (clone);
}