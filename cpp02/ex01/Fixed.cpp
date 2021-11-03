#include "Fixed.hpp"

const int Fixed::bits_ = 8;

Fixed::Fixed(): value_(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->operator=(other);
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other)
		this->value_ = other.value_;
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value_);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value_ = raw;
}

Fixed::Fixed(const int arg)
{
	std::cout << "Int constructor called" << std::endl;
	this->value_ = (arg << Fixed::bits_);
}

Fixed::Fixed(const float arg)
{
	std::cout << "Float constructor called" << std::endl;
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