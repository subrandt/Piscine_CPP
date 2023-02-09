/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 08:32:45 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/02 12:04:14 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "Default constructor Weapon called" << std::endl;
	return ;
}

Weapon::Weapon(std::string type)
{
	std::cout << "Constructor Weapon called" << std::endl;
	this->_type = type;
	return ;
}

Weapon::~Weapon(void)
{
	std::cout << "Destructor Weapon called" << std::endl;
	return ;
}

std::string	Weapon::getType() const
{
	return (_type);
}

void	Weapon::setType(std::string type)
{
	_type = type;
}
