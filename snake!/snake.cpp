#include "snake.hpp"

snakepart::snakepart(int col, int row)
{
	x = col;
	y = row;
}

snakepart::snakepart()
{
	x = 0;
	y = 0;
}

snakeclass::snakeclass()
{
	initscr();
	nodelay(stdscr, true); // the program will not wait for user input
	keypad(stdscr, true);
	noecho();
	curs_set(0);
	getmaxyx(stdscr, maxheight, maxwidth);
	partchar = 'x';
	oldalchar = (char)219;
	edible = '*';
	food.x = 0;
	food.y = 0;
	for (int i = 0; i < 5; ++i)
	{
		snake.push_back(snakepart(40 + i, 10));
	}
	points = 0;
	del = 100000;
	direction = 'l';
	get = false;
	srand(time(0));
	this->putfood();
	for (int i = 0; i < maxwidth - 1; i++)
	{
		move(0, i);
		addch(oldalchar);
		move(maxheight - 2, i);
		addch(oldalchar);
	}
	for (int i = 0; i < maxheight - 1; i++)
	{
		move(i, 0);
		addch(oldalchar);
		move(i, maxwidth - 2);
		addch(oldalchar);
	}
	for(unsigned int i = 0; i < snake.size(); i++)
	{
		move(snake[i].y, snake[i].x);
		addch(partchar);
	}
	move(maxheight - 1, 0);
	printw("%d", points);
	move(food.y, food.x);
	addch(edible);
	refresh();
}

snakeclass::~snakeclass()
{
	nodelay(stdscr, false);
	getch();
	endwin();
}

void 	snakeclass::putfood()
{
	while(1)
	{
		int tmpx = rand() % (maxwidth - 4)+ 1;
		int tmpy = rand() % (maxheight - 4) + 1;
		for (unsigned int i = 0; i < snake.size(); i++)
			if (snake[i].x == tmpx && snake[i].y == tmpy)
				continue;
		food.x = tmpx;
		food.y = tmpy;
		break;
	}
	move(food.y, food.x);
	addch(edible);
	refresh();
}

bool	snakeclass::collision()
{
	if (snake[0].x == 0 || snake[0].x == maxwidth - 2 ||
			snake[0].y == 0 || snake[0].y == maxheight - 2)
		return true;
	for (unsigned int i = 3; i < snake.size(); i++)
		if (snake[0].x == snake[i].x && snake[0].y == snake[i].y)
			return true;
	if (snake[0].x == food.x && snake[0].y == food.y)
	{
		get = true;
		putfood();
		points += 10;
		move(maxheight -1, 0);
		printw("%d", points);
		if (points % 100 == 0)
			del -= 10000;	
	}
	else
		get = false;
	return false;
}

void	snakeclass::movesnake()
{
	int tmp = getch();
	switch (tmp)
	{
		case KEY_LEFT:
			if (direction != 'r')
				direction = 'l';
			break;
		case KEY_RIGHT:
			if (direction != 'l')
				direction = 'r';
			break;
		case KEY_UP:
			if (direction != 'd')
				direction = 'u';
			break;
		case KEY_DOWN:
			if (direction != 'u')
				direction = 'd';
			break;
		case KEY_BACKSPACE:
			direction = 'q';
			break;
	}
	if (!get)
	{
		move(snake[snake.size() - 1].y, snake[snake.size() - 1].x);
		addch(' ');
		refresh();
		snake.pop_back();
	}
	if (direction == 'l')
		snake.insert(snake.begin(), snakepart(snake[0].x-1, snake[0].y));
	else if (direction == 'r')
		snake.insert(snake.begin(), snakepart(snake[0].x+1, snake[0].y));
	else if (direction == 'u')
		snake.insert(snake.begin(), snakepart(snake[0].x, snake[0].y-1));
	else if (direction == 'd')
		snake.insert(snake.begin(), snakepart(snake[0].x, snake[0].y+1));
	move(snake[0].y, snake[0].x);
	addch(partchar);
	refresh();
}

void	snakeclass::start()
{
	while(1)
	{
		if(collision())
		{
			move(maxheight/2 - 4, maxwidth/2);
			attron(A_REVERSE);
			printw("GAME OVER!");
			attroff(A_REVERSE);
			break;
		}
		movesnake();
		if (direction == 'q')
			break;
		usleep(del);
	}
}
