/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:41:50 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/28 15:43:52 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public AAnimal
{
	public:
		Dog(void);
		Dog(Dog const & src);
		~Dog(void);

		void	makeSound(void) const;
		Brain	*getBrain(void) const;


		Dog & operator=(Dog const & rhs);

	protected:

	private:
		Brain *_brain;
	
};

#endif