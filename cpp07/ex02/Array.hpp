/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:23:40 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/28 11:26:21 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array
{
	public:
		Array<T>(void);
		Array<T>(unsigned int n);
		Array<T>(Array<T> const & src);
		~Array<T>(void);

		Array<T> & operator=(Array<T> const & rhs);
		T & operator[](unsigned int const & index);
		
	
	private:
		unsigned int _n;
		T * _array;
	
		unsigned int	size();

		class InvalidIndex : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

# include "Array.tpp"


#endif