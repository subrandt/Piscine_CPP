/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:16:35 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/11 17:27:34 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
# include <cstdlib>

int main(int argc, char **argv)
{
	if (argc != 1)
	{
		std::cerr << "Wrong number of arguments" << std::endl;
		return (1);
	}
	if (argv[1] == "") //argv[1] == NULL
	{
		std::cerr << "Empty argument" << std::endl;
		return (1);
	}

	
	// check argv[1] - type char * / int / float / double
	// conversion 
	
	return (0);
}