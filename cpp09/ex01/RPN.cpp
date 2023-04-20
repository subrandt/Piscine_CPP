/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:48:28 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/20 10:35:05 by subrandt         ###   ########.fr       */
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
	if (this != &rhs)
	{
		_stack = rhs._stack;
	}
	return (*this);
}

/* ************************************************************************** */
/*								Other Functions								  */
/* ************************************************************************** */

static float calculate(float & first, char  op, float & second)
{
	int i;
	float result;
	char operator_choice[4] = {'+', '-', '*', '/'};
	for (i = 0; operator_choice[i] != op; i++)
	{
		if (operator_choice[i] == op)
			break ;
	}
	switch(i)
	{
		case 0:
			result = first + second;
			break;
		case 1:
			result = first - second;
			break;
		case 2:
			result = first * second;
			break;
		default:
			result = first / second;
	}


	
	return (result);
}

void RPN::RPN_operation(std::string const & operation)
{
	
	//division par 0

	//calculate function : "+ - / *"

	//output function
	float result;
	for (size_t i = 0; i < operation.length(); i++)
	{
		while (isspace(operation[i]))
		{
			i++;
		}
		if (isdigit(operation[i]))
		{
			_stack.push(operation[i] - '0');
		}
		if ((operation[i] == '+' || operation[i] == '-'
			|| operation[i] == '*' || operation[i] == '/')
			&& _stack.size() >= 2)
		{
			float tmp = _stack.top();
			_stack.pop();
			if (operation[i] == '/' && tmp == 0)
			{
				std::cout << "ERROR" << std::endl;
				return ;
			}
			result = calculate(_stack.top(), operation[i], tmp);
			_stack.pop();
			_stack.push(result);

		}
	}
	if (_stack.size() == 1)
	{
		std::cout << result << std::endl;
	}

}
