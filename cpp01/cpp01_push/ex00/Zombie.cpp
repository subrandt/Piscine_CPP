/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:01:38 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/09 11:07:33 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "Constructor Zombie " << name;
	std::cout << " called" << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Destructor Zombie " << name;
	std::cout << " called" << std::endl;
	std::cout << std::endl;	
	return ;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}