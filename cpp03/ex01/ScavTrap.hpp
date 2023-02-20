/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:49:59 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/20 14:13:39 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);					//Default constructor
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & copy);//Copy constructor
		~ScavTrap(void);				//Destructor
		
		void attack(const std::string & target);
		void guardGate(void);

		ScavTrap & operator=(ScavTrap const & rhs); //Assignement operator

	private:
	
};

#endif
