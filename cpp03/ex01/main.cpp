/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 09:03:19 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/17 16:22:28 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	//init Clap Traps:
	ClapTrap a("Scooby-Doo");
	ClapTrap b("the target");
	ScavTrap d("Sammy");
	//ClapTrap c(a); 				//calls copy constructor
	//c.setName("Fred");
	//c.print_scores();
	//ScavTrap e(d);
	//c.setName("Daphne");
	//c.print_scores();

	//Scooby-Doo attacks the target
	std::cout << "\nfirst attack: " << std::endl;
	a.attack(b.getName());
	b.takeDamage(1);
	b.beRepaired(1);
	d.takeDamage(1);
	d.beRepaired(1);
	d.guardGate();

	//Scooby-Doo attacks Fred
	// std::cout << "\nsecond attack: " << std::endl;
	// a.attack(b.getName());
	// b.takeDamage(1);
	// b.beRepaired(1);

	
	return (0);
}