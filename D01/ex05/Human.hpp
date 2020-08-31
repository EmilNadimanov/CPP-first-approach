#include "Brain.hpp"
// Then, make a Human class, that has a constant Brain attribute, with the
// same lifetime. It has an identify() function, that just calls the identify()
// function of its Brain and returns its result.
class		Human
{
	private:
		const Brain brain;
	public:
		const Brain*	identify();
		const Brain&	getBrain();
};
