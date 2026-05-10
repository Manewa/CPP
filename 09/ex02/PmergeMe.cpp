#include "PmergeMe.hpp"

void	PmergeMe::sortVector(std::vector<int> &vec)
{
	insert_sort(vec);	
}

void	PmergeMe::sortDeque(std::deque<int> &deq)
{
	insert_sort(deq);	
}

template <typename T>
void	PmergeMe::pairing(T &cont, std::vector<s_pair> &vec_pair, bool  &has_odd, int &odd)
{
	size_t	i = 0;
	s_pair	pair;

	has_odd = false;
	while (i + 1 < cont.size())
	{
		if (cont[i] < cont[i + 1])
		{
			pair.small = cont[i];
			pair.big = cont[i + 1];
		}
		else
		{
			pair.small = cont[i + 1];
			pair.big = cont[i];
		}
		vec_pair.push_back(pair);
		i += 2;
	}
	if (i < cont.size())
	{
		has_odd = true;
		odd = cont[i];
	}
}

void	PmergeMe::jacob_order(size_t size, std::vector<size_t> &order)
{
	size_t	prev;
	size_t	current;
	size_t	next;
	size_t	end;
	size_t	i;

	if (size == 0)
		return ;
	order.push_back(0);
	prev = 1;
	current = 3;
	while (prev < current)
	{
		end = current;
		if (end > size)
			end = size;
		i = end;
		while (i > prev)
		{
			order.push_back(i - 1);
			i--;
		}
		next = current + 2 * prev;
		prev = current;
		current = next;
	}
}

template <typename T>
typename	T::iterator	PmergeMe::find_value(T &cont, int value)
{
	typename	T::iterator	it;

	it = cont.begin();
	while (it != cont.end())
	{
		if (*it == value)
			return (it);
		it++;
	}
	return (cont.end());
}

template <typename It>
It	PmergeMe::where_insert(It left, It right, int value)
{
	It	mid;

	while (left < right)
	{
		mid = left + (right - left) / 2;
		if (*mid < value)
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

	T	up;
	std::vector<s_pair>	vec_pair;
	std::vector<s_pend>	pend;
	std::vector<size_t>	order;
	bool				has_odd;
	int					odd;
	size_t				i = 0;

	pairing(cont, vec_pair, has_odd, odd);

	while (i < vec_pair.size())
	{
		up.push_back(vec_pair[i].big);
		i++;
	}

	insert_sort(up);

	i = 0;
	while (i < up.size())
	{
		size_t	j;
		s_pend	p;

		j = 0;
		while (j < vec_pair.size() && vec_pair[j].big != up[i])
			j++;
		p.value = vec_pair[j].small;
		p.bound = vec_pair[j].big;
		p.has_bound = true;
		pend.push_back(p);
		i++;
	}

	if (has_odd)
	{
		s_pend	p_odd;
		p_odd.value = odd;
		p_odd.bound = 0;
		p_odd.has_bound = false;
		pend.push_back(p_odd);
	}

	jacob_order(pend.size(), order);

	i = 0;
	while (i < order.size())
	{
		s_pend	pend_order;
		typename	T::iterator	limit;
		typename	T::iterator	pos;

		pend_order = pend[order[i]];
		if (pend_order.has_bound)
			limit = find_value(up, pend_order.bound);
		else
			limit = up.end();
		pos = where_insert(up.begin(), limit, pend_order.value);
		up.insert(pos, pend_order.value);
		i++;
	}
	cont = up;
}
