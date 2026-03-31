#include "PmergeMe.hpp"

template <typename T>

void	insert_sort(T &cont)
{
	if (cont.size() < 1)
		return ;

	T	main_tree;
	T	tmp;
}

void	PmergeMe::sortVector(std::vector<int> &vec)
{
	insert_sort(vec);	
}

void	PmergeMe::sortDeque(std::deque<int> &deq)
{
	insert_sort(deq);	
}

template <typename T>
void	PmergeMe::pairing(T &cont, T &up, T &down)
{
	size_t	i = 0;

	while (i + 1 < cont.size())
	{
		int a = cont[i];
		int b = cont[i + 1];

		if (a > b)
			std::swap(a, b);
		down.push_back(a);
		up.push_back(b);
		i += 2;
	}
	if (i < cont.size())
		down.push_back(cont[i]);	
}

template <typename T>
typename	T::iterator PmergeMe::where_insert(T &up, int it)
{
	typename T::iterator left = up.begin();
	typename T::iterator right = up.end();

	while (left < right)
	{
		typename T::iterator mid = left + (right - left) / 2;

		if (*mid < it)
			left = mid + 1;
		else
			right = mid;
	}
	return (left);
}

template <typename T>
void	PmergeMe::insert_sort(T &cont)
{
	if (cont.size() <= 1)
		return ;

	T up;
	T down;

	pairing(cont, up, down);
	insert_sort(up);

	typename	T::iterator	it = down.begin();
	while (it != down.end())
	{
		typename T::iterator pos = where_insert(up, *it);
		up.insert(pos, *it);
		it++;
	}
	cont = up;
}
