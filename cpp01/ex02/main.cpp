/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:01:33 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/02 08:33:29 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "The memory address of the string variable: ";
	std::cout << &str << std::endl;
	std::cout << "The memory address held by stringPTR:      ";
	std::cout << &stringPTR << std::endl;
	std::cout << "The memory address held by stringREF:      ";
	std::cout << &stringREF << std::endl;
	std::cout << "The value of the string variable:          ";
	std::cout << str << std::endl;
	std::cout << "The value pointed to by stringPTR:         ";
	std::cout << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF:         ";
	std::cout << stringREF << std::endl;
	return (0);
}
