#ifndef SNAKE_H
# define SNAKE_H

#include <ncurses.h>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <unistd.h>

struct snakepart
{
	int	x,y;
	snakepart(int col, int row);
	snakepart();
};

class snakeclass
{
	int			points, del, maxwidth, maxheight;
	char		direction, partchar, oldalchar, edible;
	bool		get;
	snakepart	food;
	std::vector<snakepart> snake;
	
	void	putfood();
	bool	collision();
	void	movesnake();
public:
			snakeclass();
			~snakeclass();
	void	start();
	
};

#endif
