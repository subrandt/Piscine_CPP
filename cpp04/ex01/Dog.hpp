/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:41:50 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/23 12:53:18 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const & copy);
		~Dog(void);

		void	makeSound(void) const;

		Dog & operator=(Dog const & rhs);

	protected:

	private:
		Brain *_brain;
	
};

std::ostream &operator<<(std::ostream &o, Dog const & i);

#endif