/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:15:07 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/24 18:40:42 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int	main(void) 
{

	std::cout << "\nint array: ";
	int array[5] = {1, 2, 3, 4, 5};
	int len = sizeof(array)/sizeof(array[0]);
	
	// std::cout << "array : { ";
	// for(int i = 0; i < len ; i++)
	// {
	// 	std::cout << array[i] << " " ;
	// }
	// std::cout << "}" << std::endl;
	// std::cout << "length of array = " << len << std::endl;

	std::cout << "\nprint initial array" << std::endl;
	iter(array, len, ft_print);
	std::cout << "\nprint value * 2" << std::endl;
	iter(array, len, ft_mult);

	// std::cout << "\nstring array: ";
	// std::string str_array[3] = {"hello", "coucou", "ciao"};

	// std::cout << "\nprint initial array" << std::endl;
	// iter(str_array, len, ft_print);

	return (0);
}