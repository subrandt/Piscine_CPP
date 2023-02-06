/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:58:39 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/06 17:45:36 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Default constructor Harl called" << std::endl;
	return ;
}

void Harl::complain(std::string level)
{
	int i;
	std::string case_level[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	for (i = 0; i < 4; i++)
	{
		if (case_level[i].compare(level) == 0)
			break ;
	}
	switch(i)
	{
		case 0:
			debug();
			break;
		case 1:
			info();
			break;
		case 2:
			warning();
			break;
		case 3:
			error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]";
			std::cout << std::endl;
	}
}

Harl::~Harl(void)
{
	std::cout << std::endl;
	std::cout << "Destructor Harl called" << std::endl;
	return ;
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my " ;
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger.";
	std::cout << "I really do !" << std::endl;
	info();
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << "You didn't put enough bacon in my burger !";
	std::cout << "If you did, I wouldn't be asking for more !" << std::endl;
	warning();
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << "I've been coming for years whereas you started working here";
	std::cout << "since last month." << std::endl;
	error();
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now.";
	std::cout << std::endl;
}
