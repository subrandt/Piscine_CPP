/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:41:16 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/20 10:45:12 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error arguments:\n";
		std::cerr << "Usage example: ./RPN \"1 1 +\"" << std::endl;
		return (1);
	}

	

	const std::string operation(argv[1]);

	if (parsing(operation) == false)
		return (1);

	RPN rpn;
	rpn.RPN_operation(operation);
	
	return (0);
}