#ifndef _ZOMBIE_EVENT_HPP_
# define _ZOMBIE_EVENT_HPP_

#include "Zombie.hpp"
// After this, you will create a ZombieEvent class. It will have a setZombieType func-
// tion, that will store a type in the object, and a function Zombie* newZombie(std::string
// name) that will create a Zombie with the chosen type, name it, and return it.
class		ZombieEvent
{
	public:
		std::string z_type;
		Zombie*	newZombie(std::string name);
		void 	setZombieType(Zombie *ob);
};

#endif
