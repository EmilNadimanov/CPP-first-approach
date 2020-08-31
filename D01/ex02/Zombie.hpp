#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

#include <string>
#include <iostream>

// First, make a Zombie class. Make it contain a type, and a name (at least), and add
// an announce() member function, that will output something along the lines of :
// <name (type)> Braiiiiiiinnnssss...

class			Zombie
{
	public:
		std::string name;
		std::string type;

		void	announce();
};

#endif