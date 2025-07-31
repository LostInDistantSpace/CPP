#include "AMateria.hpp"

AMateria::AMateria() : _type("") {}

AMateria::AMateria(std::string const& type) : _type(type)
{
}

AMateria::AMateria(const AMateria& ref) : _type(ref.getType()) {}

AMateria::~AMateria() {}

AMateria& AMateria::operator=(const AMateria& ref)
{
	_type = ref.getType();
	return *this;
}

std::string const & AMateria::getType() const
{
	return _type;
} //Returns the materia type

void AMateria::use(ICharacter& target)
{
	std::cout << "* Materia used on " << target.getName() << " *" << std::endl;
}