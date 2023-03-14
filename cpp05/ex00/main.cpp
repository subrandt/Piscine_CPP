/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:16:35 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/14 10:14:12 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main(void)
{
	std::cout << "\nNobody has a grade of 0.\nIs Nobody's grade ok?" << std::endl;
	try
	{
		Bureaucrat c("Nobody", 0);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\nAnybody has a grade of 151.\nIs Anybody's grade ok?" << std::endl;
	try
	{
		Bureaucrat d("Anybody", 151);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\nThere are some Bureaucrats:" << std::endl;
	Bureaucrat a("Chef", 1);
	std::cout << a;
	
	Bureaucrat b("Sous-fifre", 150);
	std::cout << b;
	b.upGrade();
	b.downGrade();
	
	std::cout << "\nCan Sous-fifre be downgraded again?" << std::endl;
	try
	{
		b.downGrade();
	}
	catch (std::exception& e)
	{
		std::cerr <<e.what() << std::endl;
	}

	return (0);
}