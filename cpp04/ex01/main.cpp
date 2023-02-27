/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:35:36 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/27 17:54:28 by subrandt         ###   ########.fr       */
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
	// std::cout << "\nAnimal sound check: " << std::endl;

	// //Animal makes animal sound
	// const Animal* meta = new Animal();
	// meta->makeSound();
	
	// //Dog makes wouaf
	// const Animal* j = new Dog();
	// std::cout << *j << " : ";
	// j->makeSound();

	// //Cat makes miaou
	// const Animal* i = new Cat();
	// std::cout << *i << " : ";
	// i->makeSound();
	
	// delete(i);
	// delete(j);
	// delete(meta);


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
		std::cout << animals[i]->getBrain()->getIdeas()[1] << std::endl;
	}
	
	//deep copy : 
	Animal animal_cpy(*animals[1]);

	std::cout << "\ninitial dog:" << std::endl;
	std::cout << *animals[1] << " : ";
	animals[1]->makeSound();
	std::cout << animals[1]->getBrain()->getIdeas()[1] << std::endl;
	
	std::cout << "\ncopy of dog:" << std::endl;
	std::cout << animal_cpy << " : " ;
	animal_cpy.makeSound();
	// std::cout << animal_cpy.getBrain()->getIdeas()[1] << std::endl;
	std::cout << std::endl;
	//justifier copie profonde


	//delete ne free pas la copie profonde !!!
	for (int i = 0; i < 4; i++)
	{
		delete animals[i];
	}
	return (0);
}