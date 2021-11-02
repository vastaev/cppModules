#ifndef _FIXED_HPP_
#define _FIXED_HPP_

#include <iostream>

class Fixed
{
	public:
			Fixed();
			~Fixed();
			Fixed(const Fixed &other);
			Fixed(const int arg);
			Fixed(const float arg);
			Fixed &operator=(const Fixed &other);

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