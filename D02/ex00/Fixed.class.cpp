#include "Fixed.class.hpp"

		Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point = 0;
}

		Fixed::~Fixed()
{
	std::cout << "Deleted an object with raw fixed-point value " << fixed_point << std::endl;
}

		Fixed::Fixed(Fixed &obj) // copy constructor
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixed_point = obj.getRawBits();
}

Fixed& 	Fixed::operator= (const Fixed& obj)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &obj)
		return *this;
	this->fixed_point = obj.getRawBits();
	return *this;
}

int		Fixed::getRawBits( ) const
{
	std::cout << "Getter for fixed_point called" << std::endl;
	return this->fixed_point;
}

void	Fixed::setRawBits(int const raw )
{
	std::cout << "Setter for fixed_point called" << std::endl;
	this->fixed_point = raw;
}
