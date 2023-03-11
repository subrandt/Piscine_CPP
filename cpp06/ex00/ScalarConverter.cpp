/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:46:22 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/11 14:59:46 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
	// std::cout << "Default ScalarConverter constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter const & src)
{
	// std::cout << _name << "'s copy constructor called" << std::endl;
	*this = src;
}

ScalarConverter::~ScalarConverter(void)
{
	// std::cout << _name << "'s destructor called" << std::endl;
}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const & rhs)
{
	// std::cout << "ScalarConverter assignment operator called" << std::endl;
	if (this != &rhs)
	{
		
	}
	return (*this);
}

void	convert(std::string literal)
{
	
}




// std::ostream & operator<<(std::ostream & o, ScalarConverter const & rhs)
// {
// 	o <<  <<  << std::endl;
// 	return (o);
// }