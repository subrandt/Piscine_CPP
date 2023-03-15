/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:18:05 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/03 16:38:04 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

# include <iostream>
# include <cstdlib>
# include <limits>

//define pour types ??

class ScalarConverter
{
	public:

		ScalarConverter(ScalarConverter const & src);
		~ScalarConverter(void);

		ScalarConverter & operator=(ScalarConverter const & rhs);

		static bool	convert(std::string literal);

	private:
		ScalarConverter(void);
		
		static int	getType(const std::string literal);
		static bool	isChar(const std::string literal);

};

// std::ostream & operator<<(std::ostream & o, ScalarConverter const & rhs);

#endif