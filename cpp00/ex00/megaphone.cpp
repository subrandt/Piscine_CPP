/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:27:40 by subrandt          #+#    #+#             */
/*   Updated: 2023/01/03 14:56:39 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>


int main(int argc, char **argv)
{
	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		std::string str;
		for (int i = 1; i < argc; i++)
		{
			str = argv[i];
			for (int j = 0; j < (int)str.length(); j++)
				std::cout << (char)toupper(str[j]);
		}
		std::cout << std::endl;
		return (0);
	}
	return (0);
}
