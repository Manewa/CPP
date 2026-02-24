#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) {};

BitcoinExchange::BitcoinExchange(const std::string filename)
{
	std::ifstream 	file(filename.c_str());
	std::ifstream 	database("data.csv");
	std::string		line;
	int				line_nbr = 0;
	double			date_num;
	std::string		date;
	std::string		rate;

	//	if (!file.is_open())
	//		throw (FILE_OPEN_ERROR);

	while (std::getline(database, line))
	{
		std::stringstream	ss(line);

		line_nbr++;
		if (line == "date,exchange_rate")
			continue;
		this->check_line(line, line_nbr, ',');
		std::getline(ss, date, ',');
		std::getline(ss, rate, '\n');
		date_num = std::atol(date.c_str());
		this->_map[date_num] = std::atof(rate.c_str());
	}

	line_nbr = 0;

	std::string	search_date;
	std::string	value;

	while (std::getline(file, line))
	{
		std::stringstream	ssf(line);

		line_nbr++;
		if (line == "date | value")
			continue;
		try
		{
			this->check_line(line, line_nbr, '|');
			std::getline(ssf, search_date, ',');
			std::getline(ssf, value, '\n');
			if (std::atof(value.c_str()) < 0)
			{
				std::cerr << "Error: Negative value at " << line_nbr << std::endl;
				continue;
			}
			date_num = std::atol(date.c_str());

		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

}

BitcoinExchange::~BitcoinExchange(void) {};

void	BitcoinExchange::check_line(std::string line, int line_nbr, char char_sep)
{
	size_t	sep = line.find(char_sep);

	if (sep == std::string::npos)
		throw (ExceptionBtc("Error: Wrong sep at line " + ft_itostr(line_nbr)));

	long	year, month, day;

	this->get_date_long(&year, &month, &day, line, line_nbr, char_sep);
	if (year < 2009 || year > 2026)
		throw (ExceptionBtc("Error: bad year at line " + ft_itostr(line_nbr)));
	if (month < 1 || month > 12)
		throw (ExceptionBtc("Error: bad month at line " + ft_itostr(line_nbr)));
	if (day < 1 || day > 31)
		throw (ExceptionBtc("Error: bad day at line " + ft_itostr(line_nbr)));

	int	day_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (year % 4 == 0)
		day_month[1] = 29;
	if (day > day_month[month - 1])
		throw (ExceptionBtc("Error: bad day at line " + ft_itostr(line_nbr)));
}

void	BitcoinExchange::get_date_long(long *year, long *month, long *day, std::string line, int line_nbr, char sep)
{
	std::istringstream	iss(line);
	std::string			y, m, d;

	std::getline(iss, y, '-');
	std::getline(iss, m, '-');
	std::getline(iss, d, sep);

	if (y.size() != 4 || m.size() != 2 || d.size() != 2)
		throw ExceptionBtc("Error : Bad format in date line " + ft_itostr(line_nbr));

	if (std::sscanf(line.c_str(), "%ld-%ld-%ld", year, month, day) != 3)
		throw ExceptionBtc("Error : Bad format in date line " + ft_itostr(line_nbr));

}
