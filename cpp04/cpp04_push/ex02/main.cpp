/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:35:36 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/28 16:03:54 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	
	std::cout << "\nfifty-fifty Dogs and Cats: " << std::endl;
	const AAnimal* animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
	for (int i = 0; i < 4; i++)
	{
		std::cout << i << " : "  << *animals[i] << " : ";
		animals[i]->makeSound();
		for (int j = 0; j < 100; j++)
			std::cout << animals[i]->getBrain()->getIdeas()[j] ;
		std::cout << std::endl;
	}
	
	for (int i = 0; i < 4; i++)
	{
		delete animals[i];
	}
	std::cout << "Cats and Dogs are freed\n" << std::endl;


	//make deep copy of a dog: 
	const Dog* dog = new Dog();
	const Dog dog_copy(*dog);

	std::cout << "\ninitial dog:" << std::endl;
	std::cout << *dog << " : ";
	dog->makeSound();
	
	std::cout << "\ncopy of dog:" << std::endl;
	std::cout << dog_copy << " : " ;
	dog_copy.makeSound();
	std::cout << std::endl;

	delete dog;
	
	std::cout << "\ncopy of dog after deleting dog:" << std::endl;
	std::cout << dog_copy << " : " ;
	dog_copy.makeSound();
	std::cout << std::endl;

	return (0);
}