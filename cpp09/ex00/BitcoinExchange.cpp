/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:45:53 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/12 18:47:14 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Btc::Btc(void)
{
	// std::cout << "Default constructor called, not used here" << std::endl;
}

Btc::Btc(std::string const & inputfile)
{
	// std::cout << "Default Inputfile constructor called" << std::endl;
	parse_data(inputfile);
}

Btc::Btc(Btc const & src)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Btc::~Btc(void)
{
	// std::cout << "Default destructor called " << std::endl;
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

// static void check_inputfile(std::string const & inputfile)
// {

// }



//check_database :
//check key (it->first)
	

//check value (it->second)
	

//to check date format in database
bool	check_valid_date(std::string key)
{	
	if (key.length() != 10)
	{
		std::cerr << "Error in database : wrong date format" << std::endl;
		return (false);
	}
	//format date YYYY-MM-DD -> strptime
	//(années bisextiles)
	//date valable (bitcoin depuis 2009-01-03) 
	return (true);
}

bool	check_valid_value(std::string value)
{
	//check atof (overflow, p_end ...)
	char *p_end;
	long long value_f;
	
	value_f = strtof(value.c_str(), &p_end);
	if (value.compare("") == 0)
	{
		std::cerr << "Error in database: empty bitcoin entry" << std::endl;
	}
	if (strlen(p_end) != 0)
	{
		std::cerr << "Error in database: wrong bitcoin format - not only digits" << std::endl;
		return (false);
	}
	
	if (value_f > INT_MAX)// NE FONCTIONNE PAS !!!
	{
		std::cerr << "Error in database: wrong bitcoin format - value out of range" << std::endl;
		return (false);
	}


	//max/min value
	if (atof(value.c_str()) < 0)
	{
		std::cerr << "Error in database: wrong bitcoin format - negativ value" << std::endl;
		return (false);
	}
	//format value - other checks??
	return (true);
}

void	Btc::parse_data (std::string const & inputfile)
{
	std::fstream 	fs ("data.csv");

	if (open_file(inputfile) == false)
		return ;
	if (open_file("data.csv") == false)
		return ;

	if (fs.is_open())
	{
		std::string	line;
		
		//check first line :
		getline(fs, line);
		if (line.compare("date,exchange_rate") != 0)
		{
			std::cerr << "Error in database : wrong first line" << std::endl;
			return ;
		}

		//fill map<> : _database[key] = value
		while (getline(fs, line))
		{
			//split date :
			size_t comma_pos;
			if (line.find(',') == std::string::npos)
			{
				std::cerr << "Error in database : no comma separating data" << std::endl;
				continue ;
			}
			else
			{
				comma_pos = line.find(',');
			}
			size_t begin = 0;
			size_t end = line.length();
			if (check_valid_date(line.substr(begin, (comma_pos))) == true)
			{

				std::string key = line.substr(begin, (comma_pos));



				//split value :
				if (check_valid_value(line.substr((comma_pos + 1), end)) == true)
				{
					float value = atof(line.substr((comma_pos + 1), end).c_str());//overflow float ????
					_database[key] = value;
					
					// print map<> :
					std::cout << key << " - " << value << std::endl;
				}
			}
		}
	}
	// check_inputfile(inputfile);
}
