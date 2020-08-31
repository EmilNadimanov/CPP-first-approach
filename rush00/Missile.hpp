#ifndef _MISSILE_HPP_
# define _MISSILE_HPP_

#include "I_GameEntity.hpp"
#include "Environment.hpp"
#include "Headers.hpp"

class Missile: public I_GameEntity
{
	private:
	public:
						Missile(int a, int b, char dir, char symb);
						~Missile() {}
		char			action();
		bool			collide(char c);
		int				getX();
		int				getY();
		char			getSymbol();
};

#endif