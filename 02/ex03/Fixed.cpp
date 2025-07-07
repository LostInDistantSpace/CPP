#include "Fixed.hpp"

Fixed::Fixed() 					: _fpoint_value(0)								{}
Fixed::Fixed(const int input)	: _fpoint_value(input << _fbits)				{}
Fixed::Fixed(const float input)	: _fpoint_value(roundf(input * (1 << _fbits)))	{}
Fixed::Fixed(const Fixed& og)	: _fpoint_value(og._fpoint_value)				{}
Fixed::~Fixed() 																{}

Fixed&	Fixed::operator=(const Fixed &src)
{
    if (this != &src)
        _fpoint_value = src._fpoint_value;
    return *this;
}

Fixed	Fixed::operator+(const Fixed &other)
{
	Fixed	res; res.setRawBits(_fpoint_value + other._fpoint_value);
	return (res);
}

Fixed	Fixed::operator-(const Fixed &other)
{
	Fixed	res; res.setRawBits(_fpoint_value - other._fpoint_value);
	return (res);
}

Fixed	Fixed::operator*(const Fixed &other)
{
	Fixed	res; res.setRawBits((_fpoint_value * other._fpoint_value) >> _fbits);
	return (res);
}

Fixed	Fixed::operator/(const Fixed &other)
{
	Fixed	res; res.setRawBits((_fpoint_value << _fbits) / other._fpoint_value);
	return (res);
}

bool	Fixed::operator<(const Fixed &other) const	{ return (_fpoint_value < other._fpoint_value); }
bool	Fixed::operator>(const Fixed &other) const	{ return (_fpoint_value > other._fpoint_value); }
bool	Fixed::operator<=(const Fixed &other) const	{ return (_fpoint_value <= other._fpoint_value); }
bool	Fixed::operator>=(const Fixed &other) const	{ return (_fpoint_value >= other._fpoint_value); }
bool	Fixed::operator==(const Fixed &other) const	{ return (_fpoint_value == other._fpoint_value); }
bool	Fixed::operator!=(const Fixed &other) const	{ return (_fpoint_value != other._fpoint_value); }

Fixed&	Fixed::operator++() { _fpoint_value++; return (*this); }
Fixed&	Fixed::operator--() { _fpoint_value--; return (*this); }

Fixed	Fixed::operator++(int)
{
	Fixed	old(*this);
	_fpoint_value++;
	return (old);
}

Fixed	Fixed::operator--(int)
{
	Fixed	old(*this);
	_fpoint_value--;
	return (old);
}

Fixed&			Fixed::max(Fixed& a, Fixed& b) { return (a >= b) ? a : b; }
Fixed&			Fixed::min(Fixed& a, Fixed& b) { return (a <= b) ? a : b; }
const Fixed&	Fixed::max(const Fixed& a, const Fixed& b) { return (a >= b) ? a : b; }
const Fixed&	Fixed::min(const Fixed& a, const Fixed& b) { return (a <= b) ? a : b; }

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}

void	Fixed::setRawBits( int const raw )	{ _fpoint_value = raw; }
int		Fixed::getRawBits( void ) const		{ return (_fpoint_value); }

float	Fixed::toFloat(void) const			{ return ((float)_fpoint_value / (float)(1 << _fbits)); }
int		Fixed::toInt(void) const			{ return (_fpoint_value >> _fbits); }