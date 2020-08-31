#include "ZombieHorde.hpp"
#include <string>
#include <cstdlib>

			ZombieHorde::ZombieHorde(int N)
{
	std::string names[5] = {"John", "Jack", "Angela", "Bob", "Dave"};
	std::string types[5] = {"angry", "stupid", "sexy", "happy", "sad"};
	int i;
	Zombie *z[N+1];
	
	i = 0;
	while (i < N)
	{
		z[i] = new Zombie;
		z[i]->name = names[rand() % 5];
		z[i++]->type = types[rand() % 5];
	}
	z[i] = NULL;
	ZombieHorde::announce(z);
}

void		ZombieHorde::announce(Zombie **ob)
{
	int i;

	i = 0;
	while (ob[i])
	{
		ob[i]->announce();
		delete ob[i++];
	}
}
