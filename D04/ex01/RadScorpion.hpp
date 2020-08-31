#ifndef _RadScorpion_HPP_
# define  _RadScorpion_HPP_
#include <string>
#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
	private:
	public:
						RadScorpion();
						RadScorpion(RadScorpion const& obj);
						~RadScorpion();
};

#endif
