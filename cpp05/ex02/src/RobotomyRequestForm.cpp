#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form() {}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequest", 72, 45), target_(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other): Form(other) {}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	if (this != &other)
		Form::operator=(other);
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() >= this->getGradeToExecute())
	{
		std::cout << RED << "Bureaucrat " << executor.getName() << 
		" got too low grade to execute RobotomyRequest form" << DEFAULT << std::endl;
		return ;
	}
	std::cout << target_ << " has been robotomized successfully 50% of the time by the bureaucrat " 
	<< executor.getName() << std::endl;
}
