#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int					_fpoint_value;
	static const int	_fbits = 8;
public:
	Fixed();
	Fixed(const Fixed& src);
	Fixed &operator=(const Fixed &src);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif