#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreate", 145, 137), target_(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other): Form(other) {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	if (this != &other)
		Form::operator=(other);
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	checkSignAndGrade(executor);
	std::cout << "Executing ShrubberyCreate form" << target_ << std::endl;
	std::ofstream file;

	file.open(target_ + "_shrubbery");
	if (file.is_open())
	{
		file << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << std::endl;
		file << "░░░░░░░░░░▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄░░░░░░░░░" << std::endl;
		file << "░░░░░░░░▄▀░░░░░░░░░░░░▄░░░░░░░▀▄░░░░░░░" << std::endl;
		file << "░░░░░░░░█░░▄░░░░▄░░░░░░░░░░░░░░█░░░░░░░" << std::endl;
		file << "░░░░░░░░█░░░░░░░░░░░░▄█▄▄░░▄░░░█░▄▄▄░░░" << std::endl;
		file << "░▄▄▄▄▄░░█░░░░░░▀░░░░▀█░░▀▄░░░░░█▀▀░██░░" << std::endl;
		file << "░██▄▀██▄█░░░▄░░░░░░░██░░░░▀▀▀▀▀░░░░██░░" << std::endl;
		file << "░░▀██▄▀██░░░░░░░░▀░██▀░░░░░░░░░░░░░▀██░" << std::endl;
		file << "░░░░▀████░▀░░░░▄░░░██░░░▄█░░░░▄░▄█░░██░" << std::endl;
		file << "░░░░░░░▀█░░░░▄░░░░░██░░░░▄░░░▄░░▄░░░██░" << std::endl;
		file << "░░░░░░░▄█▄░░░░░░░░░░░▀▄░░▀▀▀▀▀▀▀▀░░▄▀░░" << std::endl;
		file << "░░░░░░█▀▀█████████▀▀▀▀████████████▀░░░░" << std::endl;
		file << "░░░░░░████▀░░███▀░░░░░░▀███░░▀██▀░░░░░░" << std::endl;
		file << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << std::endl;
		file.close();
	}
	std::cout << "Executor: " << executor.getName() << std::endl;
}
