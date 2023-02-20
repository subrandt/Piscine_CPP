/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 09:06:18 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/20 14:11:16 by subrandt         ###   ########.fr       */
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
}

ClapTrap::ClapTrap(ClapTrap const & copy)
{
	std::cout << "Copy constructor called" << std::endl;
	// this->_hit_points = copy._hit_points;
	// this->_energy_points = copy._energy_points;
	// this->_attack_damage = copy._attack_damage;

	*this = copy; //same effect : copies all attributes with assignement operator
}

void ClapTrap::attack(const std::string & target)
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
	this->_energy_points -= 1;
	std::cout << "ClapTrap " << this->_name << " attacks " << target;
	std::cout << ", causing " << _attack_damage << " points of damage." << std::endl;
}


void ClapTrap::takeDamage(unsigned int amount)
{
	if (_energy_points <= 0)
	{
		std::cout << this->_name << " has not enough Energy Points." << std::endl;
		return ;
	}
	if (amount > _hit_points)
	{
		std::cout << this->_name << " has not enough Hit Points, he died." << std::endl;
		this->_hit_points = 0;
		return ;
	}
	this->_hit_points -= amount;
	std::cout << this->_name << " was attacked and loses " << amount << " Hit Points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hit_points <= 0)
	{
		std::cout << this->_name << " is already dead." << std::endl;
		return ;
	}
	if (_energy_points <= 0)
	{
		std::cout << this->_name << " has not enough Energy Points." << std::endl;
		return ;
	}
	this->_hit_points += amount;
	this->_energy_points -= 1;
	std::cout << this->_name << " loses 1 energy point and repaired himself";
	std::cout << " and gained " << amount << " Hit Points." << std::endl;
}

std::string ClapTrap::getName(void) const
{
	return (_name);
}

void ClapTrap::setName(std::string const name)
{
	_name = name;
}

int ClapTrap::getAttackDamage(void) const
{
	return (_attack_damage);
}

int ClapTrap::getHitPoints(void) const
{
	return (_hit_points);
}

int  ClapTrap::getEnergyPoints(void) const
{
	return (_energy_points);
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs) //Copie tous les attributs
{
	std::cout << "Assignement operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_attack_damage = rhs.getAttackDamage();
		this->_energy_points = rhs.getEnergyPoints();
		this->_hit_points = rhs.getHitPoints();
	}
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor " << this->_name << " called" << std::endl;
}

std::ostream & operator<<(std::ostream & o, ClapTrap const & i)
{
	o << i.getName() << "'s scores: " << std::endl;
	o << "  Hit Points: " << i.getHitPoints() << std::endl;
	o << "  Energy Points: " << i.getEnergyPoints() << std::endl;
	o << "  Attack Damage: " << i.getAttackDamage() ;
	return (o);
}
