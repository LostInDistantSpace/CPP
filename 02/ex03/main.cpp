#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const &a, Point const &b, Point const &c, Point const &point);

int main(void)
{
		Point a(0.0f, 0.0f);
		Point b(5.0f, 0.0f);
		Point c(2.5f, 5.0f);

		Point p(3.5f, 2.0f);
		Point p2(5.0f, 0.0f);
		Point p3(15.0f, 0.0f);
		Point p4(0.0f, 0.0f);

		bsp(a, b, c, p) ? std::cout << "True" << std::endl : std::cout << "False" << std::endl;
		bsp(a, b, c, p2) ? std::cout << "True" << std::endl : std::cout << "False" << std::endl;
		bsp(a, b, c, p3) ? std::cout << "True" << std::endl : std::cout << "False" << std::endl;
		bsp(a, b, c, p4) ? std::cout << "True" << std::endl : std::cout << "False" << std::endl;
	return (0);
}