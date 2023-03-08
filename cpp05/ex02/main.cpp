/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:16:35 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/08 17:28:45 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

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

	std::cout << "\nThere are some Bureaucrats:" << std::endl;
	Bureaucrat a("Chef", 1);
	std::cout << a;
	
	Bureaucrat b("Sous-fifre", 150);
	std::cout << b;
	b.upGrade();
	b.downGrade();
	
	// std::cout << "\nCan Sous-fifre be downgraded again?" << std::endl;
	// try
	// {
	// 	b.downGrade();
	// }
	// catch (std::exception& e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

	std::cout << "\nThere are some Forms:" << std::endl;
	// std::cout << form_a;
	
	// ShrubberyCreationForm shrubbery2("file2");
	// std::cout << form_b;

	// std::cout << "\nCan Bureaucrat a sign form_a?" << std::endl;
	// a.signForm(shrubbery1);
	// std::cout << form_a;

	// std::cout << "\nCan Bureaucrat b sign form_a?" << std::endl;
	// b.signForm(shrubbery1);
	// std::cout << form_b;
	
	ShrubberyCreationForm shrubbery1("file1");
	shrubbery1.execute(a);
	
	return (0);
}
