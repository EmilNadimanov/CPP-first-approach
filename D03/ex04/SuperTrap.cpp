#include "SuperTrap.hpp"				
					
					SuperTrap::SuperTrap() :
						ClapTrap(100, 100, 120, 120, 1,
							"JapTrap", 60, 20, 5)
{
	std::cout << this->name << " has been created. What a waste of resources."
		<< std::endl;
}

					SuperTrap::SuperTrap(SuperTrap const& obj) :
						ClapTrap(obj)
{
	std::cout << this->name << " was copied from another ClapTrap as a SuperTrap" << std::endl;
}

					SuperTrap::SuperTrap(std::string name) :
						ClapTrap(100, 100, 120, 120, 1,
							name, 60, 20, 5)
{
	std::cout << this->name << ": \"I WAS BORN\"" << std::endl;
}

					SuperTrap::~SuperTrap()
{
	std::cout << this->name << " being disassembled: \"NOOOOOOOOOO\"."
		<< std::endl;
}
