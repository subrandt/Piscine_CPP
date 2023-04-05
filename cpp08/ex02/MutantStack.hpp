/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:14:49 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/05 10:26:10 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:

		MutantStack<T>(void) : std::stack<T>() {}
		MutantStack<T>(MutantStack const & src) : std::stack<T>(src)
		{
			*this = src;
		}
		~MutantStack<T>(void) {}

		MutantStack<T> & operator=(MutantStack<T> const & rhs)
		{
			return(*this);
		}


		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator	begin(void)
		{
			return(this->c.begin());
		}
		
		iterator	end(void)
		{
			return (this->c.end());
		}


	private:

};


#endif