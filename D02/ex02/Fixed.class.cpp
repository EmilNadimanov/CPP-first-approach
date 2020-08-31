#include "Fixed.class.hpp"

	/* Constructors */

				Fixed::Fixed()
{
	this->fixed_point = 0;
}

				Fixed::~Fixed()
{}

				Fixed::Fixed(Fixed const &obj) // copy constructor
{
	this->fixed_point = obj.getRawBits();
}

				Fixed::Fixed(int const num) //  constant integer -> fixed-point value
{
	this->fixed_point = num * 256;
}

				Fixed::Fixed(float const num) //  constant floating point -> fixed-point value
{
	this->fixed_point = roundf(num * 256);
}

	/* Overloaded operators */

bool			Fixed::operator< (Fixed const& obj)
{
	return (getRawBits() < obj.getRawBits()) ? true : false;
}

bool			Fixed::operator<= (Fixed const& obj)
{
	return this->getRawBits() <= obj.getRawBits();
}

bool			Fixed::operator> (Fixed const& obj)
{
	return this->getRawBits() > obj.getRawBits();
}

bool			Fixed::operator>= (Fixed const& obj)
{
	return this->getRawBits() >= obj.getRawBits();	
}

bool			Fixed::operator== (Fixed const& obj)
{
	return this->getRawBits() == obj.getRawBits();	
}

bool			Fixed::operator!= (Fixed const& obj)
{
	return this->getRawBits() != obj.getRawBits();	
}

Fixed const& 	Fixed::operator= (Fixed const& obj)
{
	if (this == &obj)
		return *this;
	this->fixed_point = obj.getRawBits();
	return *this;
}

Fixed			Fixed::operator+ (Fixed const& right)
{
	return Fixed(this->getRawBits() + right.getRawBits());
}

Fixed			Fixed::operator- (Fixed const& right)
{
	return Fixed(this->getRawBits() - right.getRawBits());
}

Fixed			Fixed::operator* (Fixed const& right)
{
	return Fixed(this->toFloat() * right.toFloat());
}

Fixed			Fixed::operator/ (Fixed const& right)
{
	return Fixed(this->toFloat() / right.toFloat());
}

Fixed 			Fixed::operator++ (int)
{
	Fixed temp = Fixed(*this);
	this->setRawBits(256 * (this->toFloat() +  0.00390625));
	return temp;
}

Fixed& 			Fixed::operator++ ()
{
	this->setRawBits(256 * (this->toFloat() +  0.00390625));
	return *this;
}

Fixed 			Fixed::operator-- (int)
{
	Fixed temp = Fixed(*this);
	this->setRawBits(256 * (this->toFloat() -  0.00390625));
	return temp;
}

Fixed& 			Fixed::operator-- ()
{
	this->setRawBits(256 * roundf(this->toFloat() +  0.00390625));
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

int			Fixed::getRawBits( ) const
{
	return this->fixed_point;
}

void			Fixed::setRawBits(int const raw )
{
	this->fixed_point = raw;
}

	/* Non-member functions */

Fixed const&			FixedFunc::max(Fixed const& obj1, Fixed const& obj2)
{
	return obj1.getRawBits() >= obj2.getRawBits() ? obj1 : obj2;
}

int const&				FixedFunc::max(int const& value1, int const& value2)
{
	return value1 >= value2 ? value1 : value2;
}

Fixed const&			FixedFunc::min(Fixed const& obj1, Fixed const& obj2)
{
	return obj1.getRawBits() >= obj2.getRawBits() ? obj1 : obj2;	
}

int const&				FixedFunc::min(int const& value1, int const& value2)
{
	return (value1 >= value2) ? value1 : value2;	
}

