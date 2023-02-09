/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:02:16 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/09 11:06:17 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//allocate zombies on the heap - return, announce and delete in main
Zombie* newZombie(std::string name)
{
	Zombie* jerks = new Zombie(name);
	return (jerks);
}
