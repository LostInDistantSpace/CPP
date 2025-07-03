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

	Fixed&	operator=(const Fixed &src);
	Fixed	operator+(const Fixed &src);
	Fixed	operator-(const Fixed &src);
	Fixed	operator*(const Fixed &src);
	Fixed	operator/(const Fixed &src);

	bool	operator<=(const Fixed &other) const;
	bool	operator>=(const Fixed &other) const;
	bool	operator<(const Fixed &other) const;
	bool	operator>(const Fixed &other) const;
	bool	operator==(const Fixed &other) const;
	bool	operator!=(const Fixed &other) const;

	Fixed&	operator++();
	Fixed	operator++(int);
	Fixed&	operator--();
	Fixed	operator--(int);

	static Fixed&	max(Fixed& a, Fixed& b);
	static Fixed&	min(Fixed& a, Fixed& b);
	static const Fixed&	max(const Fixed& a, const Fixed& b);
	static const Fixed&	min(const Fixed& a, const Fixed& b);

	float	toFloat(void) const;
	int		toInt(void) const;
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif