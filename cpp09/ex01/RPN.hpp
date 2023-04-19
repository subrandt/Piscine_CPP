/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:47:53 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/19 14:25:07 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <cstdlib>

class RPN
{
	public:
		RPN(RPN const & src);
		RPN(std::string const & operation);

		~RPN(void);
		

	private:
		RPN(void);
		RPN & operator=(RPN const & rhs);


		void RPN_operation(std::string const & operation);

		std::stack<float> _stack;
};

bool parsing(std::string const & argv);


#endif