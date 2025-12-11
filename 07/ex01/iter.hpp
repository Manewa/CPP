#pragma once

#include <iostream>
#include "colors.hpp" 

template<typename T, typename F>
void	iter(T *arr, const int length, F func)
{
	int	i = 0;

	while (i < length)
		func(arr[i++]);
}
