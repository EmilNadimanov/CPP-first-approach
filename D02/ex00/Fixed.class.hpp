// Write a canonical class to represent fixed point numbers :
// • Private members :
// 	◦ An integer to store the fixed point value.
// 	◦ A static constant integer to store the number of fractional bits. This constant will always be the litteral 8.
// • Public members :
// 	◦ A default constructor that initializes the fixed point value to 0.
// 	◦ A destructor.
// 	◦ A copy constructor.
// 	◦ An assignation operator overload.
// 	◦ A member function int getRawBits( void ) const; that returns the raw
// value of the fixed point value.
// 	◦ A member function void setRawBits( int const raw ); that sets the raw
// value of the fixed point value.

#include <string>
#include <iostream>

class Fixed
{
	private:
		int					fixed_point; //raw fixed-point value
		static const int	bits = 8;
	public:
				Fixed(); // A default constructor that initializes the fixed point value to 0
				~Fixed(); // A destructor
				Fixed(Fixed &obj); // A copy constructor
		Fixed& 	operator= (const Fixed &fixed_point); // An assignation operator overload
		int		getRawBits() const; // fixed_point getter
		void	setRawBits(int const raw); //fixed_point setter
};
