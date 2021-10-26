# include <iostream>
# include <iomanip>
# include <string>
# include <fstream>

int	error_return(void)
{
	std::cout << "Error" << std::endl;
	return (1);	
}

int	input_validation(int argc, char *argv[])
{
	if (argc != 4)
		return (1);
	if (std::string(argv[2]) == "" || std::string(argv[3]) == "")
		return (1);
	return (0);
}

void	replace(std::string s1, std::string s2, std::string &fileContent)
{
	size_t s1Len = s1.length();
	size_t found = 0;
	while (42)
	{
		found = fileContent.find(s1);
		if (found == std::string::npos)
			break ;
		fileContent.erase(found, s1Len);
		fileContent.insert(found, s2);
	}
}

int	main(int argc, char *argv[])
{
	if (input_validation(argc, argv) == 1)
		return (error_return());
	std::string s1 = std::string(argv[2]);
	std::string s2 = std::string(argv[3]);
	std::ifstream fileIN(argv[1]);
	if (fileIN.is_open() == 0)
		return (error_return());
	std::string buf;
	std::string fileContent;
	while (getline(fileIN, buf))
		fileContent += buf + "\n";
	fileIN.close();
	replace(s1, s2, fileContent);
	std::ofstream	fileOUT(std::string(argv[1]) + ".replace");
	fileOUT << fileContent;
	fileOUT.close();
	return (0);
}