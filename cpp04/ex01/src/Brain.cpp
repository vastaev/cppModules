#include "../include/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructor" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor" << std::endl;
}

Brain::Brain(Brain const &other)
{
	std::cout << "Brain Copy Constructor" << std::endl;
	*this = other;
}

Brain& Brain::operator=(Brain const &other)
{
	std::cout << "Brain = operator" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			ideas_[i] = other.ideas_[i];
	}
	return (*this);
}