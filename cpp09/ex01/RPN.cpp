/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:48:28 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/18 14:07:52 by subrandt         ###   ########.fr       */
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
	//isdigit + operateurs uniquement 
	//d'abord 2 chiffres puis l'operateur
	//erreurs sur sortie standart!!

	//calculate function : "+ - / *"

	//output function

	std::cout << operation << std::endl;
}
