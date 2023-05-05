/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:12:34 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/28 17:37:30 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

static bool	parsing(std::string const & argv)
{
	//check empty args
	if (argv == "")
	{
		std::cerr << "ERROR" << std::endl;
		return (false);
	}

	//check positif integer
	long number;
	char *p_end;
	number = strtol(argv.c_str(), &p_end, 10);
	if (number < 0 || number > INT_MAX || strlen(p_end) != 0)
	{
		std::cerr << "ERROR" << std::endl;
		return (false);
	}

	return (true);
}


int main (int argc, char **argv)
{
	struct timeval	timeval;
	long long start_time = get_start_time(&timeval);
	
	if (argc <= 1)
	{
		std::cerr << "<ERROR>\nWrong number of arguments" << std::endl;
		return (1);
	}
	for (int i = 1; i < argc; i++)
	{
		if (parsing(argv[i]) == false)
			return (1);
	}
	
	long long parsing_time = get_parsing_time(&timeval, start_time);

	PmergeMe pmergeme;
	pmergeme.get_time(start_time, parsing_time);
	pmergeme.init_container(argv);

	return (0);
}