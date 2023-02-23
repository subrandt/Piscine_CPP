/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:02:02 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/23 12:59:08 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const & copy);
		~Cat(void);

		void	makeSound(void) const;

		Cat & operator=(Cat const & rhs);

	protected:

	private:
		Brain *_brain;

};

std::ostream &operator<<(std::ostream &o, Cat const & i);

#endif
