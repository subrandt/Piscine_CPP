/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 09:03:19 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/20 14:08:04 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	//init Clap Traps:
	ClapTrap a("Scooby-Doo");
	ClapTrap b("the target");
	ClapTrap c(b); 				//calls copy constructor
	ScavTrap d("Sammy");
	ScavTrap e("Toto");
	e = d;
	c.setName("Fred");

	//print scores:
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;

	//Scooby-Doo attacks the target
	std::cout << "\nfirst attack: " << std::endl;
	a.attack(b.getName());
	b.takeDamage(1);
	b.beRepaired(1);
	d.guardGate();

	//Sammy attacks Fred
	std::cout << "\nsecond attack: " << std::endl;
	d.attack(b.getName());
	b.takeDamage(d.getAttackDamage());
	std::cout << b << std::endl;
	b.beRepaired(1);

	return (0);
}
