#include "PmergeMe.hpp"

int	parsing_num(char *str)
{
	std::string s(str);

	for (size_t i = 0; i < s.size(); i++)
	{
		if (!std::isdigit(str[i]))
			throw std::runtime_error("Error: Not a digit"); 
	}
	long	num = std::atol(str);

	if (num < 0)
		throw std::runtime_error("Error: Negative number");
	else if (num > 2147683647)
		throw std::runtime_error("Error: Value too high for an integer");
	return ((int)num);
}

void	print_container(const std::vector<int> &vec)
{
	for (size_t i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i] << " ";
	}
	std::cout << std::endl;
}

int main(int argc, char **argv)
{
	if (argc < 2)
		return (1);

	std::vector<int>	vec;
	std::deque<int>		deq;
	int					n;
	
	try 
	{
		for (int i = 1; i < argc; i++)
		{
			n = parsing_num(argv[i]);
			vec.push_back(n);
			deq.push_back(n);
		}
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
	std::cout << "Before: " << std::endl;
	print_container(vec);

	PmergeMe	sort;

	clock_t	vec_start = clock();
	sort.sortVector(vec);
	clock_t	vec_end = clock();

	clock_t	deq_start = clock();
	sort.sortDeque(deq);
	clock_t	deq_end = clock();

	std::cout << "After: ";
	print_container(vec);

	double	time_vec = (double)(vec_end - vec_start) / CLOCKS_PER_SEC;
	double	time_deq = (double)(deq_end - deq_start) / CLOCKS_PER_SEC;

	std::cout << std::fixed << std::setprecision(5);
	std::cout << "Time to process a range of " << vec.size() << " elements with " << YELLOW << "std::vector : "
	<< GREEN << time_vec << " us" << NEUTRAL <<  std::endl;
	std::cout << "Time to process a range of " << deq.size() << " elements with " << YELLOW << "std::deque : "
	<< RED << time_deq << " us" << NEUTRAL << std::endl;
	return (0);
}
