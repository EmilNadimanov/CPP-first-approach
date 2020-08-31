#ifndef _ENVIRONMENT_
# define _ENVIRONMENT_
#include "Headers.hpp"
#include <vector>
#define MAX_Y 30
#define MAX_X 140

class Player;
class Missile;
class Enemy;

class Environment
{
private:
	int						delay,
							score,
							iters;
	char					symbol;
	std::vector<Missile*>	missiles;
	std::vector<Enemy*>		enemies;
	void	missile_computation(int iter, Player &player);
	void	set_borders();

public:
	static const int		max_y = MAX_Y,
							max_x = MAX_X;
	void	start(Player &player);
			Environment();
};

#endif