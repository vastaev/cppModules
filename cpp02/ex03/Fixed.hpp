#ifndef _FIXED_HPP_
#define _FIXED_HPP_

# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define F_NONE		"\033[37m"

#include <iostream>
#include <cmath>

class Fixed
{
	public:
			Fixed();
			~Fixed();
			Fixed(const Fixed &other);
			Fixed(const int arg);
			Fixed(const float arg);
			Fixed& operator=(const Fixed& other);
			bool operator<(const Fixed& other) const;
			bool operator>(const Fixed& other) const;
			bool operator>=(const Fixed& other) const;
			bool operator<=(const Fixed& other) const;
			bool operator==(const Fixed& other) const;
			bool operator!=(const Fixed& other) const;
			Fixed operator+(const Fixed& other);
			Fixed operator-(const Fixed& other);
			Fixed operator*(const Fixed& other);
			Fixed operator/(const Fixed& other);
			Fixed& operator++();
			Fixed operator++(int);
			Fixed& operator--();
			Fixed operator--(int);
			static Fixed 		&max(Fixed &x, Fixed &y);
			static Fixed 		&min(Fixed &x, Fixed &y);
			static Fixed const	&max(Fixed const &x, Fixed const &y);
			static Fixed const	&min(Fixed const &x, Fixed const &y);

			int		getRawBits( void ) const;
			void	setRawBits( int const raw );
			float	toFloat( void ) const;
			int		toInt( void ) const;
			
	private:
			int					value_;
			static const int	bits_;
};

std::ostream& operator<<(std::ostream &out, const Fixed &fix);

#endif // _FIXED_HPP_