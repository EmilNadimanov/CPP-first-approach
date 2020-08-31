#ifndef _SUPER_TRAP_
# define _SUPER_TRAP_

#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap: public NinjaTrap, public FragTrap
{
	public:
							SuperTrap();
							SuperTrap(SuperTrap const& obj);
							SuperTrap(std::string name);
							~SuperTrap();
};

#endif
