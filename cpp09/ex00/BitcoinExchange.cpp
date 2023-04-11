/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:45:53 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/11 17:53:22 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Btc::Btc(void)
{
	std::cout << "Default constructor called, not used here" << std::endl;
}

Btc::Btc(std::string const & inputfile)
{
	std::cout << "Default Inputfile constructor called" << std::endl;
	parse_data(inputfile);
}



Btc::Btc(Btc const & src)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Btc::~Btc(void)
{
	std::cout << "Default destructor called " << std::endl;
}

Btc & Btc::operator=(Btc const & rhs)
{
	(void)rhs;
	return (*this);
}

static bool open_file(std::string const & inputfile)
{
	std::fstream fs;

	fs.open(inputfile.c_str());
	if (!fs.is_open())
	{
		std::cerr << "Error opening inputfile" << std::endl;
		fs.close();
		return (false);
	}
	std::cout << inputfile << " successfully opened" << std::endl;
	return (true);
}

void	Btc::parse_data (std::string const & inputfile)
{
	
	std::fstream 	fs;

	if (open_file(inputfile) == false)
		return ;
	if (open_file("data.csv") == false)
		return ;

	if (fs.is_open())
	{
		std::string	line;
		 //remplir la map<> : _database[key] = value
		while (getline(fs, line))
		{
			//split date :
			// size_t begin = 0;
			size_t end = line.length();
			// for (begin; begin < end, )
			// 	size_t comma_pos = line.find(",");
			std::string key = line.substr(0, 9);// pas top le substr... plutot find()

			//split value :
			float value = atof(line.substr(11, end).c_str());
			_database[key] = value;
		}
	}

}
