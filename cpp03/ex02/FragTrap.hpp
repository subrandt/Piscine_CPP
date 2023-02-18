/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:53:00 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/18 13:58:47 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

class	FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(ScavTrap const & copy);
		~FragTrap(void);

		void highFivesGuys(void);
		FragTrap & operator=(FragTrap const & rhs);

	private:
};

std::ostream & operator<<(std::ostream & o, FragTrap const & i);

#endif