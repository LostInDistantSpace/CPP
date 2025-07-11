#include "Point.hpp"

Fixed sign (Point p1, Point p2, Point p3)
{
	return ((p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - 
			(p2.getX() - p3.getX()) * (p1.getY() - p3.getY()));
}

/*
* Implementation choice : I'm choosing to ignore small imprecisions
* instead of implementing an Epsilon to account for precision errors
* to be "on the edge of the vertex" it has to be exactly 0 lol thx
* - bmouhib
*/
bool bsp( Point const &a, Point const &b, Point const &c, Point const &point)
{
	Fixed d1, d2, d3;
	bool has_neg, has_pos;

	d1 = sign(point, a, b);
	d2 = sign(point, b, c);
	d3 = sign(point, c, a);

	has_neg = (d1 <= 0) || (d2 <= 0) || (d3 <= 0);
	has_pos = (d1 >= 0) || (d2 >= 0) || (d3 >= 0);

	return !(has_neg && has_pos); // Only if point is on the same side of all lines (inside)
}