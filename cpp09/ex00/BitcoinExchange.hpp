/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:46:49 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/18 17:52:28 by subrandt         ###   ########.fr       */
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
# include <cctype>


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
		void check_inputfile(std::string const & inputfile);
		void calculate_output_value(void);
		void print_output(void);


		std::map<std::string, float> _database;

		std::string _output_date;
		float		_output_nb_btc;
		float		_btc_value;

};


#endif