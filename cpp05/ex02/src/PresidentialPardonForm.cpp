#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form() {}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("RobotomyRequest", 72, 45), target_(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other): Form(other) {}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	if (this != &other)
		Form::operator=(other);
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() >= this->getGradeToExecute())
	{
		std::cout << RED << "Bureaucrat " << executor.getName() << 
		" got too low grade to execute RobotomyRequest form" << DEFAULT << std::endl;
		return ;
	}
	std::cout << target_ << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
