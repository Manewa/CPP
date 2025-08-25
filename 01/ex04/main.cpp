#include <iostream>
#include <fstream>
#include <string>
#include <string.h>

void	replace_line(std::string &line, char **av)
{
	size_t	i = 0;

	while (i < line.length() && i != std::string::npos)
	{
		i = line.find(av[2], i);
		if (i != std::string::npos)
		{
			line.erase(i, strlen(av[2]));
			line.insert(i, av[3]);
			i += strlen(av[3]);
		}
	}
}

void	fill_file(std::ifstream &infile, std::ofstream &outfile, char **av)
{
	std::string	line;
	while (std::getline(infile, line))
	{
		if (infile.eof() == 0)
			line += '\n';
		replace_line(line, av);
		outfile << line;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Error\nNot exactly three arguments\n";
		return (1);
	}
	std::ifstream	infile(argv [1]);
	std::ofstream	outfile((std::string(argv[1]) + ".replace").c_str());
	if (!infile.is_open())
	{
		std::cerr << "Error\nCan not open infile\n";
		return (1);
	}
	if (!outfile.is_open())
	{
		std::cerr << "Error\nCan not open outfile\n";
		return (1);
	}
	if (strlen(argv[2]) == 0)
	{
		std::cerr << "Error\nFirst string is empty\n";
			return (1);
	}
	fill_file(infile, outfile, argv);
	return (0);
}
