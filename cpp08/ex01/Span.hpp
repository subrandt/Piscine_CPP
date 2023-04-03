/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:14:49 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/03 17:20:56 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Span
{
	public:

		Span(void);
		Span(unsigned int N);
		Span(Span const & src);
		~Span(void);

		Span & operator=(Span const & rhs);

		void	addNumber(void);
		void	shortestSpan(void);
		void	longestSpan(void);


	private:
		unsigned int _N;

		
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
		class TooManyNumberStoredException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

};

std::ostream & operator<<(std::ostream & o, Span const & rhs);

#endif