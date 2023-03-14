/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:15:29 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/14 15:57:34 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("default_name"), _sign_grade(150), _exec_grade(150)
{
	std::cout << "Default Form constructor called" << std::endl;
}

Form::Form(const std::string name, int sign_grade, int exec_grade) : _name(name), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	_signed_form = false;
	if (sign_grade < 1 || exec_grade < 1)
	{
		throw (Form::GradeTooHighException());
	}
	if (sign_grade > 150 || exec_grade > 150)
	{
		throw (Form::GradeTooLowException());
	}
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
	if (_signed_form == true)
	{
		std::cout << "<ERROR> Form already signed, it can't be signed twice" << std::endl;
		return;
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

bool Form::getSignedForm(void) const
{
	return (_signed_form);
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("<ERROR> Grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("<ERROR> Grade too low");
}

std::ostream & operator<<(std::ostream & o, Form const & rhs)
{
	o << "Form " << rhs.getName() << " has a sign grade of " << rhs.getSignGrade() << std::endl;
	o << "Form " << rhs.getName() << " has an exec grade of " << rhs.getExecGrade() << std::endl;
	if (rhs.getSignedForm() == true)
		o << "Form " << rhs.getName() << " is signed" << std::endl;
	else
		o << "Form " << rhs.getName() << " is not signed" << std::endl;
	return (o);
}
