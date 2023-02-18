/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:06:03 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/18 15:50:56 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Constructor ScavTrap " << name << " called" << std::endl;
	this->_attack_damage = 20;
	this->_energy_points = 50;
	this->_hit_points = 100;
}

ScavTrap::ScavTrap(ScavTrap const & copy) : ClapTrap(copy)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = copy;
}

void ScavTrap::attack(const std::string & target)
{
	if (_hit_points <= 0)
	{
		std::cout << this->_name << " has no more Hit Points and already died." << std::endl;
		return ;
	}
	if (_energy_points <= 0)
	{
		std::cout << this->_name << " has no more Energy Points and can no longer attack." << std::endl;
		return ;
	}
	this->_energy_points -= 1;
	std::cout << "ScavTrap " << this->_name << " attacks " << target;
	std::cout << ", causing " << _attack_damage << " points of damage." << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << this->getName() << " is now in Gate keeper mode" << std::endl;
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

std::ostream & operator<<(std::ostream & o, ScavTrap const & i)
{
	o << i.getName() << "'s scores: " << std::endl;
	o << "  Hit Points: " << i.getHitPoints() << std::endl;
	o << "  Energy Points: " << i.getEnergyPoints() << std::endl;
	o << "  Attack Damage: " << i.getAttackDamage() ;
	return (o);
}