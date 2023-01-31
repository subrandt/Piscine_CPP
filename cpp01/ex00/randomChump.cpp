/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:02:45 by subrandt          #+#    #+#             */
/*   Updated: 2023/01/31 16:10:21 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//allocate zombies on the stack
void randomChump(std::string name)
{
	Zombie idiots(name);
	std::cout <<  name << " created" << std::endl;
	idiots.announce();
	std::cout << name << " killed" << std::endl;
	return ;
}
