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
#include <cctype>

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
	// 
	
	(void)rhs;
	return (*this);
}

bool	ScalarConverter::convert(std::string literal)
{
	int type;

	type = getType(literal);
	if (type == 1)
	{
		std::cout << "type : char" << std::endl;
		// convertChar(literal[0]);
		return (1);
	}
	// if (type == 1) ...
	return (0);
}

int		ScalarConverter::getType(std::string literal)
{
	if (isChar(literal))
		return (1); // if char
	// return (2) if int
	// return (3) if float
	// return (4) if double
	// return (5) if error
	return (0);
}

bool		ScalarConverter::isChar(std::string literal)
{
	if (literal.length() == 1)
	{
		if (!isprint(literal[0]))
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << literal[0] << std::endl;
		return (1);
	}

	return (0);
}

// std::ostream & operator<<(std::ostream & o, ScalarConverter const & rhs)
// {
// 	o <<  <<  << std::endl;
// 	return (o);
// }