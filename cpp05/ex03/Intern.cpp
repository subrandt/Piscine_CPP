/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:58:18 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/10 17:02:15 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void)
{
	std::cout << "Default Intern constructor called" << std::endl;
}

Intern::Intern(Intern const & src)
{
	std::cout << "Interns's copy constructor called" << std::endl;
	*this = src;
}

Intern::~Intern(void)
{
	std::cout << "Intern's destructor called" << std::endl;
}

Intern & Intern::operator=(Intern const & rhs)
{
	std::cout << "Intern assignment operator called" << std::endl;
	(void)rhs;
	return (*this);
}

AForm* 	Intern::makeForm(std::string form_name, const std::string target)
{
	int i;
	std::string	choose_form[3] = {"shrubbery creation", 
			"robotomy request", "presidential pardon"};
	for (i = 0; i < 3; i++)
	{
		if (choose_form[i].compare(form_name) == 0)
			break ;
	}
	switch(i)
	{
		case 0:
			return (new ShrubberyCreationForm(target));
			break ;

		case 1:
			return (new RobotomyRequestForm(target));
			break ;

		case 2:
			return (new PresidentialPardonForm(target));
			break ;

		default:
			std::cout << "<ERROR> " << form_name << " passed as parameter doesn't exist\n";
			std::cout << "        it couldn't be created, sorry dude" << std::endl;
	}

	return (NULL);
}
