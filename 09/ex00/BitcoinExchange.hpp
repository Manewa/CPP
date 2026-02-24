#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <iomanip>
#include <cstdio>
#include <exception>
#include "colors.hpp"

class BitcoinExchange {

public:

			BitcoinExchange();
			BitcoinExchange(const std::string filename);
//			BitcoinExchange(const BitcoinExchange& other);
//			BitcoinExchange& operator=(const BitcoinExchange& other);
			~BitcoinExchange();


			void	check_line(std::string line, int line_nbr, char sep);
			void	get_date_long(long *year, long *month, long *day, std::string line, int line_nbr, char sep);
			void	getMap(void);
			void	getFilename(void);


private:

			std::map<long, float>	_map;
			std::string						_filename;
};

class	ExceptionBtc : public std::exception
{
	public:
			ExceptionBtc(std::string error) : _error(error) {};
			virtual ~ExceptionBtc() throw() {};
			const virtual char *what() const throw() {return _error.c_str();};

	private:
			std::string	_error;
};

std::string	ft_itostr(int n);

#endif

