#ifndef _BUREAUCRAT_HPP
#define _BUREAUCRAT_HPP

#include <string>
#include <iostream>

# define DEFAULT	"\033[0m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string const name, int grade);
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &other);

		Bureaucrat &operator=(Bureaucrat const &other);

		std::string	const	&getName() const;
		int					getGrade() const;
		void				incrementGrade();
		void				decrementGrade();

		class GradeTooHighException: public std::exception
		{
			public:
				GradeTooHighException();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				GradeTooLowException();
		};
	private:
		std::string const 	name_;
		int					grade_;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bur);

#endif