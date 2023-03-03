/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:18:15 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/03 16:40:38 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	std::cout << "Default Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	if (grade < 1)
	{
		throw (Bureaucrat::GradeTooHighException());
	}
	if (grade > 150)
	{
		throw (Bureaucrat::GradeTooLowException());
	}
	else
		_grade = grade;
	std::cout << _name << "'s name and grade constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	std::cout << _name << "'s copy constructor called" << std::endl;
	*this = src;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << _name << "'s destructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	std::cout << "Bureaucrat assignment operator called" << std::endl;
	if (this != &rhs)
	{
		_grade = rhs._grade;
	}
	return (*this);
}

const std::string  Bureaucrat::getName(void) const
{
	return (_name);
}

int Bureaucrat::getGrade(void) const
{
	return (_grade);
}

int Bureaucrat::upGrade(void)
{
	if ((_grade - 1) < 1)
	{
		throw (Bureaucrat::GradeTooHighException());
	}
	if ((_grade - 1) > 150)
	{
		throw (Bureaucrat::GradeTooLowException());
	}
	else
	{
		_grade = _grade - 1;
		std::cout << _name << " was upgraded to grade " << _grade <<std::endl;
	}
	return (_grade);
}

int Bureaucrat::downGrade(void)
{
	if ((_grade + 1) < 1)
	{
		throw (Bureaucrat::GradeTooHighException());
	}
	if ((_grade + 1) > 150)
	{
		throw (Bureaucrat::GradeTooLowException());
	}
	else
	{
		_grade = _grade + 1;
		std::cout << _name << " was downgraded to grade " << _grade <<std::endl;
	}
	return (_grade);
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << "Bureaucrat " << rhs.getName() << " has a grade " << rhs.getGrade() << std::endl;
	return (o);
}