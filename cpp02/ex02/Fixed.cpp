/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:38:45 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/14 12:11:26 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _raw (0)
{
	// std::cout << "Default constructor called" << std::endl;
	// std::cout << "Initialisation of _raw-value : _raw = " << _raw << std::endl;
}

Fixed::Fixed(int const int_value) : _raw (int_value << _bit) 
{
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const float_value) : _raw(float_value * (1 << _bit))
{
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & raw)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = raw;
	return ;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
	// std::cout << "Copy assignement operator called" << std::endl;
	if (this != &rhs)
		this->_raw = rhs.getRawBits();
	return (*this);
}
bool Fixed::operator>(Fixed const & rhs)
{
	if (this->getRawBits() > rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator<(Fixed const & rhs)
{
	if (this->getRawBits() < rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator>=(Fixed const & rhs)
{
	if (this->getRawBits() >= rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator<=(Fixed const & rhs)
{
	if (this->getRawBits() <= rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator==(Fixed const & rhs)
{
	if (this->getRawBits() == rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator!=(Fixed const & rhs)
{
	if (this->getRawBits() != rhs.getRawBits())
		return (true);
	else
		return (false);
}

Fixed Fixed::operator+(Fixed const &rhs)
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(Fixed const &rhs)
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(Fixed const &rhs)
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(Fixed const &rhs)
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed & Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->setRawBits(this->getRawBits() + 1);
	return (tmp);
}

Fixed & Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	tmp.setRawBits(tmp.getRawBits() - 1);
	return (tmp);
}

Fixed & Fixed::min(Fixed &lhs, Fixed &rhs)
{
	if (lhs < rhs)
		return (lhs);
	else
		return (rhs);
}

Fixed  Fixed::min(Fixed const &lhs, Fixed const &rhs)
{
	if ((Fixed)lhs < (Fixed)rhs)
		return (lhs);
	else
		return (rhs);
}

Fixed Fixed::max(Fixed &lhs, Fixed &rhs)
{
	if (lhs.getRawBits() < rhs.getRawBits())
		return (lhs);
	else
		return (rhs);
}

Fixed Fixed::max(Fixed const &lhs, Fixed const &rhs)
{
	if (lhs.getRawBits() > rhs.getRawBits())
		return (lhs);
	else
		return (rhs);
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
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