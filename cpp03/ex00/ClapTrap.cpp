/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 09:06:18 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/16 18:06:02 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	std::cout << "Constructor " << name << " called." << std::endl;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	std::cout << "Hit Points: " << this->_hit_points << std::endl;
	std::cout << "Energy Points: " << this->_energy_points << std::endl;
	std::cout << "Attack Damage: " << this->_attack_damage << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_hit_points = copy._hit_points;
	this->_energy_points = copy._energy_points;
	this->_attack_damage = copy._attack_damage;
}

void ClapTrap::attack(const std::string& target)
{
	if (_hit_points <= 0)
	{
		std::cout << this->_name << " has no more Hit Points and died." << std::endl;
		return ;
	}
	if (_energy_points <= 0)
	{
		std::cout << this->_name << " has no more Energy Points and can no longer attack." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target;
	std::cout << ", causing " << _attack_damage << " points of damage." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > _hit_points)
		std::cout << this->_name << " has not enough Hit Points." << std::endl;
	if (amount > _energy_points)
		std::cout << this->_name << " has not enough Energy Points." << std::endl;
	this->_energy_points -= amount;
	std::cout << this->_name << " loses " << amount << " Energy Points." << std::endl;

}

// void ClapTrap::beRepaired(unsigned int amount)
// {
	
// }

int ClapTrap::getAttackDamage(void) const
{
	return (_attack_damage);
}

void ClapTrap::setAttackDamage(int const attack_damage)
{
	_attack_damage = attack_damage;
}

int ClapTrap::getHitPoints(void) const
{
	return (_hit_points);
}

void ClapTrap::setHitPoints(int const hit_points)
{
	_hit_points = hit_points;
}

int  ClapTrap::getEnergyPoints(void) const
{
	return (_energy_points);
}

void ClapTrap::setEnergyPoints(int const energy_points)
{
	_energy_points = energy_points;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "Assignement operator called" << std::endl;
	if (this != &rhs)
		this->_attack_damage = rhs.getAttackDamage();
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream & operator<<(std::ostream & o, ClapTrap const & i)
{
	o << i.getAttackDamage();
	return (o);
}