/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:04:13 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/10 16:44:02 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _raw (0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & raw)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = raw;
	return ;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;

	if (this != &rhs)
		this->_raw = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(_raw);
}

void Fixed::setRawBits(int const raw)
{
	_raw = raw;
}