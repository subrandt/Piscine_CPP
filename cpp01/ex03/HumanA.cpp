/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 08:32:45 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/03 16:07:02 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
	: _weapon(weapon) //initialisation
{
	std::cout << "Constructor HumanA called" << std::endl;
	this->_name = name;
	return ;
}

HumanA::~HumanA(void)
{
	std::cout << "Destructor HumanA called" << std::endl;
	return ;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType();
	std::cout << std::endl;
	return ;
}
