#include "Fixed.hpp"

Fixed::Fixed() : _fpoint_value(0) { std::cout << "Default constructor called" << std::endl; }

Fixed::Fixed(const int input) : _fpoint_value(input << _fbits) { std::cout << "Int constructor called" << std::endl; }

Fixed::Fixed(const float input): _fpoint_value(roundf(input * (1 << _fbits))) { std::cout << "Float constructor called" << std::endl; }

Fixed::Fixed(const Fixed& og) : _fpoint_value(og._fpoint_value) {std::cout << "Copy constructor called" << std::endl;}

Fixed::~Fixed() {std::cout << "Destructor called" << std::endl;}

Fixed&	Fixed::operator=(const Fixed &src)
{
	std::cout << "Fixed Assignation operator called" << std::endl;
    if (this != &src)
        _fpoint_value = src._fpoint_value;
    return *this;
}


Fixed	Fixed::operator+(const Fixed &other)
{
	Fixed	res(_fpoint_value + other._fpoint_value);
	return (res);
}

Fixed	Fixed::operator-(const Fixed &other)
{
	Fixed	res(_fpoint_value - other._fpoint_value);
	return (res);
}

Fixed	Fixed::operator*(const Fixed &other)
{
	Fixed	res((_fpoint_value * other._fpoint_value) >> _fbits);
	return (res);
}
Fixed	Fixed::operator/(const Fixed &other)
{
	Fixed	res((_fpoint_value << _fbits) / other._fpoint_value);
	return (res);
}

bool	Fixed::operator<=(const Fixed &other) const { return (_fpoint_value <= other._fpoint_value); }
bool	Fixed::operator>=(const Fixed &other) const { return (_fpoint_value >= other._fpoint_value); }
bool	Fixed::operator<(const Fixed &other) const { return (_fpoint_value < other._fpoint_value); }
bool	Fixed::operator>(const Fixed &other) const { return (_fpoint_value > other._fpoint_value); }
bool	Fixed::operator==(const Fixed &other) const { return (_fpoint_value == other._fpoint_value); }
bool	Fixed::operator!=(const Fixed &other) const { return (_fpoint_value != other._fpoint_value); }

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

static Fixed&	max(Fixed& a, Fixed& b) { return (a >= b) ? a : b; }
static Fixed&	min(Fixed& a, Fixed& b) { return (a <= b) ? a : b; }
static const Fixed&	max(const Fixed& a, const Fixed& b) { return (a >= b) ? a : b; }
static const Fixed&	min(const Fixed& a, const Fixed& b) { return (a <= b) ? a : b; }

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fpoint_value);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "getRawBits member function called" << std::endl;
	_fpoint_value = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)_fpoint_value / (float)(1 << _fbits));
}

int		Fixed::toInt(void) const
{
	return (_fpoint_value >> _fbits);
}