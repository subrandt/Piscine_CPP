/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:35:36 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/23 13:02:42 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << "\nAnimal sound check: " << std::endl;

	//Animal makes animal sound
	const Animal* meta = new Animal();
	meta->makeSound();
	
	//Dog makes wouaf
	const Animal* j = new Dog();
	std::cout << *j << " : ";
	j->makeSound();

	//Cat makes miaou
	const Animal* i = new Cat();
	std::cout << *i << " : ";
	i->makeSound();
	
	delete(i);
	delete(j);
	delete(meta);


	// std::cout << "\nWrong Animal sound check: " << std::endl;

	//Wrong animals make wrong sounds
	// WrongAnimal* toto = new WrongAnimal();
	// toto->makeSound();
	// const WrongAnimal* kiki = new WrongCat();
	// std::cout << *kiki << " : ";
	// kiki->makeSound();
	// delete(kiki);
	// delete(toto);


	return (0);
}