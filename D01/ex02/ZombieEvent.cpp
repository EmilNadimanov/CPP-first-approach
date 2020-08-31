#include "ZombieEvent.hpp"
#include <string>

Zombie*		ZombieEvent::newZombie(std::string name)
{
	Zombie *z = new Zombie;
	z->name = name;
	setZombieType(z);
	return z;
}

void		ZombieEvent::setZombieType(Zombie *ob)
{
	std::cout << "Set zombie type\n";
	std::cin >> ob->type;
}
