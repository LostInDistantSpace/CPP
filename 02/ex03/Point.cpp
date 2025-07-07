#include "Point.hpp"


Point::Point() {}
Point::Point(const float x, const float y) : _x(x), _y(y) {}
Point::Point(const Point& p) : _x(p._x), _y(p._y) {}
Point::~Point() {}

Point&	Point::operator=(const Point &) 
{
    return *this;
}

Fixed	Point::getX() { return (_x); }
Fixed	Point::getY() { return (_y); }