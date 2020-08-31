#include "Brain.hpp"

// Create a Brain class, with whatever you think befits a brain. It will have an
// identify() function, that returns a string containing the brain’s address in 
// memory, in hexadecimal format, prefixed by 0x (For example, "0x194F87EA").

const Brain*	Brain::identify() const
{
	return this;
}

				Brain::Brain(){}
