/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:49:59 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/20 14:30:56 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);	
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & copy);
		~ScavTrap(void);
		
		void attack(const std::string & target);
		void guardGate(void);

		ScavTrap & operator=(ScavTrap const & rhs);

	private:
	
};

#endif