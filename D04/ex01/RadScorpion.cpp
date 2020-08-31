#include "RadScorpion.hpp"


/* CONSTRUCTORS */

				RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}
				RadScorpion::RadScorpion(RadScorpion const& obj) : Enemy(obj)
{
	std::cout << "* click click click *" << std::endl;
}

/* DESTRUCTOR */

				RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

/* GETTERS AND SETTERS */

/* OPERATOR OVERLOADS */

/* MEMBER FUNCTIONS */
