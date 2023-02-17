/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:06:03 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/17 16:28:07 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Constructor ScavTrap " << name << " called." << std::endl;
	this->_attack_damage = 20;
	this->_energy_points = 50;
	this->_hit_points = 100;
	print_scores();
}

ScavTrap::ScavTrap(ScavTrap const & copy) : ClapTrap(copy)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "ScavTrap assignement operator called" << std::endl;
	if (this != &rhs)
	{
		this->_attack_damage = rhs.getAttackDamage();
		this->_energy_points = rhs.getEnergyPoints();
		this->_hit_points = rhs.getHitPoints();
	}
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor " << this->_name << " called" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << this->getName() << " is now in Gate keeper mode" << std::endl;
}

std::ostream & operator<<(std::ostream & o, ScavTrap const & i)
{
	o << i.getAttackDamage();
	return (o);
}