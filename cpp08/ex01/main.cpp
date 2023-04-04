/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:11:35 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/04 17:08:08 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	Span sp = Span(5); //try int min - int max span(2); span(0); span(1)...

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(-17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "longest span: " << sp.longestSpan() << std::endl;


	std::cout << "Try to add other numbers :" << std::endl;
	try
	{
		sp.addNumber(25);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}