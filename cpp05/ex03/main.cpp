/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:16:35 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/09 16:48:03 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.cpp"

int main(void)
{

	std::cout << "\nThere are some BUREAUCRATS:" << std::endl;
	Bureaucrat a("Chef", 1);
	std::cout << a;
	
	Bureaucrat b("Sous-fifre", 150);
	std::cout << b;
	


	std::cout << "\n\nThere are some FORMS:" << std::endl;

	std::cout << "\n >>> ShrubberyCreationForm <<<" << std::endl;
	
	ShrubberyCreationForm shrubbery1("file1");
	std::cout << shrubbery1;
	


	std::cout << "\n\n >>> RobotomyRequestForm <<<" << std::endl;
	RobotomyRequestForm robotomy1("someone");
	std::cout << robotomy1;
	


	std::cout << "\n\n >>> PresidentialPardonForm <<<" << std::endl;
	PresidentialPardonForm pardon1("naughty");
	std::cout << pardon1;
	
	return (0);
}
