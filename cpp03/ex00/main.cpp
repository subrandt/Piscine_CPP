/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 09:03:19 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/20 13:53:12 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	//init Clap Traps:
	ClapTrap a("Scooby-Doo");
	ClapTrap b("the target");
	ClapTrap c(a); 				//calls copy constructor
	ClapTrap d("Toto");
	d = a;
	c.setName("Fred");
	//print scores:
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;

	//Scooby-Doo attacks the target
	std::cout << "\nfirst attack: " << std::endl;
	a.attack(c.getName());
	c.takeDamage(1);
	c.beRepaired(1);

	//Scooby-Doo attacks Fred
	std::cout << "\nsecond attack: " << std::endl;
	a.attack(b.getName());
	b.takeDamage(1);
	std::cout << b << std::endl;
	b.beRepaired(1);

	return (0);
}
