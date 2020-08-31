#include "NinjaTrap.hpp"

					NinjaTrap::NinjaTrap() :
						ClapTrap(60, 60, 120, 120, 1,
							"JapTrap", 60, 5, 0)
{
	std::cout << this->name << " has been created. What a waste of resources."
		<< std::endl;
}

					NinjaTrap::NinjaTrap(NinjaTrap const& obj) :
						ClapTrap(obj)
{
	std::cout << this->name << " was copied from another ClapTrap as a NinjaTrap" << std::endl;
}

					NinjaTrap::NinjaTrap(std::string name) :
						ClapTrap(60, 60, 120, 120, 1,
							name, 60, 5, 0)
{
	std::cout << this->name << ": \"I WAS BORN\"" << std::endl;
}

					NinjaTrap::~NinjaTrap()
{
	std::cout << this->name << " being disassembled: \"NOOOOOOOOOO\"."
		<< std::endl;
}

void				NinjaTrap::ninjaShoebox(FragTrap const & target)
{
	std::cout << "NinjaTrap " << this->name << " tries to overpower " << target.getName() << " and fails. What a loser." << std::endl;
}

void				NinjaTrap::ninjaShoebox(ScavTrap const & target)
{
	std::cout << "NinjaTrap " << this->name << " tries to outsmart " << target.getName() << " and fails. What a loser." << std::endl;
}

void				NinjaTrap::ninjaShoebox(NinjaTrap const & target)
{
	std::cout << "NinjaTrap " << this->name << " tries to outfast " << target.getName() << " and fails. What a loser." << std::endl;
}

void				NinjaTrap::ninjaShoebox(ClapTrap const & target)
{
	std::cout << "NinjaTrap " << this->name << " tries to seduce " << target.getName() << " and fails. What a loser." << std::endl;
}


