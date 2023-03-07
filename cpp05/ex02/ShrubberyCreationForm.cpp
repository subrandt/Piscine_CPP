/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:39:54 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/07 16:52:54 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("Shrubbery", 145, 137)
{

	std::cout << "Default Shrubbery constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : _target(target)
{
	std::cout << "Shrubbery's target constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
{
	std::cout << "Shrubbery's copy constructor called" << std::endl;
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "Shrubbery's destructor called" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	std::cout << "Shrubbery's assignment operator called" << std::endl;
	(void)rhs;
	return(*this);
}

void ShrubberyCreationForm::create_ascii_tree_file(std::string &target)
{
	
}

// void ShrubberyCreationForm::execute(Bureaucrat const & executor) const 
// {

// }
