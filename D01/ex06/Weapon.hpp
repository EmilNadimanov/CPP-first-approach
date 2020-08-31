// Make a Weapon class, that has a type string, and a getType that returns
// a const reference to this string. Also has a setType.
#ifndef _WEAPON_
# define _WEAPON_

#include <string>

	class		Weapon
	{
		private:
			std::string type;
		public:
			Weapon();
			Weapon(std::string in_type);
			const std::string& getType();
			void setType(std::string);
	};

#endif