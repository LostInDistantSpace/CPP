#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					_fpoint_value;
	static const int	_fbits = 8;
public:
	Fixed();
	Fixed(const int fpoint_value);
	Fixed(const float nbr);
	Fixed(const Fixed& src);
	~Fixed();
	Fixed			&operator=(const Fixed &src);
	float	toFloat(void) const;
	int		toInt(void) const;
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif