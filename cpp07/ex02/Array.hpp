/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:23:40 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/27 17:42:45 by subrandt         ###   ########.fr       */
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
	
	private:
		unsigned int _n;//number of elements of array[]
		T * _array;
	
		int	size(); //A member function size() that returns the number of elements 
						//in the array. This member function takes no parameter 
						//and musn’t modify the current instance.

		class InvalidIndex : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif