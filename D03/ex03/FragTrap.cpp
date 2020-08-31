#include "FragTrap.hpp"

					FragTrap::FragTrap() :
						ClapTrap(100, 100, 100, 100, 1,
							"FragTrap", 30, 20, 5)
{
	std::cout << this->name << " has been created. What a waste of resources."
		<< std::endl;
}

					FragTrap::FragTrap(FragTrap const& obj) :
						ClapTrap(obj)
{
	std::cout << this->name << " was copied from another ClapTrap as a FragTrap" << std::endl;
}

					FragTrap::FragTrap(std::string name) :
						ClapTrap(100, 100, 100, 100, 1,
							name, 30, 20, 5)
{
	std::cout << this->name << ": \"I WAS BORN\"" << std::endl;
}

					FragTrap::~FragTrap()
{
	std::cout << this->name << " being disassembled: \"NOOOOOOOOOO\"."
		<< std::endl;
}

void				FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string attacks[5];
		attacks[0] = "tries to roll " + target + " over. What an idiot.";
		attacks[1] = "tries to kick " + target + ". He has no legs. No result.";
		attacks[2] = "attempts to choke " + target + " with his feeble hands.";
		attacks[3] = "tries to charm " + target + " but is too repulsive"
			+ " to succeed. What a pity.";
		attacks[4] = "does his best to cast a firball at " + target +
			", but fails, as he always does.";
	std::cout << this->name << " tries to hurt " << target;
	if (ep >= 25)
	{
		srand (time(NULL));
		std::cout << ". He " << attacks[rand() % 5] << std::endl;
		ep -= 25;
	}
	else
		std::cout << ". Not today, he lacks energy! He requires 25 ep" <<
			", but currently has " << ep << '.' << std::endl;
}
