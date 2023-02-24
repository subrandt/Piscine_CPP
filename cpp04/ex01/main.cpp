/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:35:36 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/24 14:47:44 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
// #include "Brain.hpp"

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

	std::cout << "\nfifty-fifty: " << std::endl;
	const Animal* animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
	for (int i = 0; i < 4; i++)
	{
		std::cout << i << " : "  << *animals[i] << " : ";
		animals[i]->makeSound();
	}
	
	//copie profonde : 
	const Animal animal_cpy = *animals[1];
	std::cout << *animals[1] << " : ";
	animals[1]->makeSound();
	//justifier copie profonde avec impression de random std::string


	//delete ne free pas la copie profonde !!!
	for (int i = 0; i < 4; i++)
	{
		delete animals[i];
	}
	return (0);
}