/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:39:05 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/14 16:18:24 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	std::cout << "subject's tests: " << std::endl;
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << "        a = " << a << std::endl;
	std::cout << "      ++a = " << ++a << std::endl;
	std::cout << "        a = " << a << std::endl;
	std::cout << "      a++ = " << a++ << std::endl;
	std::cout << "        a = " << a << std::endl;
	std::cout << "        b = " << b << std::endl;
	std::cout << "max(a, b) = " << Fixed::max( a, b ) << std::endl;
	std::cout << std::endl;

	std::cout << "additional tests: " << std::endl;
	Fixed c(8.00f);
	Fixed d(-10.00f);
	std::cout << "        c = " << c << std::endl;
	std::cout << "        d = " << d << std::endl;
	std::cout << "      d-- = " << d-- << std::endl;
	std::cout << "      d++ = " << d++ << std::endl;
	std::cout << "    c + d = " << c + d << std::endl;
	std::cout << "    c - d = " << c - d << std::endl;
	std::cout << "    c * d = " << Fixed(c * d) << std::endl;
	std::cout << "    c / d = " << Fixed(c / d) << std::endl;
	std::cout << "min(c, d) = " << Fixed::max(c, d) << std::endl;
	std::cout << "    c > d = ";
	if (Fixed(c) > Fixed(d))
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	std::cout << "    c < d = ";
	if (Fixed(c) < Fixed(d))
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	
	return (0);
}
