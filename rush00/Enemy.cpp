#include "I_GameEntity.hpp"
#include "Enemy.hpp"
#include "Missile.hpp"

/* CONSTRUCTOR */

					Enemy::Enemy()
{
	this->x = Environment::max_x - rand() % 5 - 3;
	int temp = rand() % Environment::max_y - 3;
	if (temp > 3)
		this->y = temp;
	else
		this->y = 3;
	cur_move = 0;
	switch (rand() % 5)
	{
		case 0:
			symbol = 'c';
			hp = 1;
			break;
		case 1:
			symbol = 'o';
			hp = 2;
			break;
		case 2:
			symbol = '#';
			hp = 2;
			break;
		case 3:
			symbol = '$';
			hp = 3;
			break;
		case 4:
			symbol = '&';
			hp = 3;
			break;
	}
	move(y, x);
	addch(symbol);
}

/* MEMBERS */

char				Enemy::action()
{	
	int random = rand() % 100;
	if (random == 5)
		return 's';
	if (cur_move >= 5)
	{
		cur_move = 0;
		int tmp = random % 5;
		if (tmp == 0)
			moves = "ullld";
		else if (tmp == 1)
			moves = "dlldl";
		else if (tmp == 2)
			moves = "llulu";
		else if (tmp == 3)
			moves = "lllll";
		else if (tmp == 4)
			moves = "lldul";
	}
	if (!collide(moves[cur_move++]) && random > 85)
	{
		direction = moves[cur_move - 1];
		move(y, x);
		addch(' ');
		if (direction == 'l')
			this->x -= 1;
		else if (direction == 'u')
			this->y -= 1;
		else if (direction == 'd')
			this->y += 1;		
	}
	move(y, x);
	addch(symbol);
	refresh();
	return direction;
}

Missile*			Enemy::shoot()
{
	Missile *missile = new Missile(this->x + 1, this->y, 'l', '<');
	return missile;
}

bool				Enemy::collide(char c)
{
	if ((c == 'u' && this->y - 1 <= 3) ||
		(c == 'd' && this->y + 1 >= Environment::max_y - 3))
			return true;
	return false;
}

/* GETTERS AND SETTERS */

int					Enemy::getX()
{
	return this->x;
}

int					Enemy::getY()
{
	return this->y;
}

void				Enemy::setHP(int newhp)
{
	this->hp = newhp;
}

int					Enemy::getHP()
{
	return this->hp;
}

