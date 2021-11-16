#include "Character.hpp"

Character::Character(std::string name): name_(name) {}

Character::~Character() {}

Character::Character(Character const &other): name_(other.name_)
{
	*this = other;
}

Character &Character::operator=(Character const &other)
{
	if (this != &other)
	{
		name_ = other.name_;
		for (int i = 0; i < 4; i++)
			slots_[i] = other.slots_[i];
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (name_);
}

void Character::equip(AMateria* m)
{
	if (m == 0)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (slots_[i] == 0)
		{
			slots_[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	else if (slots_[idx] == 0)
		return ;
	else
		slots_[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if ((void *)&target == 0)
		return ;
	else if (idx < 0 || idx > 3)
		return ;
	else if (slots_[idx] == 0)
		return ;
	slots_[idx]->use(target);
	delete slots_[idx];
	slots_[idx] = 0;
}