#ifndef _ENEMY_HPP_
# define  _ENEMY_HPP_
#include <string>
#include <iostream>

class Enemy
{
	private:
		int hp;
		std::string type;
	public:
						Enemy();
						Enemy(int hp, std::string const & type);
						Enemy(Enemy const& obj);
		virtual			~Enemy();
		void			operator=(Enemy const& obj);
		std::string	/*  */	getType() const;
		int				getHP() const;
		virtual void	takeDamage(int dmg);
};

#endif
