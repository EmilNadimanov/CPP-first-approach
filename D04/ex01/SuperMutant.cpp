#include "SuperMutant.hpp"


/* CONSTRUCTORS */

				SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}
				SuperMutant::SuperMutant(SuperMutant const& obj) : Enemy(obj)
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

/* DESTRUCTOR */

				SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}

/* GETTERS AND SETTERS */

/* OPERATOR OVERLOADS */

/* MEMBER FUNCTIONS */

void			SuperMutant::takeDamage(int dmg)
{
	this->Enemy::takeDamage(dmg - 3);
}
