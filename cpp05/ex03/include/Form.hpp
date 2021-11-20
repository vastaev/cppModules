#ifndef _FORM_HPP_
#define _FORM_HPP_

#include <string>
#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(std::string const name, int gradeToSign, int gradeToExecute);
		virtual ~Form();
		Form(const Form &other);

		Form & operator=(const Form &other);

		void				beSigned(Bureaucrat const &bur);
		const std::string	getName() const;
		bool				getIsSigned() const;
		int					getGradeToSign() const;
		int					getGradeToExecute() const;
		virtual void		execute(Bureaucrat const & executor) const = 0;
		void				checkSignAndGrade(Bureaucrat const &bur) const;

		class FormNotSignedException: public std::exception
		{
			public:
				FormNotSignedException();
		};
		class GradeTooHighException: public std::exception
		{
			public:
				GradeTooHighException(bool which);
		};
		class GradeTooLowException: public std::exception
		{
			public:
				GradeTooLowException(bool which);
		};
	private:
		const std::string	name_;
		bool				isSigned_;
		const int			gradeToSign_;
		const int			gradeToExecute_;
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif