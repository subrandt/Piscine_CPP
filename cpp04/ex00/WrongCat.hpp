/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:02:02 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/23 09:38:24 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(WrongCat const & copy);
		~WrongCat(void);

		void	makeSound(void) const;

		WrongCat & operator=(WrongCat const & rhs);

	protected:

	private:

};

std::ostream &operator<<(std::ostream &o, WrongCat const & i);

#endif
