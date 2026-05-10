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
#include <climits>
#include "colors.hpp"
#include <iomanip>
#include <set>

class PmergeMe {

public:

			void	sortVector(std::vector<int> &v);
			void	sortDeque(std::deque<int> &d);


private:

			struct	s_pair
			{
				int small;
				int big;
			};

			struct	s_pend
			{
				int value;
				int	bound;
				bool	has_bound;
			};

			template <typename T>
			void	insert_sort(T &container);

			template <typename T>
			void	pairing(T &cont, std::vector<s_pair> &pairs, bool &has_odd, int &odd);

			template <typename T>
			typename T::iterator	find_value(T  &cont, int value);

			template <typename It>
			It	where_insert(It left, It right, int value);

			void	jacob_order(size_t	size, std::vector<size_t> &order);
};

#endif

