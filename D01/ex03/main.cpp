#include "Zombie.hpp"
#include "ZombieHorde.hpp"

void makeHorde()
{
	int size;

	std::cout << "What is the size of your horde?\n";
	std::cin >> size;
	ZombieHorde tmp(size);
}

int main()
{
	std::string in;

	while(1)
	{
		std::cout << "Do you want to make a horde of zombies(Yes/No)?\n";
		std::cin >> in;
		if (in == "Yes")
			makeHorde();
		else if (in == "No")
			return 0;
	}
	return 0;
}