#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed v1 = (a.getX() - point.getX()) * (b.getY() - a.getY()) - (b.getX() - a.getX()) * (a.getY() - point.getY());
	Fixed v2 = (b.getX() - point.getX()) * (c.getY() - b.getY()) - (c.getX() - b.getX()) * (b.getY() - point.getY());
	Fixed v3 = (c.getX() - point.getX()) * (a.getY() - c.getY()) - (a.getX() - c.getX()) * (c.getY() - point.getY());
	int bitsV1 = v1.getRawBits();
	int bitsV2 = v2.getRawBits();
	int bitsV3 = v3.getRawBits();
	if (bitsV1 == 0 || bitsV2 == 0 || bitsV3 == 0)
		return (false);
	else if (bitsV1 > 0 && bitsV2 > 0 && bitsV3 > 0)
		return (true);
	else if (bitsV1 < 0 && bitsV2 < 0 && bitsV3 < 0)
		return (true);
	else
		return (false);
}

void	bsp_print(bool f)
{
	if (f)
		std::cout << GREEN << "In the triangle" << F_NONE << std::endl;
	else
		std::cout <<  RED << "Not in a triangle" << F_NONE << std::endl;
}
