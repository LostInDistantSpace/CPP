#include "iter.hpp"

void	print(const char a)
{
	std::cout << a << std::endl;
}

void add_one(int& a)
{
	a++;
}
void print_minus_one(int a)
{
	std::cout << a - 1 << std::endl;
}

int main( void ) {
	int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	const char string[4] = {'w', 'o', 'r', 'd'};

	::iter(array, 10, print_minus_one);
	::iter(array, 10, add_one);
	for (int i =0; i < 10; i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
	::iter(string, 4, print);
	return 0;
}