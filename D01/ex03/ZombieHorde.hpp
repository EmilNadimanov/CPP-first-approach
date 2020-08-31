#ifndef _ZOMBIE_HORDE_HPP_
# define _ZOMBIE_HORDE_HPP_

#include "Zombie.hpp"
// This class will have a constructor that takes an integer N. At creation, it must allocate
// N Zombie objects, with random names (Same notion of "random" as before), and store
// them. It will then have an announce() function that calls announce() on each of the
// contained Zombie objects.
// You must allocate all the Zombie objects in a single allocation, and release them when
// the ZombieHorde it destroyed.
class		ZombieHorde
{
	public:
		ZombieHorde(int N);
		void 	announce(Zombie **ob);
};

#endif
