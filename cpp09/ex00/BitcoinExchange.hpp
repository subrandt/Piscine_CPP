/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:46:49 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/12 18:33:58 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <map>
# include <cstdlib>
# include <time.h>
# include <cstring>
# include <climits>


class Btc
{
	public:
		Btc(std::string const & inputfile);
		Btc(Btc const & src);
		~Btc(void);


	private:
		Btc(void);
		Btc & operator=(Btc const & rhs);
	
		void parse_data(std::string const & inputfile);
		std::map<std::string, float> _database;

};


#endif