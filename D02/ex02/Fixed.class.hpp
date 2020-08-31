#include <string>
#include <iostream>
#include <cmath>
#include <cfloat>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// • Six comparison operators : >, <, >=, <=, == and !=.
// • Four arithmetic operators : +, -, *, and /.
// • The pre-increment, post-increment, pre-decrement and post-decrement operators,
// 	that will increment or decrement the fixed point value from the smallest representable Ɛ such as 1 + Ɛ > 1.
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// • The non-member function min that takes references on two fixed point values and
// 	returns a reference to the smallest value, and an overload that takes references on
// 	two constant fixed point values and returns a reference to the smallest constant
// 	value.
// • The non-member function max that takes references on two fixed point values and
// 	returns a reference to the biggest value, and an overload that takes references on two
// 	constant fixed point values and returns a reference to the biggest constant value.
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
		int				getRawBits() const; // fixed_point getter
		void			setRawBits(int const raw); //fixed_point setter
		/* logical */
		bool			operator< (Fixed const& obj); // A "less than" operator overload
		bool			operator<= (Fixed const& obj); // A "less then or equal to" operator overload
		bool			operator> (Fixed const& obj); // A "more then" operator overload
		bool			operator>= (Fixed const& obj); // A "more then or equal to" operator overload
		bool			operator== (Fixed const& obj); // An "is equal" operator overload
		bool			operator!= (Fixed const& obj); // An "is not equal" operator overload
		/* arithmetic */
		Fixed const &	operator= (Fixed const& obj); // An assignation operator overload
		Fixed			operator+ (Fixed const& right); // A addition operator overload
		Fixed			operator- (Fixed const& right); // A subtraction operator overload
		Fixed			operator* (Fixed const& right); // A multiplication operator overload
		Fixed			operator/ (Fixed const& right); // A division operator overload
		Fixed			operator++ (int); // A postfix-increment operator overload
		Fixed&			operator++ (); // A prefix-increment operator overload
		Fixed			operator-- (int); // A postfix-decrement operator overload
		Fixed&			operator-- (); // A prefix-decrement operator overload
		
};
namespace FixedFunc
{
	Fixed const&		max(Fixed const& obj1, Fixed const& obj2);
	int const&			max(int const& value1, int const& value2);
	Fixed const&		min(Fixed const& obj1, Fixed const& obj2);
	int const&			min(int const& value1, int const& value2);
}
std::ostream& 			operator<< (std::ostream& os, Fixed::Fixed const&obj); // inserts a floating point representation into the parameter output stream
