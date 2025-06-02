#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

void	err_msg(std::string str)
{
	std::cerr << str << std::endl;
}

int	main(int ac, char **av)
{
	if (ac != 4)
		return (err_msg("Wrong number of arguments"), 1);

	std::string 	filename = av[1], s1 = av[2], s2 = av[3];
	if (filename.empty() || s1.empty())
		return (err_msg("Filename and s1 cannot be empty strings"), 2);

	std::ifstream	infile(filename);
	if (!infile)
		return (err_msg("Error opening file : " + filename), 3);
	std::ofstream	outfile(filename + ".replace");
		return (err_msg("Error opening file : " + filename + ".replace"), 3);

	std::string	line;
	while (std::getline(infile, line))
	{
		
	}

	infile.close();
	outfile.close();
}