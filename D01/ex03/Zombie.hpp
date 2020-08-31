#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

#include <string>
#include <iostream>

class			Zombie
{
	public:
		std::string name;
		std::string type;

		void	announce();
};

#endif