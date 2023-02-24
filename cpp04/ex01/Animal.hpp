/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:31:05 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/24 09:59:01 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
	public:
		Animal(void);
		Animal(Animal const & copy) ;
		virtual ~Animal(void);

		std::string getType(void) const;
		virtual void	makeSound(void) const;

		Animal & operator=(Animal const & rhs);


	protected:
		std::string	_type;

	private:
};

std::ostream &operator<<(std::ostream & o, Animal const & i);

#endif
