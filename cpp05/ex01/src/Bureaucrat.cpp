#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name_("Unkown"), grade_(42) {}

Bureaucrat::Bureaucrat(std::string const name, int grade): name_(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	grade_ = grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(Bureaucrat const &other): name_(other.name_), grade_(other.grade_) {}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &other)
{
	if (this != &other)
	{
		const_cast<std::string&>(name_) = other.name_;
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

void	Bureaucrat::incrementGrade()
{
	if (grade_ == 1)
		throw GradeTooHighException();
	this->grade_--;
	std::cout << "Incrementing grade of bureaucrat " << this->name_ <<
	" to " << this->grade_ << std::endl;
}

void	Bureaucrat::decrementGrade()
{
	if (grade_ == 150)
		throw GradeTooLowException();
	this->grade_++;
	std::cout << "Decrementing grade of bureaucrat " << this->name_ <<
	" to " << this->grade_ << std::endl;
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << GREEN "Bureaucrat " << this->getName() << " signs form \""
		<< form.getName() << "\"" DEFAULT << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << RED "Bureaucrat " << this->getName() << " cannot sign form \"" 
		<< form.getName() << "\" because his grade is too low (" << 
		"his grade is " << this->getGrade() << ", needed " << form.getGradeToSign() << DEFAULT << std::endl;
	}
}


Bureaucrat::GradeTooHighException::GradeTooHighException()
{
	std::cout << "Bureaucrat grade is too high" << std::endl;
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
	std::cout << "Bureaucrat grade is too low" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bur)
{
	out << "Bureaucrat " << bur.getName() << " grade = " << bur.getGrade() << std::endl;
	return (out);
}