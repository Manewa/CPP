#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <exception>
#include <algorithm>

template<typename T>
int	easyfind(T const & container, int search)
{
	std::vector<int>::const_iterator	it = std::find(container.begin(), container.end(), search);

	if (it == container.end())
		throw std::exception();
	return (it - container.begin());
}

#endif

