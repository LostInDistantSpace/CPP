# include <string>
# include <iostream>
# include <iomanip>

int	main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "Memory address of string : " << &string << std::endl;
	std::cout << "Memory address in stringPTR : " << stringPTR << std::endl;
	std::cout << "Memory address in stringREF : " << &stringREF << std::endl;

	std::cout << "Value of string : " << string << std::endl;
	std::cout << "Value in stringPTR : " << *stringPTR << std::endl;
	std::cout << "Value in stringREF : " << stringREF << std::endl;
}