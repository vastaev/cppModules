#include "Fixed.hpp"

const int Fixed::bits_ = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->value_ = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value_ = other.value_;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignation operator called" << std::endl;
	this->value_ = other.value_;
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->value_;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value_ = raw;
}

Fixed::Fixed(const int arg)
{
	std::cout << "Int constructor called" << std::endl;
	this->value_ = arg;
}

Fixed::Fixed(const float arg)
{
	std::cout << "Float constructor called" << std::endl;
	this->value_ = arg;
}

float Fixed::toFloat( void ) const
{
	return float(this->value_);
}

int Fixed::toInt( void ) const
{
	return int(this->value_);
}