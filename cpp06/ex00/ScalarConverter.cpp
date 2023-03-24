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
#include <limits>
#include <cstdlib>
#include <cstring>

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
		convertChar(literal[0]);
		return (1);
	}
	if (type == 2)
	{
		convertInt(atol(literal.c_str()));
		return (1);
	}
	if (type == 3)
	{
		convertFloat(strtof(literal.c_str(), NULL));
		return (1);
	}
	if (type == 4)
	{
		convertDouble(strtod(literal.c_str(), NULL));
		return (1);
	}
	if (type == 5)
	{
		convertNan();
		return (1);
	}
	if (type == 6)
	{
		convertInf(literal);
		return (1);
	}
	return (0);
}

int		ScalarConverter::getType(std::string const & literal)
{
	if (isChar(literal))// if char
		return (1);
	if (isInt(literal)) // if int
	 	return (2);
	if (isFloat(literal)) //if float
		return (3);
	if (isDouble(literal)) //if double
		return (4);
	if (isNan(literal))
		return (5);
	if (isInf(literal))
		return (6);
	else 
		isError(literal);
	return (0);
}

bool	ScalarConverter::isChar(std::string const & literal)
{
	if (literal.length() == 1 && !isdigit(literal[0]))
	{
		if (!isprint(literal[0]))
			std::cout << literal[0] << " isn't displayable" << std::endl;
		return (1);
	}
	return (0);
}

bool	ScalarConverter::isInt(std::string const & literal)
{

	long int literal_to_convert = atol(literal.c_str());
	char *p_end;

	if(strtol(literal.c_str(), &p_end, 10))
	{
		if (strlen(p_end) == 0)
		{
			if (literal_to_convert >= INT_MIN && literal_to_convert <= INT_MAX)
				return (1);
		}
		return (0);
	}
	return (0);
}

bool	ScalarConverter::isFloat(std::string const & literal)
{
	char *p_end;
	for (long unsigned int i = 0; i < literal.length(); i++)
	{
		if (literal[i] == 'f')
		{
			if (strtof(literal.c_str(), &p_end))
			{
				if (strlen(p_end) == 1 && strcmp(p_end, "f") == 0)
					return (1);
				else
					return (0);
			}
		}
	}
	return (0);
}

bool	ScalarConverter::isDouble(std::string const & literal)
{
	char *p_end;
	for (long unsigned int i = 0; i < literal.length(); i++)
	{
			if (strtod(literal.c_str(), &p_end))
			{
				if (strlen(p_end) == 0)
					return (1);
				else
					return (0);
		}
	}
	return (0);
}

void	ScalarConverter::isError(std::string const & literal)
{
	(void)literal;
	std::cerr << "Error" << std::endl;
}

bool	ScalarConverter::isNan(std::string const & literal)
{
	if (literal.compare("nan") == 0 || literal.compare("nanf") == 0)
		return (1);
	return (0);
}

bool	ScalarConverter::isInf(std::string const & literal)
{
	if (literal.compare("inf") == 0 || literal.compare("inff") == 0 ||
		literal.compare("+inf") == 0 || literal.compare("+inff") == 0 ||
		literal.compare("-inf") == 0 || literal.compare("-inff") == 0)
		return (1);
	return (0);
}

void ScalarConverter::convertInf(std::string const & literal)
{
	std::cout << "char : impossible" << std::endl;
	std::cout << "int : impossible" << std::endl;
	if (literal.compare("inf") == 0 || literal.compare("inff") == 0 ||
		literal.compare("+inf") == 0 || literal.compare("+inff") == 0)
	{
		std::cout << "float : +inff" << std::endl;
		std::cout << "double : +inf" << std::endl;
		return ;
	}
	if (literal.compare("-inf") == 0 || literal.compare("-inff") == 0)
	{
		std::cout << "float : -inff" << std::endl;
		std::cout << "double : -inf" << std::endl;
	}
}

void ScalarConverter::convertChar(char const & literal)
{
	std::cout << "char : '" << static_cast<char>(literal) << "'" << std::endl;
	std::cout << "int : " << static_cast<int>(literal) << std::endl;
	std::cout << "float : " << static_cast<float>(literal) << ".0f" << std::endl;
	std::cout << "double : " << static_cast<double>(literal) << ".0" << std::endl;
}

void ScalarConverter::convertInt(long int const & literal)
{

	if (literal < 0 || literal > 127)
		std::cout << "char : impossible" << std::endl;
	else if ((literal >= 0 &&  literal <= 31) || literal == 127)
		std::cout << "char : non displayable" << std::endl;
	else
		std::cout << "char : '" << static_cast<char>(literal) << "'" << std::endl;
	std::cout << "int : " << static_cast<int>(literal) << std::endl;
	
	if (literal >= 100000 || literal <= -100000)
		std::cout << "float : " << static_cast<float>(literal) << "f" << std::endl;
	else
		std::cout << "float : " << static_cast<float>(literal) << ".0f" << std::endl;
	std::cout << "double : " << static_cast<double>(literal) << ".0" << std::endl;
}

void ScalarConverter::convertFloat(float const & literal)
{
	if (literal < 0 || literal > 127)
		std::cout << "char : impossible" << std::endl;
	else if ((literal >= 0 &&  literal <= 31) || literal == 127)
		std::cout << "char : non displayable" << std::endl;
	else
		std::cout << "char : '" << static_cast<char>(literal) << "'" << std::endl;
	
	if (literal >= std::numeric_limits<int>::min() && literal <= std::numeric_limits<int>::max())
		std::cout << "int : " << static_cast<int>(literal) << std::endl;
	else
		std::cout << "int : impossible" << std::endl;

	// ajouter .0f
		// a partir 100 000 precision ...?
	std::cout << "float : " << static_cast<float>(literal) << "f" << std::endl;
	std::cout << "double : " << static_cast<double>(literal) << std::endl;
}

void ScalarConverter::convertDouble(double const & literal)\
{
	if (literal < 0 || literal > 127)
		std::cout << "char : impossible" << std::endl;
	else if ((literal >= 0 &&  literal <= 31) || literal == 127)
		std::cout << "char : non displayable" << std::endl;
	else
		std::cout << "char : '" << static_cast<char>(literal) << "'" << std::endl;
		
	if (literal >= std::numeric_limits<int>::min() && literal <= std::numeric_limits<int>::max())
		std::cout << "int : " << static_cast<int>(literal) << std::endl;
	else
		std::cout << "int : impossible" << std::endl;
	std::cout << "float : " << static_cast<float>(literal) << "f" << std::endl;
	std::cout << "double : " << static_cast<double>(literal) << std::endl;
}

void ScalarConverter::convertNan(void)
{
	std::cout << "char : impossible" << std::endl;
	std::cout << "int : impossible" << std::endl;
	std::cout << "float : nanf" << std::endl;
	std::cout << "double : nan" << std::endl;
}