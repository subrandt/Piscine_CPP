/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:51:32 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/20 14:21:14 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Constructor FragTrap " << name << " called" << std::endl;
	this->_attack_damage = 30;
	this->_energy_points = 100;
	this->_hit_points = 100;
}
FragTrap::FragTrap(FragTrap const & copy) : ClapTrap(copy)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = copy;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor " << this->_name << " called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Give me five !!!" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	std::cout << "FragTrap assignement operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_attack_damage = rhs.getAttackDamage();
		this->_energy_points = rhs.getEnergyPoints();
		this->_hit_points = rhs.getHitPoints();
	}
	return (*this);
}

std::ostream & operator<<(std::ostream & o, FragTrap const & i)
{
	o << i.getName() << "'s scores: " << std::endl;
	o << "  Hit Points: " << i.getHitPoints() << std::endl;
	o << "  Energy Points: " << i.getEnergyPoints() << std::endl;
	o << "  Attack Damage: " << i.getAttackDamage() ;
	return (o);
}