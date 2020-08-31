#include "Fixed.class.hpp"

	/* Constructors */

				Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point = 0;
}

				Fixed::~Fixed()
{
	std::cout << "Destructor called for an object with raw value: " << fixed_point << std::endl;
}

				Fixed::Fixed(Fixed const &obj) // copy constructor
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixed_point = obj.getRawBits();
}

				Fixed::Fixed(int const num) //  constant integer -> fixed-point value
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point = num * 256;
}

				Fixed::Fixed(float const num) //  constant floating point -> fixed-point value
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point = roundf(num * 256);
}

	/* Overloaded operators */

Fixed& 			Fixed::operator= (const Fixed& obj)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &obj)
		return *this;
	this->fixed_point = obj.getRawBits();
	return *this;
}

std::ostream& 	operator<< (std::ostream& out, Fixed::Fixed const& obj) // free function, not a member
{
	return out << obj.toFloat();
}

	/* Member functions */

int				Fixed::toInt( void ) const // converts the fixed point value to an integer value.
{
	return fixed_point / 256; 
}

float			Fixed::toFloat() const // converts the fixed point value to a floating point value.
{
	return float(fixed_point) / 256;
}

int				Fixed::getRawBits( ) const
{
	std::cout << "Getter for fixed_point called" << std::endl;
	return this->fixed_point;
}

void			Fixed::setRawBits(int const raw )
{
	std::cout << "Setter for fixed_point called" << std::endl;
	this->fixed_point = raw;
}
