#include "Missile.hpp"

/* CONSTRUCTOR */

					Missile::Missile(int a, int b, char dir, char symb)
{
	symbol = (char)62;
	this->x = a;
	this->y = b;
	move(y, x);
	addch(symbol);
	direction = dir;
	symbol = symb;
}

/* MEMBERS */

char				Missile::action()
{	
	move(y, x);
	addch(' ');
	if (direction == 'r')
		move(y, ++x);
	else if (direction == 'l')
		move(y, --x);
	if (collide(direction))
		return 'd';
	addch(symbol);
	refresh();
	return direction;
}

bool				Missile::collide(char c)
{
	if (c == 'l' && this->x - 1 == 1)
		return true;
	if (c == 'r' && this->x + 1 == Environment::max_x)
		return true;
	return false;
}

/* GETTERS AND SETTERS */

int					Missile::getX()
{
	return this->x;
}

int					Missile::getY()
{
	return this->y;
}

char				Missile::getSymbol()
{
	return this->symbol;
}