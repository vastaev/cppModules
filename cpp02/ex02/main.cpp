#include "Fixed.hpp"

int main( void )
{
	{
		std::cout << "________________" << std::endl;
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
		std::cout << "________________" << std::endl;
	}
	{
		Fixed		a , b, c;
		bool		t = true;
		const int 	a_const = 42;
		const int 	b_const = 21;
		float		a_float = 42.42;
		float		b_float = 21.71;
		float		c_float = 0.0;
		//--------------------------------
		std::cout << GREEN << "Test {=}" <<  F_NONE << std::endl;
		a = 42;
		b = 21;
		c = 42;
		std::cout << "a= " << a << std::endl;
		std::cout << "b= " << b << std::endl;
		std::cout << "c= " << c << std::endl;
		//--------------------------------
		std::cout << GREEN << "Test {!=}" <<  F_NONE << std::endl;
		t = a!=b;
		std::cout << "a!=b  -->" << t << " (1)" << std::endl;
		t = a!=c;
		std::cout << "a!=c  -->" << t << " (0)" << std::endl;
		//--------------------------------
		std::cout << GREEN << "Test {==}" <<  F_NONE << std::endl;
		t = a==b;
		std::cout << "a==b  -->" << t << " (0)" << std::endl;
		t = a==c;
		std::cout << "a==c  -->" << t << " (1)" << std::endl;
		//--------------------------------
		std::cout << GREEN << "Test {>=}" <<  F_NONE << std::endl;
		t = a>=b;
		std::cout << "a>=b  -->" << t << " (1)" << std::endl;
		t = a>=c;
		std::cout << "a>=c  -->" << t << " (1)" << std::endl;
		//--------------------------------
		std::cout << GREEN << "Test {<=}" <<  F_NONE << std::endl;
		t = a<=b;
		std::cout << "a<=b  -->" << t << " (0)" << std::endl;
		t = a<=c;
		std::cout << "a<=c  -->" << t << " (1)" << std::endl;
		//--------------------------------
		std::cout << GREEN << "Test {<}" <<  F_NONE << std::endl;
		t = a<b;
		std::cout << "a<b  -->" << t << " (0)" << std::endl;
		t = a<c;
		std::cout << "a<c  -->" << t << " (0)" << std::endl;
		//--------------------------------
		std::cout << GREEN << "Test {>}" <<  F_NONE << std::endl;
		t = a>b;
		std::cout << "a>b  -->" << t << " (1)" << std::endl;
		t = a>c;
		std::cout << "a>c  -->" << t << " (0)" << std::endl;
		//--------------------------------
		std::cout << GREEN << "Test {+ binary}" <<  F_NONE << std::endl;
		c = a + b;
		std::cout << "c=a+b  -->" << c << " (63)" << std::endl;
		//--------------------------------
		std::cout << GREEN << "Test {- binary}" <<  F_NONE << std::endl;
		c = a - b;
		std::cout << "c=a-b  -->" << c << " (21)" << std::endl;
		//--------------------------------
		std::cout << GREEN << "Test {*}" <<  F_NONE << std::endl;
		c = a * b;
		std::cout << "c=a*b  -->" << c << " (882)" << std::endl;
		c_float = a_float * b_float;
		std::cout << "c_float=a_float*b_float  -->" << c_float << " (920.938)" << std::endl;
		//--------------------------------
		std::cout << GREEN << "Test {/}" <<  F_NONE << std::endl;
		c = a / b;
		std::cout << "c=a/b  -->" << c << " (1)" << std::endl;
		c_float = a_float / b_float;
		std::cout << "c_float=a_float/b_float  -->" << c_float << " (1.95394)" << std::endl;
		//--------------------------------
		std::cout << GREEN << "Test {++ prefix}" <<  F_NONE << std::endl;
		std::cout << "++a  -->" << ++a << " (42.0039)" << std::endl;
		a = 42;
		//--------------------------------
		std::cout << GREEN << "Test {++ postfix}" <<  F_NONE << std::endl;
		std::cout << "a++  -->" << a++ << " (42)" << std::endl;
		a = 42;
		//--------------------------------
		std::cout << GREEN << "Test {-- prefix}" <<  F_NONE << std::endl;
		std::cout << "--a  -->" << --a << " (41.9961)" << std::endl;
		a = 42;
		//--------------------------------
		std::cout << GREEN << "Test {-- postfix}" <<  F_NONE << std::endl;
		std::cout << "a--  -->" << a-- << " (42)" << std::endl;
		a = 42;
		//--------------------------------
		std::cout << GREEN << "Test {max}" <<  F_NONE << std::endl;
		c = Fixed::max(a, b);
		std::cout << "c=max(a, b) -->" << c << " (42)" << std::endl;
		//--------------------------------
		std::cout << GREEN << "Test {max const}" <<  F_NONE << std::endl;
		c = Fixed::max(a_const, b_const);
		std::cout << "c=max(a, b) const-->" << c << " (42)" << std::endl;
		//--------------------------------
		std::cout << GREEN << "Test {min}" <<  F_NONE << std::endl;
		// std::cout << "a_const= " << a_const << " (1)" << std::endl;
		// std::cout << "b_const= " << b_const << " (1)" << std::endl;
		c = Fixed::min(a, b);
		std::cout << "c=min(a, b) -->" << c << " (21)" << std::endl;
		//--------------------------------
		std::cout << GREEN << "Test {min const}" <<  F_NONE << std::endl;
		// std::cout << "a_const= " << a_const << " (1)" << std::endl;
		// std::cout << "b_const= " << b_const << " (1)" << std::endl;
		c = Fixed::min(a_const, b_const);
		std::cout << "c=min(a, b) const-->" << c << " (21)"  << std::endl;
		//--------------------------------
		std::cout << GREEN << "Test {max/min method}" <<  F_NONE << std::endl;
		std::cout << "a.max(a, b) -->" << a.max(a, b) << " | a.min(a, b) -->" << a.min(a, b) << std::endl;
		std::cout << "b.max(a, b) -->" << b.max(a, b) << " | b.min(a, b) -->" << a.min(a, b) << std::endl;
		std::cout << "c.max(a, b) -->" << c.max(a, b) << " | c.min(a, b) -->" << a.min(a, b) << std::endl;
		//--------------------------------
	}

	return (0);
}
