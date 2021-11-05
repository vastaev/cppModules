#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);
void	bsp_print(bool f);

int main( void )
{
	std::cout << "________________" << std::endl;

	Point	a(1, 1), b(15, 1) , c(15, 9);

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;

	std::cout << "________________" << std::endl;
	Point 	d(4, 2);
	std::cout << "d: " << d << std::endl;
	bsp_print ((bsp(a, b, c, d)));
	std::cout << "________________" << std::endl;
	Point 	e(5, 3);
	std::cout << "e: " << e << std::endl;
	bsp_print ((bsp(a, b, c, e)));
	std::cout << "________________" << std::endl;
	Point 	m(1, 1);
	std::cout << "m: " << m << std::endl;
	bsp_print ((bsp(a, b, c, m)));
	std::cout << "________________" << std::endl;
	Point 	l(14, 4);
	std::cout << "l: " << l << std::endl;
	bsp_print ((bsp(a, b, c, l)));
	std::cout << "________________" << std::endl;
	Point 	o(18, 4);
	std::cout << "o: " << o << std::endl;
	bsp_print ((bsp(a, b, c, o)));
	return (0);
}