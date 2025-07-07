#include "Fixed.hpp"

Fixed::Fixed() : _fpoint_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int input) : _fpoint_value(input << _fbits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float input): _fpoint_value(roundf(input * (1 << _fbits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& og)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = og;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
        _fpoint_value = src.getRawBits();
    return *this;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}

void	Fixed::setRawBits( int const raw )	{ _fpoint_value = raw; }

int		Fixed::getRawBits( void ) const		{ return (_fpoint_value); }

int		Fixed::toInt(void) const			{ return (_fpoint_value >> _fbits); }

float	Fixed::toFloat(void) const			{ return ((float)_fpoint_value / (float)(1 << _fbits)); }