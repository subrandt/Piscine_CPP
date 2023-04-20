/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:12:34 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/20 11:21:52 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main (int argc, char **argv)
{
	if (argc <= 1)
	{
		std::cout << "<ERROR>\nWrong number of arguments" << std::endl;
		return (1);
	}

	int i = 1;
	const std::string input_numbers(argv[i])
	while (i < argc)
	{
		if (parsing(input_numbers) == false)
			return (1);
		i++;
	}

//faire un tableau d'arguments?

	PmergeMe pmergeme;
	pmergeme.PmergeMe_operation(argv); //quoi envoyer - tableau d'arguments?

	return (0);
}