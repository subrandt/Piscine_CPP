/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:16:35 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/15 09:15:16 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	// std::cout << "\nIs Nobody's grade ok?" << std::endl;
	// try
	// {
	// 	Bureaucrat c("Nobody", 0);
	// }
	// catch (std::exception& e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

	// std::cout << "\nIs Anybody's grade ok?" << std::endl;
	// try
	// {
	// 	Bureaucrat d("Anybody", 151);
	// }
	// catch (std::exception& e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

	std::cout << "\nThere are some BUREAUCRATS:" << std::endl;
	Bureaucrat a("Chef", 1);
	std::cout << a;
	
	Bureaucrat b("Sous-fifre", 150);
	std::cout << b;
	b.upGrade();
	b.downGrade();


	std::cout << "\n\nThere are some FORMS:" << std::endl;

	std::cout << "\n >>> ShrubberyCreationForm <<<" << std::endl;
	
	ShrubberyCreationForm shrubbery1("file1");
	std::cout << shrubbery1;
	std::cout << "Can Bureaucrat " << b.getName() << " sign Shrubbery?" << std::endl;
	b.signForm(shrubbery1);
	std::cout << "Can Bureaucrat " << a.getName() << " sign Shrubbery?" << std::endl;
	a.signForm(shrubbery1);
	std::cout << "Can Bureaucrat " << a.getName() << " execute Shrubbery?" << std::endl;
	a.executeForm(shrubbery1);
	std::cout << "Can Bureaucrat " << b.getName() << " execute Shrubbery?" << std::endl;
	b.executeForm(shrubbery1);


	std::cout << "\n\n >>> RobotomyRequestForm <<<" << std::endl;
	RobotomyRequestForm robotomy1("someone");
	std::cout << robotomy1;
	a.signForm(robotomy1);
	std::cout << "Can Bureaucrat " << a.getName() << " execute Robotomy?" << std::endl;
	a.executeForm(robotomy1);
	std::cout << "Can Bureaucrat " << b.getName() << " execute Robotomy?" << std::endl;
	b.executeForm(robotomy1);


	std::cout << "\n\n >>> PresidentialPardonForm <<<" << std::endl;
	PresidentialPardonForm pardon1("naughty");
	std::cout << pardon1;
	a.signForm(pardon1);
	std::cout << "Can Bureaucrat " << a.getName() << " execute Presidential Pardon?" << std::endl;
	a.executeForm(pardon1);
	std::cout << "Can Bureaucrat " << b.getName() << " execute Presidential Pardon?" << std::endl;
	b.executeForm(pardon1);

	return (0);
}
