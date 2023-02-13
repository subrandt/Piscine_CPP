/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:39:05 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/13 21:39:29 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << "  a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "  a = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "  a = " << a << std::endl;
	std::cout << "  b = " << b << std::endl;
	std::cout << "max(a, b) = " << Fixed::max( a, b ) << std::endl;

	return (0);
}
