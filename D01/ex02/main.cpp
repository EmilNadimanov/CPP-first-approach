#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <cstdlib>

// You will also make a randomChump function, that will create a Zombie with a random
// name, and make it announce itself. Whatever "random" method you choose, truly ran-
// dom names or a random choice from a pool of names, is fine.
void randomChump()
{
	std::string names[5] = {"John", "Jack", "Rocky", "Bob", "Dave"};
	Zombie *z;
	ZombieEvent event;
	z = event.newZombie(names[rand() % 5]);
	z->announce();
	delete z;
}

int main()
{
	std::string in;

	while(1)
	{
		std::cout << "Do you want to make a random zombie or a custom one?" <<
			"(Random/Custom)\n";
		std::cin >> in;
		if (in == "Random")
		{
			randomChump();
		}
		else if (in == "Custom")
		{
			std::cout << "Set zombie name\n";
			std::cin >> in;
			Zombie *z;
			ZombieEvent event;
			z = event.newZombie(in);
			z->announce();
			delete z;
		}
	}
}

// Now the actual point of the exercise : Your Zombies must be destroyed at appropri-
// ate times (so, when they are not needed anymore). They must also be allocated in the
// appropriate fashion : Some times it’s appropriate to have them on the stack, at other
// times the heap is a better choice. You will have to justify what you did to get a positive
// grade.