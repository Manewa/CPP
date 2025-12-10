#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename F> F	f(T arr)
{
	arr += 1;
	return (arr);
}

template<typename T, typename function>
void	iter(T *arr, const int length, function f(T arr))
{
	int	i = 0;

	while (i < length)
		arr[i] = f(arr[i]);
	return ;
}

#endif
