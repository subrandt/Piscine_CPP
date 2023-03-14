/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:39:54 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/14 16:03:42 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("Shrubbery", 145, 137)
{
	std::cout << "Default Shrubbery constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("Shrubbery", 145, 137),
	_target(target)
{
	std::cout << "Shrubbery's target constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src)
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

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
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
	
	//create file with ascii trees
	std::ofstream newfile;
	std::string filename = std::string (_target + "_shrubbery");
	newfile.open(filename.c_str());
	if (newfile.is_open())
	{
		
		std::string asci_trees =  
			"            ,@@@@@@@,\n"
			"    ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
			"  ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
			",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
			"%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
			"%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
			"`&%\\ ` /%&'    |.|        \\ '|8'\n"
			"	|o|        | |         | |\n"
			"	|.|        | |         | |\n"
			"	\\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_";

		newfile << asci_trees << std::endl;
	}
	else
		std::cout << "Error opening file" << std::endl;
	newfile.close();

	std::cout << "-> form successfully executed - ascii_trees_file created" << std::endl;
}
