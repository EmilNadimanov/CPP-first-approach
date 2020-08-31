#include "PlasmaRifle.hpp"


/* CONSTRUCTORS */

				PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{}
				PlasmaRifle::PlasmaRifle(PlasmaRifle const& obj) :  AWeapon(obj)
{}

/* DESTRUCTOR */

				PlasmaRifle::~PlasmaRifle()
{}

/* GETTERS AND SETTERS */


/* OPERATOR OVERLOADS */


/* MEMBER FUNCTIONS */

void			PlasmaRifle::attack() const
{
	std::cout << "piouuu piouuu piouuu" << std::endl;
}