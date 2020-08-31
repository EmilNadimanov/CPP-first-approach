#include "Headers.hpp"
#include "Environment.hpp"
#include "Player.hpp"

int main()
{
	srand(time(0));
	Environment d;
	Player player;
	d.start(player);
	nodelay(stdscr, false);
	getch();
	endwin();
}