/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:57:48 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/20 14:05:35 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class	ClapTrap
{
	public:
		ClapTrap(void);						//Default constructor
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & copy);	//Copy constructor
		~ClapTrap(void);					//Destructor
		
		void attack(const std::string & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
		std::string  getName(void) const;
		void setName(std::string const name);
		int  getAttackDamage(void) const;
		int	 getHitPoints(void) const;
		int  getEnergyPoints(void) const;

		ClapTrap & operator=(ClapTrap const & rhs); //Assignement operator

	private:
		std::string _name;
		unsigned int _hit_points;
		unsigned int _energy_points;
		unsigned int _attack_damage;
};

std::ostream & operator<<(std::ostream & o, ClapTrap const & i);

#endif
