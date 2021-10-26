#include "Karen.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "I think you should give me something" << std::endl;
		return (1);
	}
	Karen Karen;
	std::cout << "-----------" << std::endl;
	Karen.complain(argv[1]);
	std::cout << "-----------" << std::endl;
	return (0);
}