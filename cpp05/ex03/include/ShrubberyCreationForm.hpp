#ifndef _SHRUBBERYCREATIONFORM_HPP_
#define _SHRUBBERYCREATIONFORM_HPP_

#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const &other);

		ShrubberyCreationForm & operator=(ShrubberyCreationForm const &other);

		void	execute(Bureaucrat const & executor) const;
	private:
		std::string	target_;
};

#endif