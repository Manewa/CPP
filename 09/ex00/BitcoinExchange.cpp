#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) {};

BitcoinExchange::BitcoinExchange(const std::string filename)
{
	std::ifstream 	file(filename);
	std::string		line;

	if (!file.is_open())
		throw (FILE_OPEN_ERROR);

	while (std::getline(file, line))
	{
		if (line == "date,exchange_rate")
			continue;

/*		std::size_t	sep = line.find(line, ',');
		std::string	date;
		int			size;
		float		rate;

		date = line.substr(0, sep);
		size = line.size() - sep;
		rate = std::atof(line.substr(sep, size).c_str());
*/
		std::stringstream	ss(line);
		std::string	date;
		std::string	rate;

		std::getline(ss, line, ',');
		std::getline(ss, line, '\n');
		this->_map[date] = rate;
	}


}

BitcoinExchange::~BitcoinExchange(void) {};
