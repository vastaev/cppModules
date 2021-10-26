#include "../include/Karen.hpp"

Karen::Karen() {};

Karen::~Karen() {};

void Karen::complain( std::string level )
{
	void	(Karen::*f[])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string commands[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i = 0;
	for (; i < 4 && level != commands[i]; ++i) {}
	switch (i)
	{
	case 0:
		(this->*f[0])();
	case 1:
		(this->*f[1])();
	case 2:
		(this->*f[2])();
	case 3:
		(this->*f[3])();
		break ;
	default:
		std::cout << "Non-existing action, do you wanna fight?!?!!!!" << std::endl;
	}
}

void Karen::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "Do you have problems???? Then fix with your brain!" << std::endl;
}

void Karen::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "Hmmm, I think you can find information in the internet!!!!" << std::endl;
}

void Karen::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "Hey buddy, I think you've got the wrong door, the leather club's two blocks down." << std::endl;
}

void Karen::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "You have an error, do somethig!!!!!" << std::endl;
}
