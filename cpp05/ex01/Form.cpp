/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:15:29 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/03 18:16:20 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void)
{
	std::cout << "Default Form constructor called" << std::endl;
}

Form::Form(const std::string name) : _name(name)
{
	if (sign_grade < 1)
	{
		throw (Form::GradeTooHighException());
	}
	if (sign grade > 150)
	{
		throw (Form::GradeTooLowException());
	}
	else
		_grade = grade;
	std::cout << _name << "'s name and grade constructor called" << std::endl;
}

Form::Form(Form const & src)
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
	if (this != &rhs)
	{
		_grade = rhs._grade;
	}
	return (*this);
}

const std::string  Form::getName(void) const
{
	return (_name);
}

int Form::getGrade(void) const
{
	return (_grade);
}

int Form::upGrade(void)
{
	if ((_grade - 1) < 1)
	{
		throw (Form::GradeTooHighException());
	}
	if ((_grade - 1) > 150)
	{
		throw (Form::GradeTooLowException());
	}
	else
	{
		_grade = _grade - 1;
		std::cout << _name << " was upgraded to grade " << _grade <<std::endl;
	}
	return (_grade);
}

int Form::downGrade(void)
{
	if ((_grade + 1) < 1)
	{
		throw (Form::GradeTooHighException());
	}
	if ((_grade + 1) > 150)
	{
		throw (Form::GradeTooLowException());
	}
	else
	{
		_grade = _grade + 1;
		std::cout << _name << " was downgraded to grade " << _grade <<std::endl;
	}
	return (_grade);
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
	o << "Form " << rhs.getName() << " has a grade " << rhs.getGrade() << std::endl;
	return (o);
}