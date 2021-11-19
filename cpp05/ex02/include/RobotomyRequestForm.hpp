#ifndef _ROBOTOMYREQUESTFORM_HPP_
#define _ROBOTOMYREQUESTFORM_HPP_

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const &other);

		RobotomyRequestForm & operator=(RobotomyRequestForm const &other);

		void	execute(Bureaucrat const & executor) const;
	private:
		std::string	target_;
};

#endif