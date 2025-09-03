#include "easyfind.hpp"

int main(void)
{
	std::vector<int> v(5);
	for (int i = 0; i < 42 * 5; i+= 42)
		v.push_back(i);

	std::vector<int>::const_iterator vec_found = easyfind(v, 84);
	std::cout << "Value found:" <<  *vec_found << std::endl;

	vec_found = easyfind(v, 42);
	std::cout << "Value found:" <<  *vec_found << std::endl;

	vec_found = easyfind(v, 43);
	if (vec_found == v.end())
		std::cerr << "Error: value 43 not found within container" << std::endl;
	else
		std::cout << "Error: Wrong value found" << std::endl;
	return 0;
}