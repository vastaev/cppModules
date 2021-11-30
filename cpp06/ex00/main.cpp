#include <string>
#include <iostream>
#include <sstream>
#include <limits>

void	toChar(long long num)
{
	std::cout << "char: ";
	if (num < CHAR_MIN || num > CHAR_MAX)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (num < 33 || num > 126)
	{
		std::cout << "Non displayable" << std::endl;
		return ;
	}
	char out = static_cast<char>(num);
	std::cout << "'" << out << "'" << std::endl;
}

void	toInt(long long num)
{
	std::cout << "int: ";
	if (num < INT_MIN || num > INT_MAX)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	int out = static_cast<int>(num);
	std::cout << out << std::endl;
}

void	toFloat(double fnum)
{
	std::cout << "float: ";
	float out = static_cast<float>(fnum);
	std::cout << out << "f" << std::endl;
}

void	toDouble(double fnum)
{
	std::cout << "double: ";
	std::cout << fnum << std::endl;
}

int main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	std::string arg = argv[1];
	int lastArgChar = arg.length() - 1;
	if (arg[lastArgChar] == 'f')
		arg.pop_back();
	long long num;
	std::istringstream(arg) >> num;
	toChar(num);
	toInt(num);

	double fnum;
	std::istringstream(arg) >> fnum;
	toFloat(fnum);
	toDouble(fnum);
	return (0);
}