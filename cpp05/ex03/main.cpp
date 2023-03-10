/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:16:35 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/10 17:05:35 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{

	std::cout << "\nThere are some BUREAUCRATS:" << std::endl;
	
	Bureaucrat a("Chef", 1);
	std::cout << a;
	Bureaucrat b("Sous-fifre", 150);
	std::cout << b;
	
	
	std::cout << "\n\n >>> Intern creates forms <<<" << std::endl;
	Intern someRandomIntern;
	
	AForm* scf;
	scf = someRandomIntern.makeForm("shrubbery creation", "Gardener");
	AForm* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	AForm* ppf;
	ppf = someRandomIntern.makeForm("presidential pardon", "Naughty");
	AForm* other;
	other = someRandomIntern.makeForm("some other form", "Dumb");


	std::cout << "\nCan Bureaucrat " << b.getName() << " sign shrubbery creation?" << std::endl;
	b.signForm(*scf);
	std::cout << "Can Bureaucrat " << a.getName() << " sign shrubbery creation?" << std::endl;
	a.signForm(*scf);
	std::cout << "Can Bureaucrat " << a.getName() << " execute shrubbery creation" << std::endl;
	a.executeForm(*scf);

	std::cout << "\nCan Bureaucrat " << b.getName() << " sign robotomy request?" << std::endl;
	b.signForm(*rrf);
	std::cout << "Can Bureaucrat " << a.getName() << " sign robotomy request?" << std::endl;
	a.signForm(*rrf);
	std::cout << "Can Bureaucrat " << a.getName() << " execute robotomy request" << std::endl;
	a.executeForm(*rrf);
	
	std::cout << "\nCan Bureaucrat " << b.getName() << " sign presidential pardon?" << std::endl;
	b.signForm(*ppf);
	std::cout << "Can Bureaucrat " << a.getName() << " sign presidential pardon?" << std::endl;
	a.signForm(*ppf);
	std::cout << "Can Bureaucrat " << a.getName() << " execute presidential pardon" << std::endl;
	a.executeForm(*ppf);


	delete(scf);
	delete(rrf);
	delete(ppf);
	(void)other;


	return (0);
}
