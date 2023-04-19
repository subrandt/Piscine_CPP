/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:28:26 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/19 18:17:22 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


bool parsing(std::string const & argv)
{
	int nb_numbers = 0;
	int nb_op = 0;
	for (size_t i = 0; i < argv.length(); i++)
	{
		if (isspace(argv[i]))
		{
			continue ;
		}
		if (isdigit(argv[i]))
		{
			nb_numbers++;
			continue ;
		}
		if (argv[i] == '+' || argv[i] == '-' || argv[i] == '*' || argv[i] == '/')
		{
			if (nb_numbers < 2 )
			{
				std::cout << "ERROR" << std::endl;
				return (false);
			}
			nb_op++;
			continue ;
		}
		else
		{
			std::cout << "ERROR" << std::endl;
			return (false);
		}
	}
	if (nb_numbers < 2 || nb_op < 1 || (nb_op != nb_numbers - 1))
	{
		std::cout << "ERROR" << std::endl;
		return (false);
	}
	return (true);
}
