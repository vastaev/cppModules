#ifndef _PRESIDENTIALPARDONFORM_HPP_
#define _PRESIDENTIALPARDONFORM_HPP_

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const &other);

		PresidentialPardonForm & operator=(PresidentialPardonForm const &other);

		void	execute(Bureaucrat const & executor) const;
	private:
		std::string	target_;
};

#endif