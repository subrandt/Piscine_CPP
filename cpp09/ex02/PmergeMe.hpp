/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:27:29 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/28 14:13:58 by subrandt         ###   ########.fr       */
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

		//initializer function
		void		init_container(char **argv);
		//time functions:
		void		get_time(long long start_time, long long parsing_time);
		void		get_vector_time(void);
		void		get_deque_time(void);

		//sort functions
		std::vector<int>	sort_vector(std::vector<int> vector);
		std::vector<int>	insert_sort_vector(std::vector<int> vector);
		std::vector<int>	merge_sort_vector(std::vector<int> left, std::vector<int> right);

		std::deque<int>		sort_deque(std::deque<int> deque);
		std::deque<int>		insert_sort_deque(std::deque<int> deque);
		std::deque<int>		merge_sort_deque(std::deque<int> left, std::deque<int> right);
		
		//print functions
		void	print_after(void);


	private:
		//containers
		std::vector<int> _vector;
		std::deque<int> _deque;

		//time
		long long _start_time;
		long long _parsing_time;
		long long _vector_time;

};

long long	get_start_time(struct timeval *start_time);
long long	get_parsing_time(struct timeval *time, long long start_time);



#endif