/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:48:28 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/18 16:44:02 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/* ************************************************************************** */
/*								Canonical Form								  */
/* ************************************************************************** */

RPN::RPN(void)
{
	// std::cout << "Default constructor called" << std::endl;
}

RPN::RPN(std::string const & operation)
{
	// std::cout << "Default Inputfile constructor called" << std::endl;
	parsing_operation(operation);
}

RPN::RPN(RPN const & src)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

RPN::~RPN(void)
{
	// std::cout << "Default destructor called " << std::endl;
}

RPN & RPN::operator=(RPN const & rhs)
{
	(void)rhs;
	return (*this);
}

/* ************************************************************************** */
/*								Other Functions								  */
/* ************************************************************************** */

void RPN::parsing_operation(std::string const & operation)
{
	//parsing:
	//au fur et a mesure de push dans la stack
	//isdigit + operateurs uniquement 
	//d'abord 2 chiffres puis l'operateur
	//erreurs sur sortie standart!!
	//division par 0

	//calculate function : "+ - / *"

	//output function
	for (size_t i = 0; i < operation.length(); i++)
	{
		while (isspace(operation[i]))
		{
			i++;
		}
		if (isdigit(operation[i]))
		{
			_stack.push(operation[i] - '0');
			std::cout << _stack.top() << std::endl;
			i++;
		}
		if ((operation[i] == '+' || operation[i] == '-'
			|| operation[i] == '*' || operation[i] == '/')
			&& _stack.size() >= 2)
		{
			std::cout << "stack_size = " << _stack.size() << std::endl;
			std::cout << "calculate : ";
			int tmp = _stack.top();
			_stack.pop();
			std::cout << tmp << operation[i] << _stack.top() << std::endl;
			i++;
		}
		// if ((isspace(operation[i]) == 0) || (isdigit(operation[i]) == 0)
		// 	|| operation[i] != '+' || operation[i] != '-'
		// 	|| operation[i] != '*' || operation[i] != '/')
		// {
		// 	std::cout << "<ERROR>" << std::endl;
		// 	return ;
		// }
	}

}
