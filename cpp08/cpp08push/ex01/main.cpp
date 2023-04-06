/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:11:35 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/05 11:20:44 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	{
		std::cout << "\nAdd a span of 5 numbers:" << std::endl;
		Span sp = Span(5);

		sp.addNumber(-2147483648);
		sp.addNumber(2147483647);
		sp.addNumber(-17);
		sp.addNumber(9);
		sp.addNumber(11);
		
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;


		std::cout << "\nTry to add other numbers if there are already N stored:" << std::endl;
		try
		{
			sp.addNumber(25);
		}
		catch (std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "\nTry to add a span with 0 numbers:" << std::endl;
		try
		{
			Span sp1 = Span(0);
		}
		catch (std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "Try to add a span with only 1 number:" << std::endl;
		try
		{
			Span sp1 = Span(1);
		}
		catch (std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "\nAdd a range of 10001 numbers (print if you like):" << std::endl;
		unsigned int N = 100001;
		Span sp3 = Span(N);
		std::vector<int> range;
		for (unsigned int i = 0; i < N; i++)
		{
			range.push_back(i);
		}
		sp3.addRange(range.begin(), range.end());
		

		// std::cout << "print the range of 10001 numbers:" << std::endl;
		// std::vector<int>::iterator it;
		// it = range.begin();
		// for (unsigned int i = 0; i < N; i++)
		// {
		// 	std::cout << *it << " ";
		// 	it++;
		// }
		// std::cout << std::endl;
		std::cout << "\nTry to add other numbers if there are already N stored:" << std::endl;
		try
		{
			sp3.addNumber(25);
		}
		catch (std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

	}
	return (0);
}