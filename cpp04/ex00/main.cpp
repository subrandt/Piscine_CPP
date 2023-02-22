/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:35:36 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/22 17:16:01 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal* meta = new Animal();
	Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << *j << std::endl;
	std::cout << *i << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete(i);
	delete(j);
	delete(meta);
	return (0);
}