#include "Fixed.hpp"

const int Fixed::bits_ = 8;

Fixed::Fixed(): value_(0) {}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed &other)
{
	this->operator=(other);
}

Fixed& Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		this->value_ = other.value_;
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	return (this->value_);
}

void Fixed::setRawBits(int const raw)
{
	this->value_ = raw;
}

Fixed::Fixed(const int arg)
{
	this->value_ = (arg << Fixed::bits_);
}

Fixed::Fixed(const float arg)
{
	this->value_ = roundf(arg * (1 << Fixed::bits_));
}

float Fixed::toFloat( void ) const
{
	return ((float)this->value_ / (float)(1 << Fixed::bits_));
}

int Fixed::toInt( void ) const
{
	return (this->value_ >> Fixed::bits_);
}

std::ostream& operator<<(std::ostream &out, const Fixed &fix)
{
	out << fix.toFloat();
	return (out);
}

bool Fixed::operator<(const Fixed& other) const
{
	return (this->value_ < other.value_);
}

bool Fixed::operator>(const Fixed& other) const
{
	return (this->value_ > other.value_);
}

bool Fixed::operator>=(const Fixed& other) const
{
	return (this->value_ >= other.value_);
}

bool Fixed::operator<=(const Fixed& other) const
{
	return (this->value_ <= other.value_);
}

bool Fixed::operator==(const Fixed& other) const
{
	return (this->value_ == other.value_);
}

bool Fixed::operator!=(const Fixed& other) const
{
	return (this->value_ != other.value_);
}

Fixed Fixed::operator+(const Fixed& other)
{
	Fixed val;

	val.setRawBits(value_ + other.value_);
	return (val);
}

Fixed Fixed::operator-(const Fixed& other)
{
	Fixed val;

	val.setRawBits(value_ - other.value_);
	return (val);
}

Fixed Fixed::operator*(const Fixed& other)
{
	Fixed val;

	val.setRawBits((value_ * other.value_) / (1 << bits_));
	return (val);
}

Fixed Fixed::operator/(const Fixed& other)
{
	Fixed val;

	val.setRawBits((value_ / other.value_) * (1 << bits_));
	return (val);
}

Fixed& Fixed::operator++()
{
	value_++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	++(*this);
	return (tmp);
}

Fixed& Fixed::operator--()
{
	value_--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	--(*this);
	return (tmp);
}

Fixed &Fixed::max(Fixed &x, Fixed &y)
{
	return (x > y ? x : y);
}

Fixed &Fixed::min(Fixed &x, Fixed &y)
{
	return (x < y ? x : y);
}

Fixed const &Fixed::max(Fixed const &x, Fixed const &y)
{
	return (x > y ? x : y);
}

Fixed const &Fixed::min(Fixed const &x, Fixed const &y)
{
	return (x < y ? x : y);
}
