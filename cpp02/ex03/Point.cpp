#include "Point.hpp"

Point::Point(): x_(0), y_(0) {}

Point::~Point() {}

Point::Point(const Point& p):	x_(p.x_), y_(p.y_) {}

Point::Point(const float x, const float y):	x_(x), y_(y) {}
Point::Point(int const x, int const y): x_(x), y_(y) {}
Point::Point(int const x, float const y): x_(x), y_(y) {}
Point::Point(float const x, int const y): x_(x), y_(y) {}

Point& Point::operator=(const Point &p)
{
	if (this != &p)
		*this = Point(p);
	return (*this);
}

Fixed Point::getX() const
{
	return (this->x_);
}

Fixed Point::getY() const
{
	return (this->y_);
}

std::ostream& operator<<(std::ostream &out, const Point &p)
{
	out <<"(" << p.getX().toFloat() << "," << p.getY().toFloat() << ")";
	return (out);
}
