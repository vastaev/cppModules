#ifndef _FIXED_HPP_
#define _FIXED_HPP_

#include <iostream>

class Fixed
{
	public:
			Fixed();
			~Fixed();
			Fixed(const Fixed &other);
			Fixed &operator=(const Fixed &other);

			int getRawBits( void ) const;
			void setRawBits( int const raw );
	private:
			int					value_;
			static const int	bits_;
};

#endif // _FIXED_HPP_