#include <string>
#include <iostream>
#include <cmath>

// • A constructor that takes a constant integer as a parameter and that converts it to
// 	the correspondant fixed(8) point value. The fractional bits value is initialized like
// 	in ex00.
// • A constructor that takes a constant floating point as a parameter and that converts
// 	it to the correspondant fixed(8) point value. The fractional bits value is initialized
// 	like in ex00.
// • A member function float toFloat( void ) const; that converts the fixed point
// 	value to a floating point value.
// • A member function int toInt( void ) const; that converts the fixed point value
// 	to an integer value.
// • An overload to the << operator that inserts a floating point representation of the
//	fixed point value into the parameter output stream.

class Fixed
{
	private:
		int					fixed_point; //raw fixed-point value
		static const int	bits = 8;
	public:
						Fixed(); // A default constructor that initializes the fixed point value to 0
						Fixed(int const num); //  constant integer -> fixed-point value
						Fixed(float const num); //  constant floating point -> fixed-point value
						~Fixed(); // A destructor
						Fixed(Fixed const &obj); // A copy constructor
		int 			toInt( void ) const; // converts the fixed point value to an integer value.
		float 			toFloat() const; // converts the fixed point value to a floating point value.
		Fixed& 			operator= (const Fixed &fixed_point); // An assignation operator overload
		int				getRawBits() const; // fixed_point getter
		void			setRawBits(int const raw); //fixed_point setter
};
std::ostream& 			operator<< (std::ostream& os, Fixed::Fixed const&obj); // inserts a floating point representation into the parameter output stream