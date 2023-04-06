/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:07:00 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/03 16:57:22 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#define MAX_VAL	10


const char * IntegerNotFound::what() const throw()
{
	return ("< ! > number not found in the list");
}


int main(void)
{
	std::cout << "creating list of random numbers :" << std::endl;
	std::list<int> lst;
    srand(time(NULL));
    for(int i = 0; i < MAX_VAL; i++)
	{
		lst.push_back(rand() % 10);
	}
	for(std::list<int>::iterator it = lst.begin(); it != lst.end(); it++)
	{
		std::cout << *it << std::endl;
	}

	std::cout << "find the following number in this list : " ;
	int number = rand() % 10;
	std::cout << number << std::endl;

	try
	{
		easyfind(lst, number);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

    return (0);
}