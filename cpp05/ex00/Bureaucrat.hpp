/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:18:05 by subrandt          #+#    #+#             */
/*   Updated: 2023/03/02 17:57:59 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat(void);

		Bureaucrat & operator=(Bureaucrat const & rhs);

		const std::string	getName(void) const;
		int 				getGrade(void) const;


	private:
		const std::string _name;
		int	_grade;

};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif