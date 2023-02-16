/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:57:48 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/16 18:04:49 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

class	ClapTrap
{
	public:
		ClapTrap(void);					//Default constructor
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & copy);//Copy constructor
		~ClapTrap(void);				//Destructor
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
		int  getAttackDamage(void) const;
		void setAttackDamage(int const attack_damage);
		int	 getHitPoints(void) const;
		void setHitPoints(int const hit_points);
		int  getEnergyPoints(void) const;
		void setEnergyPoints(int const energy_points);

		ClapTrap & operator=(ClapTrap const & rhs); //Assignement operator

	private:
		std::string _name;
		unsigned int _hit_points;
		unsigned int _energy_points;
		unsigned int _attack_damage;
};

#endif