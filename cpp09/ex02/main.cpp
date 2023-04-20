/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:12:34 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/20 10:27:11 by subrandt         ###   ########.fr       */
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
	return (0);
}