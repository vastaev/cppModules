#ifndef _POINT_HPP_
#define _POINT_HPP_ 

#include "Fixed.hpp"

class Point
{
	public:
			Point();
			~Point();
			Point(const Point &other);
			Point(int const x, int const y);
			Point(float const x, float const y);
			Point(int const x, float const y);
			Point(float const x, int const y);
			Point& operator=(const Point &other);

			Fixed getX() const;
			Fixed getY() const;
	private:
			Fixed const x_;
			Fixed const y_;
};

std::ostream& operator<<(std::ostream &out, const Point &p);

#endif //_POINT_HPP_