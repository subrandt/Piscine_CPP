/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:01:38 by subrandt          #+#    #+#             */
/*   Updated: 2023/01/31 14:49:34 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	std::cout << std::endl;
	std::cout << "Constructor Zombie called" << std::endl;
	this->name = name;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Destructor Zombie called" << std::endl;
	std::cout << std::endl;	
	return ;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}