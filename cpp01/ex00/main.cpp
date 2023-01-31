/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:00:02 by subrandt          #+#    #+#             */
/*   Updated: 2023/01/31 16:07:27 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	randomChump("Chump");
	
	Zombie *jerks = newZombie("Jerk");
	jerks->announce();
	std::cout << jerks << " destroyed (delete)" << std::endl;
	delete jerks;
	return (0);
}
