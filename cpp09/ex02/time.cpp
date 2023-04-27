/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:15:03 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/27 17:08:08 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


//get the timestamp of the beginning of the programm, in order to get the
//relative timestamp.
long long	get_start_time(struct timeval *time)
{
	gettimeofday(time, NULL);
	long long	start_time = (time->tv_sec * 1000000)	+ (time->tv_usec);
	return (start_time);
}

//get the timestamp after the parsing
long long get_parsing_time(struct timeval *time, long long start_time)
{
	gettimeofday(time, NULL);
	long long 	parsing_time = (time->tv_sec * 1000000)	+ (time->tv_usec) - start_time;

	return (parsing_time);

}

// get timestamp of the two containers in order to compare std::vector and std::deque
long long	get_vector_time(struct timeval *time, long long start_time)
{
	gettimeofday(time, NULL);
	long long 	process_time = (time->tv_sec * 1000000)	+ (time->tv_usec) - start_time;
	
	return (process_time);
}

long long	get_deque_time(struct timeval *time, long long start_time)
{
	gettimeofday(time, NULL);
	long long 	process_time = (time->tv_sec * 1000000)	+ (time->tv_usec) - start_time;
	
	return (process_time);
}