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

	std::string 	file = av[1], new_file = file + ".replace", og_word = av[2], new_word = av[3];
	if (file.empty() || og_word.empty())
		return (err_msg("Filename and s1 cannot be empty strings"), 2);
	
	std::ifstream	infile(file.c_str(), std::ifstream::in);
	if (!infile.good())
		return (err_msg("Error opening file : " + file), 3);
	
	std::ofstream	outfile(new_file.c_str(), std::ofstream::out);
	if (!outfile.good())
		return (err_msg("Error opening file : " + new_file), 3);

	std::string	line, new_line;
	while (std::getline(infile, line))
	{
		size_t	prev_pos = 0, pos = line.find(og_word);
		while (pos != std::string::npos)
		{
			new_line.append(line, prev_pos, pos - prev_pos);
			new_line.append(new_word);
			prev_pos = pos + og_word.length();
			pos = line.find(og_word, prev_pos);
		}
		new_line.append(line, prev_pos, pos - prev_pos);
		outfile << new_line << std::endl;
		new_line.clear();
	}

	infile.close();
	outfile.close();
	return (0);
}