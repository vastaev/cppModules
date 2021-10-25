#include <string>
#include <iostream>

int	main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;
	std::cout << "string address = " << &brain << std::endl;
	std::cout << "stringPTR = " << stringPTR << std::endl;
	std::cout << "stringREF = " << &stringREF << std::endl;
	std::cout << "string using ptr = " << *stringPTR << std::endl;
	std::cout << "string using ref = " << stringREF << std::endl;
}