#include "Player.hpp"
#include "Missile.hpp"
#include "Headers.hpp"

/* CONSTRUCTOR */

					Player::Player()
{
	symbol = (char)64;
	this->x = Environment::max_x / 2;
	this->y = Environment::max_y / 2;
	hp = 3;
	move(y, x);
	addch(symbol);
}

/* MEMBERS */

char				Player::action()
{
	int tmp = getch();
	if (tmp == KEY_LEFT)
		direction = collide('l') ? '-' : 'l';
	else if (tmp == KEY_RIGHT)
		direction = collide('r') ? '-' : 'r';
	else if (tmp == KEY_DOWN)
		direction = collide('d') ? '-' : 'd';
	else if (tmp == KEY_UP)
		direction = collide('u') ? '-' : 'u';
	else if (tmp == KEY_BACKSPACE)
		return 'q';
	else if (tmp == ' ')
		return 's';
	else 
		direction = '-';
	switch (direction)
	{
		case 'l':
			move(y, x);
			addch(' ');
			this->x -= 1;
			break;
		case 'r':
			move(y, x);
			addch(' ');
			this->x += 1;
			break;
		case 'u':
			move(y, x);
			addch(' ');
			this->y -= 1;
			break;
		case 'd':
			move(y, x);
			addch(' ');
			this->y += 1;
			break;
	}
	move(y, x);
	init_pair(1, COLOR_RED, COLOR_BLACK);
	attron(COLOR_PAIR(1));
	addch(symbol);
	attroff(COLOR_PAIR(1));
	refresh();
	return direction;
}

/* MEMBERS */

Missile*		Player::shoot()
{
	Missile *missile = new Missile(this->x + 1, this->y, 'r', '>');
	return missile;
}

bool				Player::collide(char c)
{
	if ((c == 'l' && this->x - 1 == 1) ||
			(c == 'r' && this->x + 1 == Environment::max_x) ||
			(c == 'u' && this->y - 1 == 1) ||
			(c == 'd' && this->y + 1 == Environment::max_y - 1))
		return true;
	return false;
}

/* GETTERS AND SETTERS */

int					Player::getX()
{
	return this->x;
}

int					Player::getY()
{
	return this->y;
}

void				Player::setHP(int newhp)
{
	this->hp = newhp;
}

int					Player::getHP()
{
	return this->hp;
}
