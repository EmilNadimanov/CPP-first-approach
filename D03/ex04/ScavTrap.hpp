#ifndef _SCAV_TRAP_
# define _SCAV_TRAP_

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
							ScavTrap();
							ScavTrap(ScavTrap const& obj);
							ScavTrap(std::string name);
							~ScavTrap();
		void				challengeNewcomer(std::string const & target);
};

#endif
