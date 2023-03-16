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

		static bool	convert(std::string const & literal);

	private:
		ScalarConverter(void);
		
		static int	getType(const std::string & literal);
		
		static bool	isChar(std::string const & literal);
		static bool isInt(std::string const & literal);
		static bool isFloat(std::string const & literal);
		static bool isDouble(std::string const & literal);

		static void convertChar(char const & literal);

};

// std::ostream & operator<<(std::ostream & o, ScalarConverter const & rhs);

#endif