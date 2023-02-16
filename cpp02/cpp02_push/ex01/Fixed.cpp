/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:25:31 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/15 12:35:22 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _raw (0)
{
	std::cout << "Default constructor called" << std::endl;
	std::cout << "Initialisation of _raw-value : _raw = " << _raw << std::endl;
}

Fixed::Fixed(int const int_value) : _raw (int_value << _bit) 
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const float_value) : _raw(roundf(float_value * (1 << _bit)))
{
	std::cout << "Float constructor called" << std::endl;
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
	//std::cout << "getRawBits member function called" << std::endl;
	return(_raw);
}

void Fixed::setRawBits(int const raw)
{
	_raw = raw;
}

float	Fixed::toFloat( void ) const
{
	float float_value = (float) _raw / (1 << _bit);
	return float_value;
}

int		Fixed::toInt( void ) const
{
	int int_value = _raw / (1 << _bit);
	return int_value;

}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return (o);
}
