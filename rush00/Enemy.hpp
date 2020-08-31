#ifndef _ENEMY_HPP_
# define _ENEMY_HPP_

#include "I_GameEntity.hpp"
#include "Environment.hpp"

class Enemy: public I_GameEntity
{
	private:
		int			hp,
					cur_move;
		std::string	moves;
	public:
						Enemy();
		char			action();
		Missile*		shoot();
		bool			collide(char c);
		int				getX();
		int				getY();
		void			setHP(int newhp);
		int				getHP();
};

#endif