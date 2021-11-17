#ifndef _BUREAUCRAT_HPP
#define _BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &other);

		Bureaucrat &operator=(Bureaucrat const &other);

		std::string	const	&getName() const;
		int					getGrade() const;

		class GradeTooHighException: public std::exception
		{
			public:
				GradeTooHighException();

		};
	private:
		std::string	name_;
		int			grade_;
};

#endif