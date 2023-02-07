/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:02:16 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/07 10:56:12 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//allocate zombies on the heap - return, announce and delete in main
Zombie* newZombie(std::string name)
{
	Zombie* jerks = new Zombie(name);
	std::cout << name << " created (with new)" << std::endl;
	return (jerks);
}
