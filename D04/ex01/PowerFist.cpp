#include "PowerFist.hpp"


/* CONSTRUCTORS */

				PowerFist::PowerFist() : AWeapon("Power fist", 8, 50)
{}
				PowerFist::PowerFist(PowerFist const& obj) :  AWeapon(obj)
{}

/* DESTRUCTOR */

				PowerFist::~PowerFist()
{}

/* GETTERS AND SETTERS */


/* OPERATOR OVERLOADS */


/* MEMBER FUNCTIONS */

void			PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}