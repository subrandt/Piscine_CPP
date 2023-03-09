/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 10:21:22 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/09 15:11:19 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("Robotomy", 72, 45)
{
	std::cout << "Default Robotomy constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("Robotomy", 72, 45),
	_target(target)
{
	std::cout << "Robotomy's target constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src)
{
	std::cout << "Robotomy's copy constructor called" << std::endl;
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "Robotomy's destructor called" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	std::cout << "Robotomy's assignment operator called" << std::endl;
	(void)rhs;
	return(*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	static int i= 1;
	std::cout << "executing Robotomy, number " << i << std::endl;

	//check if form is signed
	if (getSignedForm() == false)
	{
		std::cout << "form is not signed, it cannot be executed" << std::endl;
		return ;
	}
	
	//check grade of bureaucrat
	if(getExecGrade() < executor.getGrade())
	{
		throw (AForm::GradeTooLowException());
	}
	
	std::cout << "Robotomy makes drilling noises" << std::endl;

	if (i % 2 == 0)
		std::cout << " > " <<_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << " > the robotomy failed" << std::endl;
	i++;
}
