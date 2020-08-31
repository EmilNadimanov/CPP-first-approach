#ifndef _SuperMutant_HPP_
# define  _SuperMutant_HPP_
#include <string>
#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
	private:
	public:
						SuperMutant();
						SuperMutant(SuperMutant const& obj);
						~SuperMutant();
		void			takeDamage(int dmg);
};

#endif
