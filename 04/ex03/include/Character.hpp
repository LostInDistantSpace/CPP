#pragma	once

#include "ICharacter.hpp"
#include <vector>

class Character : public ICharacter
{
private:
	Character();
	std::string	_name;
	AMateria*	_inventory[4];
	/* data */
	AMateria*	_floor[100];
	int			_idx;
public:
	Character(std::string name);
	Character(const Character& ref);
	~Character();
	// Copy Assignment Operator
	Character& operator=(const Character& other);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};