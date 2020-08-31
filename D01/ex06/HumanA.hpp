// Now, create two classes, HumanA and HumanB, that both have a Weapon, a name, and
// an attack() function

#ifndef _HUMAN_A_
# define _HUMAN_A_
	#include <string>
	#include <iostream>
	#include "Weapon.hpp"

	class HumanA
	{
		public:
			Weapon *weapon;
			std::string name;
		public:
			HumanA(std::string constr_name, Weapon &constr_weapon);
			void attack();
	};

#endif
