/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 08:32:45 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/02 14:06:18 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(void)
{
	std::cout << "Default constructor HumanB called" << std::endl;
	return ;
}

HumanB::HumanB(std::string name)
{
	std::cout << "Constructor HumanB called" << std::endl;
	this->_name = name;
	this->_weapon = NULL;
	return ;
}

HumanB::~HumanB(void)
{
	std::cout << "Destructor HumanB called" << std::endl;
	return ;
}

void	HumanB::attack(void)
{
	if (this->_weapon == NULL)
		return ;
	std::cout << this->_name << " attacks with their " << this->_weapon->getType();
	std::cout << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

