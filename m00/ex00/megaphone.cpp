#include <iostream>

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
					std::cout << (char)(argv[i][j] - 32);
				else
					std::cout << argv[i][j];
			}
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;	
	return (0);
}