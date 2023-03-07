/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:15:29 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/07 08:58:34 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// AForm::AForm(void)
// {
// 	std::cout << "Default AForm constructor called" << std::endl;
// }

AForm::AForm(const std::string name, int _sign_grade, int exec_grade, const std::string target) : _name(name), _sign_grade(sign_grade), _exec_grade(exec_grade), _target(target)
{
	_signed_form = false;
	std::cout << _name << "'s constructor called" << std::endl;
}

AForm::AForm(AForm const & src) : _name(src._name), _sign_grade(src._sign_grade), _exec_grade(src._exec_grade)
{
	std::cout << _name << "'s copy constructor called" << std::endl;
	*this = src;
}

AForm::~AForm(void)
{
	std::cout << _name << "'s destructor called" << std::endl;
}

AForm & AForm::operator=(AForm const & rhs)
{
	std::cout << "AForm assignment operator called" << std::endl;
	(void)rhs;
	return (*this);
}

void	AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (getSignGrade() <= bureaucrat.getGrade())
	{
		throw (AForm::GradeTooLowException());
	}
	if (_signed_form == true)
	{
		std::cout << "<ERROR> Form already signed, it can't be signed twice" << std::endl;
		return;
	}
	_signed_form = true;
	std::cout << "-> form successfully signed" << std::endl;
}

const std::string  AForm::getName(void) const
{
	return (_name);
}

int AForm::getSignGrade(void) const
{
	return (_sign_grade);
}

int AForm::getExecGrade(void) const
{
	return (_exec_grade);
}

bool AForm::getSignedForm(void) const
{
	return (_signed_form);
}

const std::string AForm::getTarget(void) const
{
	return (_target);
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("<ERROR> Grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("<ERROR> Grade too low");
}

std::ostream & operator<<(std::ostream & o, AForm const & rhs)
{
	o << "AForm " << rhs.getName() << " has a sign grade of " << rhs.getSignGrade() << std::endl;
	o << "AForm " << rhs.getName() << " has an exec grade of " << rhs.getExecGrade() << std::endl;
	if (rhs.getSignedForm() == true)
		o << "AForm " << rhs.getName() << " is signed" << std::endl;
	else
		o << "AForm " << rhs.getName() << " is not signed" << std::endl;
	return (o);
}