/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 08:56:05 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/29 13:47:58 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void) 
{
	int a = 2;
	int b = 3;
	std::cout << "\na = " << a << ", b = " << b << std::endl;
	std::cout << "swap(a, b)" << std::endl;


	::swap( a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;


	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "\nc = " << c << ", d = " << d << std::endl;
	std::cout << "swap(c, d)" << std::endl;
	
	::swap(c,d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return (0);
}