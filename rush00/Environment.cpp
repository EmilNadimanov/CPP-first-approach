#include "Environment.hpp"
#include "Player.hpp"
#include "Missile.hpp"
#include "Enemy.hpp"

/* MACROS */
#define __DELAY_ 15000

/* CONSTRUCTOR */

	class Player;
		Environment::Environment() // Initialize parameters, create a playable unit
{
	initscr();
	nodelay(stdscr, true); // the program will not wait for user input in 'getch()'
	keypad(stdscr, true);
	noecho();
	curs_set(0);
	score = 0;
	delay = __DELAY_;
	symbol = (char)219;
	iters = 0;
	set_borders();
}

/* MEMBERS */

void	Environment::set_borders()
{
	for (int i = 0; i < max_x; i++) // draw upper and bottom lines
	{
		move(1, i);
		addch(symbol);
		move(max_y - 1, i);
		addch(symbol);
	}
}

void	Environment::start(Player &player)
{
	while(1)
	{
		if (++iters % 120 == 0/*  && enemies.size() < 15 */) //each 150 iterations an enemy is spawned
		{
			enemies.push_back(new Enemy());
			iters = 0;
		}
		char input = player.action();
		if (input == 'q') //if BACKSPACE then quit
			return;
		else if (input == 's') // if SPACE then shoot
		{
			Missile* missile = player.shoot();
			missiles.push_back(missile);
		}
		for (size_t i = 0; i < enemies.size(); i++)
		{
			if (enemies[i]->action() == 's') //90% chance for each enemy to relocate
			{								//and a 1% chance to shoot
				Missile* missile = enemies[i]->shoot();
				missiles.push_back(missile);
			}
			if (enemies[i]->getX() == player.getX() && //If a player and an enemy collide the game is over
				enemies[i]->getY() == player.getY())
					player.setHP(0);
			if (enemies[i]->getX() == 1)
			{
				move(enemies[i]->getY(), enemies[i]->getX());
				addch(' ');
				delete enemies[i];
				enemies.erase(enemies.begin()+i);
			}
		}
		missile_computation(iters, player); //all the stuff about missiles hitting targets
		if (player.getHP() <= 0) //If you lose. And you certainly will.
		{
			move(max_y / 2, max_x / 2 - 12);
			attron(A_BOLD);
			printw("GAME OVER! YOUR SCORE: %d", score);
			attroff(A_BOLD);
			return;
		}
		move(max_y, 0);
		attron(A_BOLD);
		printw("SCORE: %d, HEALTH: %d", score, player.getHP());
		attroff(A_BOLD);
		refresh();
		usleep(delay);
	}
}

void			Environment::missile_computation(int iters, Player &player)
{
	if (iters % 3 == 0) //missle makes a move once every 3 iterations
		for (size_t i = 0; i < missiles.size(); i++)
		{
			char tmp = missiles[i]->action();
			if (tmp == 'd') //missiles are deleted once they hit the walls
			{
				delete missiles[i];
				missiles.erase(missiles.begin()+i);
			}
			if (missiles[i]->getX() == player.getX() && //If a player is hit he loses HP
				missiles[i]->getY() == player.getY() &&
				missiles[i]->getSymbol() == '<')
				{
					delete missiles[i];
					missiles.erase(missiles.begin()+i);
					player.setHP(player.getHP() - 1);
				}
			for (size_t j = 0; j < enemies.size(); j++) //if an enemy is hit he loses HP
			{
				if (missiles[i]->getX() == enemies[j]->getX() &&
					missiles[i]->getY() == enemies[j]->getY() &&
					missiles[i]->getSymbol() == '>')
				{
					enemies[j]->setHP(enemies[j]->getHP() - 1);
					move(max_y, 0); //Just updating your score
					attron(A_BOLD);
					printw("SCORE: %d, HEALTH: %d", score, player.getHP());
					attroff(A_BOLD);
				}
				if (enemies[j]->getHP() <= 0) //if an enemy dies, he and the fatal missile are deleted
				{
					delete enemies[j];
					delete missiles[i];
					move(missiles[i]->getY(), missiles[i]->getX()); 
					addch(' '); //this and the line above delete artifact missile symbols
					enemies.erase(enemies.begin()+j);
					missiles.erase(missiles.begin()+i);
					this->score += 100;
				}
			}
		}
}