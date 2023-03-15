/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:16:35 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/15 09:13:38 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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
	Form form_a("Form_a", 30, 30);
	std::cout << form_a;
	
	Form form_b("Form_b", 150, 150);
	std::cout << form_b;

	std::cout << "\nCan Bureaucrat a sign form_a?" << std::endl;
	a.signForm(form_a);
	std::cout << "Bureaucrat a tries to sign form_a again:" << std::endl;
	a.signForm(form_a);

	std::cout << form_a;


	std::cout << "\nCan Bureaucrat b sign form_a?" << std::endl;
	b.signForm(form_a);
	std::cout << form_b;
	
	return (0);
}
