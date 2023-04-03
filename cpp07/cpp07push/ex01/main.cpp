/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:15:07 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/29 13:49:26 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void) 
{

//Use templates to do something on the array values:

//1) Print array of integer and multiply values:
	std::cout << "\n -> int array: ";
	int array[5] = {1, 2, 3, 4, 5};
	int len = sizeof(array)/sizeof(array[0]);
	
	std::cout << "\nprint initial array" << std::endl;
	iter(array, len, ft_print);
	std::cout << "\nprint value * 2" << std::endl;
	iter(array, len, ft_mult);


//2) Print array of std::string and put them to uppercase:
	std::cout << "\n -> string array: ";
	int len_str = 3;
	std::string str_array[len_str] = {"hello", "coucou", "ciao"};

	std::cout << "\nprint initial array" << std::endl;
	iter(str_array, len_str, ft_print);
	std::cout << "\nprint array in uppercase" << std::endl;
	iter(str_array, len_str, ft_toupper);

	return (0);
}