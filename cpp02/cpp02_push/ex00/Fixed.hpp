/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:57:48 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/10 14:54:25 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed						//Canonical
{
	public:
		Fixed(void);				//Default constructor
		Fixed(Fixed const & raw);	//Copy constructor
		~Fixed(void);				//Destructor
		
		int getRawBits(void) const;
		void setRawBits(int const raw);

		Fixed & operator=(Fixed const & rhs); //Assignement operator

	private:
		int _raw;
		static const int _bit = 8;
};

#endif