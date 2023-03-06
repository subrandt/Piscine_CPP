/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:15:29 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/06 17:08:13 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Form::Form(void)
// {
// 	std::cout << "Default Form constructor called" << std::endl;
// }

Form::Form(const std::string name, int sign_grade, int exec_grade) : _name(name), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	_signed_form = false;
	std::cout << _name << "'s constructor called" << std::endl;
}

Form::Form(Form const & src) : _name(src._name), _sign_grade(src._sign_grade), _exec_grade(src._exec_grade)
{
	std::cout << _name << "'s copy constructor called" << std::endl;
	*this = src;
}

Form::~Form(void)
{
	std::cout << _name << "'s destructor called" << std::endl;
}

Form & Form::operator=(Form const & rhs)
{
	std::cout << "Form assignment operator called" << std::endl;
	(void)rhs;
	return (*this);
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (getSignGrade() <= bureaucrat.getGrade())
	{
		throw (Form::GradeTooLowException());
	}
	_signed_form = true;
	std::cout << "-> form successfully signed" << std::endl;
}

const std::string  Form::getName(void) const
{
	return (_name);
}

int Form::getSignGrade(void) const
{
	return (_sign_grade);
}

int Form::getExecGrade(void) const
{
	return (_exec_grade);
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream & operator<<(std::ostream & o, Form const & rhs)
{
	o << "Form " << rhs.getName() << " has a sign grade of " << rhs.getSignGrade() << std::endl;
	o << "Form " << rhs.getName() << " has an exec grade of " << rhs.getExecGrade() << std::endl;
	return (o);
}