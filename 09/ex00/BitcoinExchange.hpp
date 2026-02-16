#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>

class BitcoinExchange {

public:

			BitcoinExchange();
			BitcoinExchange(const BitcoinExchange& other);
			BitcoinExchange& operator=(const BitcoinExchange& other);
			~BitcoinExchange();

			void	getMap(void);
			void	getFilename(void);


private:

			std::map<std::string, float>	_map;
			std::string						_filename;
};

#endif

