/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:31:05 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/28 11:16:33 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	Animal
{
	public:
		Animal(void);
		Animal(Animal const & src) ;
		virtual ~Animal(void);

		std::string getType(void) const;
		void	setType(std::string const type);
		virtual void	makeSound(void) const;

		Animal & operator=(Animal const & rhs);


	protected:
		std::string	_type;

	private:
};

std::ostream &operator<<(std::ostream & o, Animal const & i);

#endif
