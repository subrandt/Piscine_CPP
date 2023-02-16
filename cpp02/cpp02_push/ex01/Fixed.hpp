/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:24:16 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/13 15:38:07 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>

#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed						//Canonical
{
	public:
		Fixed(void);				//Default constructor
		Fixed(int const int_value);
		Fixed(float const float_value);
		Fixed(Fixed const & raw);	//Copy constructor
		~Fixed(void);				//Destructor
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;

		Fixed & operator=(Fixed const & rhs); //Assignement operator

	private:
		int _raw;
		static const int _bit = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif