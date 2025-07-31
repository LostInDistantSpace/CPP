#include "Cure.hpp"

// type = "cure" lowercase

Cure::Cure()
{
	_type = "cure";
}

Cure::Cure(const Cure& ref)
{
	_type = ref.getType();
}

Cure::~Cure() { std::cout << "Deleted cure" << std::endl; }

Cure& Cure::operator=(const Cure& ref)
{
	_type = ref.getType();
	return *this;
}

void	Cure::use(ICharacter& ref)
{
	std::cout << "* heals " << ref.getName() << "'s wounds *" << std::endl;
}

Cure* Cure::clone() const
{
	return (new Cure(*this));
}