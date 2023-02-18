/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:40:52 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/18 16:09:04 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	//init Clap Traps:
	ClapTrap a("Scooby-Doo");
	ClapTrap c(a); 				//calls copy constructor
	c.setName("Fred");
	ScavTrap d("Sammy");
	FragTrap e("Daphne");

	//print scores:
	std::cout << a << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;

	//Scooby-Doo attacks the target
	std::cout << "\nfirst attack: " << std::endl;
	a.attack(c.getName());
	c.takeDamage(1);
	c.beRepaired(1);
	
	d.guardGate();

	//Sammy attacks Daphne
	std::cout << "\nsecond attack: " << std::endl;
	d.attack(e.getName());
	e.takeDamage(d.getAttackDamage());
	std::cout << e << std::endl;
	e.beRepaired(1);

	//Daphne attacks Scooby-Doo:
	std::cout << "\nthird attack: " << std::endl;
	e.attack(a.getName());
	a.takeDamage(1);
	std::cout << a << std::endl;
	a.beRepaired(1);
	std::cout << e << std::endl;


	//FragTrap asks for high fives:
	e.highFivesGuys();
	
	return (0);
}