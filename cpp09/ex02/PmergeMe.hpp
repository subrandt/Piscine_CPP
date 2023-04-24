/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:27:29 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/24 17:39:55 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_ME_HPP
# define PMERGE_ME_HPP

# include <iostream>
# include <vector>
# include <deque>
# include <climits>
# include <cstring>
# include <cstdlib>


class PmergeMe
{
	public:
		PmergeMe(void);
		PmergeMe(PmergeMe const & src);
		PmergeMe & operator=(PmergeMe const & rhs);
		~PmergeMe(void);

		void	init_container(char **argv);
		void	sort_algo(void);
		void	insert_sort(std::vector<int> vector);

	private:
		std::vector<int> _vector;
		std::vector<int> _vector_left;
		std::vector<int> _vector_right;

		std::deque<int> _deque;

};

#endif