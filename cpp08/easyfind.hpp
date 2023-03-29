/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:23:40 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/29 13:59:52 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

template<typename T>
class Easyfind
{
	public:
		Easyfind<T>(void);
		Easyfind<T>(unsigned int n);
		~Easyfind<T>(void);

		Easyfind<T> & operator=(Easyfind<T> const & rhs);
		T & operator[](unsigned int const & index);
		
	
	private:
		class Easyfind : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

# include "easyfind.tpp"


#endif