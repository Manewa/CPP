#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <deque>
#include <vector>
#include <exception>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <sstream>
#include "colors.hpp"
#include <iomanip>

class PmergeMe {

public:

			void	sortVector(std::vector<int> &v);
			void	sortDeque(std::deque<int> &d);


private:

			template <typename T>
			void	insert_sort(T &container);

			template <typename T>
			void	pairing(T &cont, T &up, T &down);

			template <typename T>
			typename T::iterator	where_insert(T &container, int value);
			
};

#endif

