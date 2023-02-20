/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:31:05 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/20 16:17:24 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CPP
# define ANIMAL_CPP

# include <iostream>

class	Animal
{
	public:
		Animal(void);
		Animal(std::string type);
		Animal(Animal const & copy);
		~Animal(void);

		std::string getType(void) const;
		void	makeSound(void) const; //mettre dans les classes Cat et Dog???

		Animal & operator=(Animal const & rhs);


	protected:
		std::string	_type;

	private:
};

std::ostream &operator<<(std::ostream & o, Animal const & i);

#endif