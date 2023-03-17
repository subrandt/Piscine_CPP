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
#include <string>
#include <climits>
#include <cstdlib>

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

bool	ScalarConverter::convert(std::string const & literal)
{
	int type;

	type = getType(literal);
	if (type == 1)
	{
		std::cout << "type : char" << std::endl;
		convertChar(literal[0]);
		return (1);
	}
	// if (type == 2) ...
	return (0);
}

int		ScalarConverter::getType(std::string const & literal)
{
	if (isChar(literal))// if char
		return (1);
	if (isInt(literal)) // if int
	 	return (2);
	// if (isFloat(literal)) //if float
	// 	return (3);
	// if (isDouble(literal)) if double
	// return (4);

	// return (5) if error
	return (0);
}

bool	ScalarConverter::isChar(std::string const & literal)
{
	if (literal.length() == 1 && !isdigit(literal[0]))
	{
		if (!isprint(literal[0]))
			std::cout << literal[0] << " isn't displayable" << std::endl;
		else
			std::cout << literal[0] << std::endl;
		return (1);
	}
	else
		std::cout << literal << " isn't a char" << std::endl;
	return (0);
}

bool	ScalarConverter::isInt(std::string const & literal)
{
	if ((literal[0] == '-') || isdigit(literal[0]))
	{
		for (long unsigned int i = 0; i < literal.length(); i++)
		{
			if ((literal[0] != '-') && !isdigit(literal[i])) //ici ca marche pas pour -123
			{
				std::cout << literal << " not only digits" << std::endl;
				return (0);
			}
		}
		if (atoi(literal.c_str()) >= INT_MIN && atoi(literal.c_str()) <= INT_MAX)
		{
			std::cout << literal << " is an int" << std::endl;
			return (1);
		}
		else
			std::cout << literal << " isn't an int" << std::endl;
		return (0);
	}
	return (0);

}

// bool	ScalarConverter::isFloat(std::string const & literal)
// {

// }

// bool	ScalarConverter::isDouble(std::string const & literal)
// {

// }

void ScalarConverter::convertChar(char const & literal)//gerer les chiffres en int!!!
{
	std::cout << "char : " << literal << std::endl;
	std::cout << "int : " << static_cast<int>(literal) << std::endl;
	std::cout << "float : " << static_cast<float>(literal) << ".0f" << std::endl;
	std::cout << "double : " << static_cast<double>(literal) << ".0" << std::endl;
}

//void ScalarConverter::convertInt(int const & literal)
//{

//}
