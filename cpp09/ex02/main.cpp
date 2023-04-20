/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:12:34 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/20 14:31:58 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

static bool	parsing(std::string const & argv)
{
	//check positif integer
	long number;
	char *p_end;
	number = strtol(argv.c_str(), &p_end, 10);
	if (number < 0 || number > INT_MAX || strlen(p_end) != 0)
	{
		std::cout << "ERROR" << std::endl;
		return (false);
	}

	return (true);
}


int main (int argc, char **argv)
{
	if (argc <= 1)
	{
		std::cout << "<ERROR>\nWrong number of arguments" << std::endl;
		return (1);
	}
	for (int i = 1; i < argc; i++)
	{
		if (parsing(argv[i]) == false)
			return (1);
	}


//faire un tableau d'arguments à enregistrer dans vector?

	PmergeMe pmergeme;
	pmergeme.init_container(argv); //quoi envoyer - tableau d'arguments?

	return (0);
}