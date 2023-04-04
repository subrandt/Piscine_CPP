/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:23:28 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/04 17:05:33 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _N(2)
{
	// std::cout << "Default constructor called" << std::endl;
}

Span::Span(unsigned int N)
{
	if (N <= 0)
	{
		throw (Span::NoNumbersStoredException());
	}
	if (N == 1)
	{
		throw (Span::OnlyOneNumberStoredException());
	}
	else
	{
		_N = N;

	}

	// std::cout << "N constructor called" << std::endl;

}

Span::Span(Span const & src)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Span::~Span(void)
{
	// std::cout << "Default destructor called " << std::endl;
}

Span & Span::operator=(Span const & rhs)
{
	// std::cout << "Assignement operator called" << std::endl;
	if (this != &rhs)
	{
		(void)rhs;
		// _N = rhs._N;
	}
	return (*this);
}

void	Span::addNumber(int number)
{
	if (span.size() >= _N)
		throw(Span::TooManyNumbersStoredException());
	span.push_back(number);
	// std::cout << "number = " << number;
	// std::cout << ", size = " << span.size() << std::endl;
	// std::cout << "Size private : " << _N << std::endl;

}

unsigned int	Span::shortestSpan(void)
{
	sort(span.begin(), span.end());

	std::vector<int>::iterator it_begin;
	std::vector<int>::iterator it_end;
	std::vector<int>::iterator it_next;

	it_begin = span.begin();
	it_end = span.end();
	it_next = it_begin;
	it_next++;

	int delta;
	delta = *it_next - *it_begin;
	while (it_next != it_end)
	{
		if ((*it_next - *it_begin) <= delta)
		{
			delta = *it_next - *it_begin;
		}
		it_next++;
		it_begin++;
	}
	return (delta);
}

unsigned int	Span::longestSpan(void)
{
	
	std::vector<int>::iterator it_begin;
	std::vector<int>::iterator it_end;

	it_begin = span.begin();
	it_end = span.end();


	sort(span.begin(), span.end());

	std::vector<int>::iterator it;
	it = it_begin;
	while (it != it_end)
	{
		// std::cout << *it << std::endl;
		it++;
	}
	it--;
	return (*it - *it_begin);
}

const char * Span::NoNumbersStoredException::what() const throw()
{
	return ("<ERROR> No numbers stored, no span can be found.");
}

const char * Span::OnlyOneNumberStoredException::what()  const throw()
{
	return ("<ERROR> Only one number stored, no span can be found.");
}

const char * Span::TooManyNumbersStoredException::what() const throw()
{
	return ("<ERROR> Already N numbers stored, no new element can be added.");
}