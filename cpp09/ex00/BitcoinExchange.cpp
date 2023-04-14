/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:45:53 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/14 16:57:58 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


/* ************************************************************************** */
/*								Canonical Form								  */
/* ************************************************************************** */

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

/* ************************************************************************** */
/*								Other Functions								  */
/* ************************************************************************** */

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

//to check date if format is a valid calendar date
static bool	check_valid_calendar_date(std::string const & key)
{
	struct tm tm = {};
	char *time = strptime(key.c_str(), "%Y-%m-%d", &tm);
	int d = tm.tm_mday;
	int m = tm.tm_mon + 1;
	int y = tm.tm_year + 1900;

    if (time == NULL) 
	{
		std::cout << "Error in database: wrong date" << std::endl;
		return (false);
	}
	else
	{
		//date valable (bitcoin depuis 2009-01-03) 
		if ((y == 2009 && m == 1 && d < 3) || y < 2009)
		{
			std::cerr << "Error in database: date before bitcoin creation" << std::endl;
			return (false);
		}
		//month with 30 days + 30fev
		if ((m == 2 && d == 30) || ((m == 4 || m == 6 || m == 9 || m == 11) && d == 31))
		{
			std::cerr << "Error in database: month doesn't have 31 days" << std::endl;
			return (false);
		}
		//(années bisextiles)
		if (((y % 4 != 0) || (y % 100 == 0)) && (y % 400 != 0))
		{
			if (m == 2 && d == 29)
			{
				std::cerr << "Error in database: wrong date - not a leap year" << std::endl;
				return (false);
			}
		}
	}
	return (true);
	
}

//to check date format in database
static bool	check_valid_date(std::string const & key)
{	
	if (key.length() != 10)
	{
		std::cerr << "Error: wrong date format" << std::endl;
		return (false);
	}
	std::string day;
	day = key.substr(8, 2);
	if (atoi(day.c_str()) > 31 || std::isdigit(day[1]) == 0)
	{
		std::cerr << "Error: wrong date" << std::endl;
		return (false);
	}

	//format date YYYY-MM-DD -> strptime : check if right format
	if (check_valid_calendar_date(key) == false)
		return (false);
    
	return (true);
}

//to check if the bitcoin value is valid
static  bool	check_valid_value(std::string const & value)
{
	char *p_end;
	long long value_f;
	
	value_f = strtof(value.c_str(), &p_end);
	if (value.compare("") == 0)
	{
		std::cerr << "Error in database: empty bitcoin entry" << std::endl;
		return (false);
	}
	if (strlen(p_end) != 0)
	{
		std::cerr << "Error in database: wrong bitcoin format - not only digits" << std::endl;
		return (false);
	}
	
	if (value_f > INT_MAX)// NE FONCTIONNE PAS SUPERIEUR A exp18!!!
	{
		std::cerr << "Error in database: wrong bitcoin format - value out of range" << std::endl;
		return (false);
	}
	return (true);
}

//to check if the given bitcoin number is valid
static  bool	check_valid_btc_number(std::string const & btc_nb) //float or integer
{
	char *p_end;
	long int value_f;
	
	value_f = strtof(btc_nb.c_str(), &p_end);
	if (btc_nb.compare("") == 0)
	{
		std::cerr << "Error inputfile: no value" << std::endl;
		return (false);
	}
	if (strlen(p_end) != 0)
	{
		std::cerr << "Error inputfile: value error" << std::endl;
		return (false);
	}
	
	//max/min value
	if (value_f <= 0 || value_f >= 1000)
	{
		std::cerr << "Error inputfile: value out of range" << std::endl;
		return (false);
	}
	return (true);
}

static bool check_empty_line(std::string const & line)
{
	if (line.compare("") == 0)
		return (true);
	return (false);
}

static void check_inputfile(std::string const & inputfile)
{
	std::fstream fs (inputfile.c_str());

	if (fs.is_open())
	{
		std::string	line;
		
		//check first line :
		getline(fs, line);
		if (line.compare("date | value") != 0)
		{
			std::cerr << "Error inputfile: wrong first line" << std::endl;
			return ;
		}
		while (getline(fs, line))
		{
			//split date and value:
			//find "|"
			if (check_empty_line(line) == true)
			{
				std::cerr << "Error inputfile: empty line" << std::endl;
				continue ;
			}
			size_t pipe_pos;
			if (line.find('|') == std::string::npos)
			{
				std::cerr << "Error inputfile: no pipe separating data" << std::endl;
				continue ;
			}
			else
			{
				pipe_pos = line.find('|');
			}
			//split date and parse
			size_t begin = 0;
			size_t end = line.length();
			if (check_valid_date(line.substr(begin, (pipe_pos))) == true)
			{
				std::string btc_date = line.substr(begin, (pipe_pos));
			
			//split value and parse
				//value = float or integer between 0 and 1000
				if (check_valid_btc_number(line.substr((pipe_pos + 1), end)) == true)
				{
					int btc_nb = atoi(line.substr((pipe_pos + 1), end).c_str());
					
					// print inputfile values :
					std::cout << btc_date << " - " << btc_nb << std::endl;
				}
			}
			//compare to database
			//output like given example: 2011-01-03 => 3 = 0.9
		}
	}
	else
	{
		std::cerr << "Error opening inputfile" << std::endl;
		fs.close();
		return ;
	}
}

void	Btc::parse_data(std::string const & inputfile)
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
			std::cerr << "Error in database: wrong first line" << std::endl;
			return ;
		}

		//fill map<> : _database[key] = value
		while (getline(fs, line))
		{
			if (check_empty_line(line) == true)
			{
				std::cerr << "Error in database: empty line" << std::endl;
				continue ;
			}
			//split date :
			size_t comma_pos;
			if (line.find(',') == std::string::npos)
			{
				std::cerr << "Error in database: no comma separating data" << std::endl;
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
					float value = atof(line.substr((comma_pos + 1), end).c_str());
					_database[key] = value;
					
					// print map<> :
					// std::cout << key << " - " << value << std::endl;
				}
			}
		}
	}
	else
	{
		std::cerr << "Error opening database" << std::endl;
		fs.close();
		return ;
	}
	check_inputfile(inputfile);
}
