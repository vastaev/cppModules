#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): name_(name)
{
	if (grade > 150)
		throw GradeTooHighException();
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(Bureaucrat const &other): name_(other.name_), grade_(other.grade_) {}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	if (this != &other)
	{
		name_ = other.name_;
		grade_ = other.grade_;
	}
	return (*this);
}

std::string	const &Bureaucrat::getName() const
{
	return (name_);
}

int	Bureaucrat::getGrade() const
{
	return (grade_);
}


Bureaucrat::GradeTooHighException::GradeTooHighException()
{
	std::cout << "Grade is too high" << std::endl;
}