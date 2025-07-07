#include "Fixed.hpp"

Fixed::Fixed() : _fpoint_value(0)
{
	std::cout << "Default constructor called" << std::endl;
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
	return (*this);
}


int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fpoint_value);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "getRawBits member function called" << std::endl;
	_fpoint_value = raw;
}