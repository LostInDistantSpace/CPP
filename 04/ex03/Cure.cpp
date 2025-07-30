#include "Cure.hpp"

// type = "cure" lowercase

Cure::Cure() {}

Cure::Cure(const Cure& ref)
{
	_type = ref.getType();
}

Cure::~Cure() {}

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
	Cure* clone = new Cure(*this);
	return (clone);
}