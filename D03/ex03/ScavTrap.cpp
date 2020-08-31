#include "ScavTrap.hpp"

					ScavTrap::ScavTrap() :
						ClapTrap(100, 100, 50, 50, 1,
							"ScavTrap", 20, 15, 3)
{
	std::cout << this->name << " has been created. Yeek, what a waste of resources."
		<< std::endl;
}

					ScavTrap::ScavTrap(ScavTrap const& obj) :
								ClapTrap(obj)
{
	std::cout << this->name << " was copied from another ClapTrap as a ScavTrap" << std::endl;
}

					ScavTrap::ScavTrap(std::string name) :
						ClapTrap(100, 100, 50, 50, 1,
							name, 20, 15, 3)
{
	std::cout << this->name << ": \"I WAS BORN\"" << std::endl;
}

					ScavTrap::~ScavTrap()
{
	std::cout << this->name << " being disassembled: \"NOOOOOOOOOO\"."
		<< std::endl;
}

void				ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string challenges[5];
		challenges[0] = "challenges " + target + " to a dance-off.";
		challenges[1] = "asks " + target + " to tell a bedtime story.";
		challenges[2] = "commands " + target + " to bring a horn of a unicorn.";
		challenges[3] = "orders " + target + " to kill a thousand darksiders.";
		challenges[4] = "challenges " + target +
			" to make a backflip. Right here and right now.";
	std::cout << this->name << " tries to hurt " << target;
	if (ep >= 25)
	{
		srand (time(NULL));
		std::cout << ". He " << challenges[rand() % 5] << std::endl;
		ep -= 25;
	}
	else
		std::cout << ". Not today, he lacks energy! He requires 25 ep" <<
			", but currently has " << ep << '.' << std::endl;
}
