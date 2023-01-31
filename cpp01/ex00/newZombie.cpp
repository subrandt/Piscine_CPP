/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:02:16 by subrandt          #+#    #+#             */
/*   Updated: 2023/01/31 15:55:33 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//allocate zombies on the heap - return, announce and delete in main
Zombie* newZombie(std::string name)
{
	Zombie* jerks = new Zombie(name);
	std::cout << jerks << " created (new)" << std::endl;
	return (jerks);
}
