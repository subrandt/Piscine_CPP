/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:19:31 by subrandt          #+#    #+#             */
/*   Updated: 2023/02/28 11:20:43 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class	WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const & src) ;
		virtual ~WrongAnimal(void);

		std::string getType(void) const;
		void	setType(std::string const type);
		virtual void	makeSound(void) const;

		WrongAnimal & operator=(WrongAnimal const & rhs);


	protected:
		std::string	_type;

	private:
};

std::ostream &operator<<(std::ostream & o, WrongAnimal const & i);

#endif
