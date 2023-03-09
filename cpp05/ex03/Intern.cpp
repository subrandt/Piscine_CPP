/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:58:18 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/09 17:04:30 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Default Intern constructor called" << std::endl;
}

Intern::Intern(Intern const & src)
{
	std::cout << _name << "'s copy constructor called" << std::endl;
	*this = src;
}

Intern::~Intern(void)
{
	std::cout << _name << "'s destructor called" << std::endl;
}

Intern & Intern::operator=(Intern const & rhs)
{
	std::cout << "Intern assignment operator called" << std::endl;
	if (this != &rhs)
	{
		_grade = rhs._grade;
	}
	return (*this);
}

Form& 	Form::makeForm(std::string form_name, std::string target)
{

	return (Form())

}

// std::ostream & operator<<(std::ostream & o, Intern const & rhs)
// {
// 	o << "# Intern creates "  << std::endl;
// 	return (o);
// }