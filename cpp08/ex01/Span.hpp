/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:14:49 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/04 15:55:51 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
	public:

		Span(unsigned int N);
		Span(Span const & src);
		~Span(void);

		Span & operator=(Span const & rhs);

		void			addNumber(int number);
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);
		
		class NoNumbersStoredException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class OnlyOneNumberStoredException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class TooManyNumbersStoredException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

	private:
		Span(void);
		
		std::vector<int> span;
		unsigned int _N;

};

std::ostream & operator<<(std::ostream & o, Span const & rhs);

#endif