// Now, create two classes, HumanB and HumanB, that both have a Weapon, a name, and
// an attack() function

#ifndef _HUMAN_B_
# define _HUMAN_B_
	#include <string>
	#include <iostream>
	#include "Weapon.hpp"

	class HumanB
	{
		private:
			Weapon *weapon;
			std::string name;
		public:
			HumanB(std::string constr_name);
			void setWeapon(Weapon& constr_weapon);
			void attack();
	};

#endif
