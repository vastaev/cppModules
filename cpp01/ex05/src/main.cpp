#include "Karen.hpp"

int	main(void)
{
	Karen karen;

	std::cout << "___________" << std::endl;
	karen.complain("DEBUG");
	std::cout << "___________" << std::endl;
	karen.complain("INFO");
	std::cout << "___________" << std::endl;
	karen.complain("WARNING");
	std::cout << "___________" << std::endl;
	karen.complain("ERROR");
	std::cout << "___________" << std::endl;
	karen.complain("42");
	std::cout << "___________" << std::endl;
	return (0);
}
