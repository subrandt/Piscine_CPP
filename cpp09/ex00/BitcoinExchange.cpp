/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subrandt <subrandt@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:45:53 by subrandt          #+#    #+#             */
/*   Updated: 2023/04/29 20:44:56 by subrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


/* ************************************************************************** */
/*								Canonical Form								  */
/* ************************************************************************** */

Btc::Btc(void)
{
	// std::cout << "Default constructor called" << std::endl;
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
	if (this != &rhs) 
	{
		_database = rhs._database;
		_output_date = rhs._output_date;
		_btc_value = rhs._btc_value;
	}
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
	return (true);
}

//to check date if format is a valid calendar date in database and inputfile
static bool	check_valid_calendar_date(std::string const & key)
{
	struct tm tm = {};
	char *time = strptime(key.c_str(), "%Y-%m-%d", &tm);
	int d = tm.tm_mday;
	int m = tm.tm_mon + 1;
	int y = tm.tm_year + 1900;

    if (time == NULL) 
	{
		return (false);
	}
	else
	{
		//check date of bitcoin : since 2009-01-03) 
		if ((y == 2009 && m == 1 && d < 3) || y < 2009)
		{
			return (false);
		}
		//month with 30 days + 30fev
		if ((m == 2 && d == 30) || ((m == 4 || m == 6 || m == 9 || m == 11) && d == 31))
		{
			return (false);
		}
		//leap years
		if (((y % 4 != 0) || (y % 100 == 0)) && (y % 400 != 0))
		{
			if (m == 2 && d == 29)
			{
				return (false);
			}
		}
	}
	return (true);
	
}

//to check date format in database and inputfile
static bool	check_valid_date(std::string const & key)
{	
	if (key.length() != 10)
	{
		return (false);
	}
	std::string day;
	day = key.substr(8, 2);
	if (atoi(day.c_str()) > 31 || std::isdigit(day[1]) == 0)
	{
		return (false);
	}

	//format date YYYY-MM-DD -> strptime : check if right format
	if (check_valid_calendar_date(key) == false)
		return (false);
    
	return (true);
}

//to check if the bitcoin value is valid in database
static  bool	check_valid_value(std::string const & value)
{
	char *p_end;
	long long value_f;
	
	value_f = strtof(value.c_str(), &p_end);
	if (value.compare("") == 0)
	{
		return (false);
	}
	if (strlen(p_end) != 0)
	{
		return (false);
	}
	
	if (value_f > INT_MAX)
	{
		return (false);
	}
	return (true);
}

//to check if the given bitcoin number is valid
static  bool	check_valid_btc_number(std::string const & btc_nb) //float or integer
{
	char *p_end;
	double value_f;
	
	value_f = strtof(btc_nb.c_str(), &p_end);
	if (btc_nb.compare("") == 0)
	{
		return (false);
	}
	if (strlen(p_end) != 0)
	{
		return (false);
	}
	
	//max/min value
	if (value_f <= 0 || value_f >= 1000)
	{
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

//compare to database
bool Btc::calculate_output_value(void)
{
	std::map<std::string, float>::iterator it;

	//if database has the exact date
	it = _database.find(_output_date);
	if (it != _database.end())
	{
		_btc_value = it->second;
		return (true);
	}
	//else take the older date
	else
	{
		it = _database.upper_bound(_output_date);
		if (it == _database.begin())
		{
			return (false);
		}
		if (it != _database.end())
			it--;
		else
			it--;
		_btc_value = it->second;
	}
	return (true);
}

//output like given example: 2011-01-03 => 3 = 0.9
void Btc::print_output(void)
{
	std::cout << _output_date << " => " << _output_nb_btc << " = ";
	std::cout << _output_nb_btc * _btc_value << std::endl;
}

void Btc::check_inputfile(std::string const & inputfile)
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
		unsigned int line_inputfile = 1;
		while (getline(fs, line))
		{
			line_inputfile++;
			//split date and value:
			//find "|"
			if (check_empty_line(line) == true)
			{
				std::cerr << "line " << line_inputfile;
				std::cerr << " - Error inputfile: empty line" << std::endl;
				continue ;
			}
			size_t pipe_pos;
			if (line.find('|') == std::string::npos)
			{
				std::cerr << "line " << line_inputfile;
				std::cerr << " - Error inputfile: no pipe separating data" << std::endl;
				continue ;
			}
			else
			{
				pipe_pos = line.find('|');
			}
			//split date and parse
			size_t begin = 0;
			size_t end = line.length();
			if (check_valid_date(line.substr(begin, (pipe_pos - 1))) == true)
			{
				_output_date = line.substr(begin, (pipe_pos - 1));
				
				//split value and parse
				//value = float or integer between 0 and 1000
				if (check_valid_btc_number(line.substr((pipe_pos + 1), end)) == true)
				{
					double btc_nb = atof(line.substr((pipe_pos + 1), end).c_str());
					_output_nb_btc = btc_nb;
				}
				else
				{
					std::cerr << "line " << line_inputfile;
					std::cerr << " - Error inputfile: wrong value" << std::endl;
					continue ;
				}
			}
			else
			{
				std::cerr << "line " << line_inputfile;
				std::cerr << " - Error inputfile: wrong date" << std::endl;
				continue ;
			}
			//compare to database:
			if (calculate_output_value() == false)
			{
				std::cerr << "Error : No older value in database" << std::endl;
				break ;
			}
			//output like given example: 2011-01-03 => 3 = 0.9:
			print_output();
		}
		if (line_inputfile == 1)
		{
			std::cerr << "Error inputfile: no data" << std::endl;
			return ;
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
	
	//parsing database :
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

		unsigned int line_database = 1;
	
		//fill map<>: _database[key] = value
		while (getline(fs, line))
		{
			line_database++;
			if (check_empty_line(line) == true)
			{
				std::cerr << "line " << line_database;
				std::cerr << " - Error in database: empty line" << std::endl;
				continue ;
			}
			//split date :
			size_t comma_pos;
			if (line.find(',') == std::string::npos)
			{
				std::cerr << "line " << line_database;
				std::cerr << " - Error in database: no comma separating data" << std::endl;
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

				//split value:
				if (check_valid_value(line.substr((comma_pos + 1), end)) == true)
				{
					float value = atof(line.substr((comma_pos + 1), end).c_str());
					_database[key] = value;
					
					// print map<>:
					// std::cout << key << " - " << value << std::endl;
				}
				else
				{
					std::cerr << "line " << line_database;
					std::cerr << " - Error in database: wrong value" << std::endl;
					continue ;
				}
			}
			else
			{
				std::cerr << "line " << line_database;
				std::cerr << " - Error in database: wrong date" << std::endl;
				continue ;
			}
		}
		if (line_database == 1)
		{
			std::cerr << "Error database: no data" << std::endl;
			return ;
		}
	}
	else
	{
		std::cerr << "Error opening database" << std::endl;
		fs.close();
		return ;
	}
	//parsing inputfile
	check_inputfile(inputfile);
}
