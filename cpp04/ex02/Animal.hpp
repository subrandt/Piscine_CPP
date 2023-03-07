/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:31:05 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/07 09:36:06 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class AAnimal
{
	public:
		AAnimal(void);
		AAnimal(AAnimal const & src);
		virtual ~AAnimal(void);

		std::string getType(void) const;
		virtual void	makeSound(void) const = 0;
		virtual Brain	*getBrain(void) const = 0;

		AAnimal & operator=(AAnimal const & rhs);


	protected:
		std::string	_type;

	private:
};

std::ostream &operator<<(std::ostream & o, AAnimal const & i);

#endif
