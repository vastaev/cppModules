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
	std::cout << std::fixed << out << "f" << std::endl;
}

void	toDouble(double fnum)
{
	std::cout << "double: ";
	std::cout << std::fixed << fnum << std::endl;
}

void	validation(long long &num, double &fnum, std::string const &arg)
{
	if (arg == "nan" || arg == "-inf" || arg == "+inf" || arg == "inf")
	{
		num = 2147483648;
	}
	else
	{
		int	dots = 0;
		for (int i = 0; arg[i] != '\0'; i++)
		{
			if (arg[i] == '.')
				dots++;
			if ((!isdigit(arg[i]) && arg[i] != 'e' && arg[i] != '+' && arg[i] != '-' && arg[i] != '.') || dots > 1)
			{
				fnum = std::numeric_limits<double>::quiet_NaN();
				num = 2147483648;
				return ;
			}
		}
	}
	if (fnum > static_cast<int>(num + 1))
		num = 2147483648;

}

int main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	std::string arg = argv[1];
	int lastArgChar = arg.length() - 1;
	if (isdigit(arg[lastArgChar - 1]) && arg[lastArgChar] == 'f')
		arg.pop_back();
	long long num;
	std::istringstream(arg) >> num;
	double fnum;
	std::istringstream(arg) >> fnum;
	validation(num, fnum, arg);
	toChar(num);
	toInt(num);
	std::cout.precision(1);
	toFloat(fnum);
	toDouble(fnum);
	return (0);
}