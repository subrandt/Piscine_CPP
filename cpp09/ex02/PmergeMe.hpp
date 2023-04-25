/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:27:29 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/25 16:41:34 by subrandt         ###   ########.fr       */
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
# include <algorithm>
# include <sys/time.h>


class PmergeMe
{
	public:
		PmergeMe(void);
		PmergeMe(PmergeMe const & src);
		PmergeMe & operator=(PmergeMe const & rhs);
		~PmergeMe(void);

		void		init_container(char **argv);

		//sort functions
		void		sort_algo(void);
		void		insert_sort(std::vector<int> & vector);
		void		merge_sort(std::vector<int> & vector_left, std::vector<int> & vector_right);
		


	private:
		std::vector<int> _vector;
		std::vector<int> _vector_left;
		std::vector<int> _vector_right;

		std::deque<int> _deque;

};

//time functions:
long long	get_start_time(struct timeval *start_time);
long long	get_parsing_time(struct timeval *time, long long start_time);

#endif