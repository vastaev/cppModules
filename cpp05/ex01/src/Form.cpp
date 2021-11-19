#include "Form.hpp"

Form::Form(): name_("Unkown"), isSigned_(false), gradeToSign_(42), gradeToExecute_(21) {}

Form::Form(std::string const name, int gradeToSign, int gradeToExecute):
	name_(name), gradeToSign_(gradeToSign), gradeToExecute_(gradeToExecute)
{
	if (gradeToSign_ < 1)
		throw GradeTooHighException(1);
	else if (gradeToSign_ > 150)
		throw GradeTooLowException(1);
	if (gradeToSign_ < 1)
		throw GradeTooHighException(0);
	else if (gradeToSign_ > 150)
		throw GradeTooLowException(0);
}

Form::~Form() {}

Form::Form(const Form &other): name_(other.name_), isSigned_(other.isSigned_),
	gradeToSign_(other.gradeToSign_), gradeToExecute_(other.gradeToExecute_) {}

Form & Form::operator=(const Form &other)
{
	if (this == &other)
	{
		const_cast<std::string&>(name_) = other.name_;
		isSigned_ = other.isSigned_;
		const_cast<int&>(gradeToSign_) = other.gradeToSign_;
		const_cast<int&>(gradeToExecute_) = other.gradeToExecute_;
	}
	return (*this);
}

void Form::beSigned(Bureaucrat const &bur)
{
	if (bur.getGrade() <= gradeToSign_)
	{
		isSigned_ = true;
		std::cout << "Form was successfuly signed by bureaucrat" << bur.getName() 
		<< std::endl;
	}
	else
		throw Form::GradeTooLowException(1);
}

const std::string Form::getName() const
{
	return (name_);
}

bool Form::getIsSigned() const
{
	return (isSigned_);
}

int Form::getGradeToSign() const
{
	return (gradeToSign_);
}

int Form::getGradeToExecute() const
{
	return (gradeToExecute_);
}

void Form::makeFormSigned()
{
	isSigned_ = true;
}

Form::GradeTooHighException::GradeTooHighException(bool which)
{
	if (which == 1)
		std::cout << "GradeTooHigh Exception(Sign)" << std::endl;
	else
		std::cout << "GradeTooHigh Exception(Execute)" << std::endl;
}

Form::GradeTooLowException::GradeTooLowException(bool which)
{
	if (which == 1)
		std::cout << "GradeTooLow Exception(Sign)" << std::endl;
	else
		std::cout << "GradeTooLow Exception(Execute)" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
	out << "Form info: " 
	<< std::endl << "Name: " << form.getName() << std::endl
	<< "Is signed: " << form.getIsSigned() << std::endl 
	<< "Grade to Sign: " << form.getGradeToSign() << std::endl
	<< "Grade to Execute: " << form.getGradeToExecute() << std::endl;
	return (out);
}