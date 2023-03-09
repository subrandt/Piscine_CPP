/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:21:10 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/09 15:29:33 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("Presidential", 25, 5)
{
	std::cout << "Default Presidential constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("Presidential", 25, 5),
	_target(target)
{
	std::cout << "Presidential's target constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm(src)
{
	std::cout << "Presidential's copy constructor called" << std::endl;
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "Presidential's destructor called" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	std::cout << "Presidential's assignment operator called" << std::endl;
	(void)rhs;
	return(*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
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
	
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;

}
