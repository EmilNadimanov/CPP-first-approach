#ifndef _PLAYER_HPP_
# define _PLAYER_HPP_

#include "I_GameEntity.hpp"
#include "Environment.hpp"

class Player: public I_GameEntity
{
	private:
		int	hp;
	public:
						Player();
		char			action();
		Missile*		shoot();
		bool			collide(char c);
		int				getX();
		int				getY();
		void			setHP(int newhp);
		int				getHP();
};

#endif