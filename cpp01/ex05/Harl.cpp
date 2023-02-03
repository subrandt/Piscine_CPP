/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 16:10:41 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/03 17:09:16 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Default constructor Harl called" << std::endl;
	return ;
}

Harl::~Harl(void)
{
	std::cout << "Destructor Harl called" << std::endl;
	return ;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my " ;
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger.";
	std::cout << "I really do !" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << "You didn't put enough bacon in my burger !";
	std::cout << "If you did, I wouldn't be asking for more !" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << "I've been coming for years whereas you started working here";
	std::cout << "since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now.";
	std::cout << std::endl;
}

void	Harl::complain(std::string level)
{
	switch (level) 
	{

	case debug :
		Liste d'instructions
		break;

	case info :
		Liste d'instructions
		break;

	case error:
		Liste d'instructions
		break;

	default: 

		Liste d'instructions
		break;

	}
}


