#ifndef _BRAIN_HPP_
#define _BRAIN_HPP_ 

#include "Libs.hpp"

class Brain
{
	public:
		Brain();
		~Brain();
		Brain(Brain const &other);

		Brain& operator=(Brain const &other);

	private:
		std::string ideas_[100];
};

#endif