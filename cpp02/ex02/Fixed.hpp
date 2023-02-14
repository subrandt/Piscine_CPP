/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:38:54 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/14 16:25:06 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>

#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed								//Canonical
{
	public:
		Fixed(void);						//Default constructor
		Fixed(int const int_value);
		Fixed(float const float_value);
		Fixed(Fixed const & raw);			//Copy constructor
		~Fixed(void);						//Destructor
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;

		Fixed & operator=(Fixed const & rhs); //Assignement operator
		// Comparison operators:
		bool operator>(Fixed const &rhs);
		bool operator<(Fixed const &rhs);
		bool operator>=(Fixed const &rhs);
		bool operator<=(Fixed const &rhs);
		bool operator==(Fixed const &rhs);
		bool operator!=(Fixed const &rhs);
		// Arithmetic operators:
		Fixed operator+(Fixed const &rhs);
		Fixed operator-(Fixed const &rhs);
		Fixed operator*(Fixed const &rhs);
		Fixed operator/(Fixed const &rhs);
		// Increment/decrement operators:
		Fixed & operator++(void); 	//prefix increment
		Fixed operator++(int);		//postfix increment
		Fixed & operator--(void);
		Fixed operator--(int);

		// Overloaded static member functions:
		static Fixed min(Fixed &lhs, Fixed &rhs);
		static Fixed min(Fixed const &lhs, Fixed const &rhs);
		static Fixed max(Fixed &lhs, Fixed &rhs);
		static Fixed max(Fixed const &lhs, Fixed const &rhs);

	private:
		int _raw;
		static const int _bit = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif