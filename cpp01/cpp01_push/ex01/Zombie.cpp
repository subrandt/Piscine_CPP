/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:01:38 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/01 11:53:48 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Default constructor Zombie called" << std::endl;
	return ;
}

Zombie::Zombie(std::string name)
{
	std::cout << std::endl;
	std::cout << "Constructor Zombie called" << std::endl;
	this->_name = name;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Destructor Zombie called" << std::endl;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::setName(std::string name)
{
	_name = name;
}
