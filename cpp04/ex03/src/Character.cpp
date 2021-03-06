#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character(std::string name): name_(name) 
{
	for (int i = 0; i < 4; i++)
		slots_[i] = 0;
}

Character::~Character() 
{
	for (int i = 0; i < 4; i++)
	{
		if (slots_[i])
			delete slots_[i];
	}
}

Character::Character(Character const &other)
{
	name_ = other.name_;
	for (int i = 0; i < 4; i++)
	{
		if (other.slots_[i])
		{
			std::string type = other.slots_[i]->getType();
			if (type == "ice")
				slots_[i] = new Ice();
			else
				slots_[i] = new Cure();
		}
	}
}

Character &Character::operator=(Character const &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (slots_[i])
				delete slots_[i];
		}
		name_ = other.name_;
		for (int i = 0; i < 4; i++)
		{
			if (other.slots_[i])
			{
				std::string type = other.slots_[i]->getType();
				if (type == "ice")
					slots_[i] = new Ice();
				else
					slots_[i] = new Cure();
			}
		}
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