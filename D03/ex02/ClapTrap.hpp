#ifndef _CLAP_TRAP_
# define _CLAP_TRAP_

#include <string>
#include <iostream>
#include <cstdlib>
#include <time.h>

class ClapTrap
{
	protected:
		int				hp;
		int				max_hp;
		int				ep;
		int				max_ep;
		int				level;
		std::string		name;
		int				meleeDamage;
		int				rangedDamage;
		int				armorReduction;
	protected:
							ClapTrap(int hp, int max_hp, int ep, int max_ep,
								int level, std::string name, int meleeDamege,
								int rangedDamage, int armorReduction);
	public:
		ClapTrap const&		operator=(ClapTrap const&obj);
							ClapTrap();
							ClapTrap(ClapTrap const& obj);
							~ClapTrap();
		void				rangedAttack(std::string const & target);
		void				meleeAttack(std::string const & target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
};

#endif
